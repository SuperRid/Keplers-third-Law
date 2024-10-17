#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //Атрибут для main
int main(array<String^>^ args) //^ - вместо delete
{
	Application::SetCompatibleTextRenderingDefault(false); //Обработа тескта
	Application::EnableVisualStyles(); //Обработка визуальных стилей 
	PhysTask313::MyForm form; //Обращение к классу и создание элемента form
	Application::Run(% form); // Обращение к методу Run, передача по ссылке form
}


double PhysTask313::MyForm::f(double x, double y)
{
	return -M * G * x / pow(x * x + y * y, 1.5);
}

double PhysTask313::MyForm::g(double x, double y)
{
	return -M * G * y / pow(x * x + y * y, 1.5);
}

void PhysTask313::MyForm::DrawEarth() //Отрисовка Земли, круг прорисовыается через полярные координаты, где r = радиус Земли
{
	this->chart1->Series[1]->Points->Clear();

	R_Earth = 6400000;
	for (int i = 0; i <= 360; i++)
	{
		angle = i * 4 * atan(1)/ 180;
		double x = R_Earth * cos(angle);
		double y = R_Earth * sin(angle);
		this->chart1->Series[1]->Points->AddXY(x, y);
	}
}


void PhysTask313::MyForm::Kepler()
{
	DrawEarth();
	n = (int)(tmax / dt) + 2; //Размерность массива данных
	xx = new double[n + 1];
	yy = new double[n + 1];
	vxx = new double[n + 1];
	vyy = new double[n + 1];

	r = 0; //радиус вектор
	xx[0] = x0 * 1000; //Начальные координаты в км, переводится в м
	yy[0] = y0 * 1000;;
	vxx[0] = vx;//начальные скорости в м/c
	vyy[0] = vy;
	G = 6.673e-11;
	M = 6e24;
	TT = false;
	aa = false; 
	stop = false; //Переменная для остановки программы
	a,b,e,T,kep3 = 0;
	max, min = 0;
	double kx[4], ky[4];
	double x, y, x_, y_;
	int i = 0;
	double t = 0;

	do //Расчет новых координат и скоростей объекта на каждой итерации, метод РК
	{
		x = xx[i];
		y = yy[i];
		x_ = vxx[i];
		y_ = vyy[i];

		t = i * dt;
		kx[0] = f(x, y) * dt;
		ky[0] = g(x, y) * dt;

		kx[1] = f(x + x_ * dt / 2., y + y_ * dt / 2.) * dt;
		ky[1] = g(x + x_ * dt / 2., y + y_ * dt / 2.) * dt;

		kx[2] = f(x + x_ * dt / 2. + kx[0] * dt / 4, y + y_ * dt / 2. + ky[0] * dt / 4) * dt;
		ky[2] = g(x + x_ * dt / 2. + kx[0] * dt / 4, y + y_ * dt / 2. + ky[0] * dt / 4) * dt;

		kx[3] = f(x + x_ * dt + kx[1] * dt / 2., y + y_ * dt + ky[1] * dt / 2.) * dt;
		ky[3] = g(x + x_ * dt + kx[1] * dt / 2., y + y_ * dt + ky[1] * dt / 2.) * dt;

		xx[i + 1] = x + x_ * dt + (kx[0] + kx[1] + kx[2]) * dt / 6.;
		yy[i + 1] = y + y_ * dt + (ky[0] + ky[1] + ky[2]) * dt / 6.;

		vxx[i + 1] = x_ + (kx[0] + 2 * kx[1] + 2 * kx[2] + kx[3]) / 6.;
		vyy[i + 1] = y_ + (ky[0] + 2 * ky[1] + 2 * ky[2] + ky[3]) / 6;

		Ek = 0.5 * (vxx[i+1] * vxx[i+1] + vyy[i+1] * vyy[i+1]) * 1e-7;
		Ep = -G * M / sqrt(xx[i + 1] * xx[i + 1] + yy[i + 1]* yy[i + 1]) * 1e-7;
		E = Ek + Ep;
		Lz = round((xx[i + 1] * vyy[i + 1] - yy[i + 1] * vxx[i + 1]) * 1e-7) ;

		r = sqrt(xx[i + 1] * xx[i + 1] + yy[i + 1] * yy[i + 1]); //Вычисление радиус вектора на i + 1 шаге
		rminimax = sqrt(xx[i] * xx[i] + yy[i] * yy[i]); //Вычисление радиус вектора на i шаге, для сравнения

		//Условие выполняется при неотрицательном произвдении начальной скорости по x и начальной координаты x0  
		if ((vx * x0) >= 0)
		{
			if (!TT)
			{
				if (r > rminimax) //Выполняется пока радиус на i+1 шаге больше радиуса на i шаге, поиск максимального радиуса
				{
					rminimax = r;
					max = r;
				}
				else //Как только радиус на i+1 шаге меньше радиуса на i шаге, запоминается Время и координаты, когда радиус был max
				{
					TT = true;
					Ta = t;
					xc = abs(xx[i + 1]);
					yc = abs(yy[i + 1]);
				}
			}

			
			if ((!aa) && (TT))//Выполняется только после отработки предыдушего условия
			{
				if (r < rminimax)  //Выполняется пока радиус на i+1 шаге меньше радиуса на i шаге, поиск минимального радиуса
				{
					rminimax = r;
					min = r;
				}
				else //Как только радиус на i+1 шаге больше радиуса на i шаге
				{
					aa = true;
					T = (t - Ta) * 2; //Вычисляется период (tmax - tmin) * 2 
					a = ((max + min)) / 2; //Вычисление большой полуоси (max радиус + min радиус)/2
					kep3 = (T * T) / (a * a * a);//Третий закон Кеплера
					xc = (abs(xc) * (a - min)) / max;//Вычисление координат центра эллипса
					yc = (abs(yc) * (a - min)) / max;
					c = sqrt(xc * xc + yc * yc); //Радиус вектор от центра Земли до центра эллипса
					b = sqrt(a * a - c * c); //Вычилсение малой полуоси
					e = c / a; //Вычисление эксцентриситет 
					//Вывод в форму вычисленных велечин 
					textBox_a->Text = Convert::ToString(round(0.001 * a));
					textBox_b->Text = Convert::ToString(round(0.001 * b));
					textBox_e->Text = Convert::ToString((round(1000*e))/1000.);
					textBox_T->Text = Convert::ToString(T);
					textBox_kep3->Text = Convert::ToString((round(1e17*kep3))/1.e17);
				}
			}
		}

		//Условие выполняется при отрицательном произвдении начальной скорости по x и начальной координаты x0  
		if ((vx*x0)< 0)
		{
			if (!TT)
			{
				if (r < rminimax)
				{
					rminimax = r;
					min = r;
				}
				else
				{
					TT = true;
					Ta = t;
				}
			}


			if ((!aa) && (TT))
			{
				if (r > rminimax)
				{
					rminimax = r;
					max = r;
					xc = abs(xx[i + 1]);
					yc = abs(yy[i + 1]);
				}
				else
				{
					aa = true;
					T = (t - Ta) * 2;
					a = ((max + min))/ 2;
					kep3 = T * T / (a * a * a);
					xc = (abs(xc) * (a - min)) / max;
					yc = (abs(yc) * (a - min)) / max;
					c = sqrt(xc * xc + yc * yc);
					b = sqrt(a * a - c * c);
					e = c / a;
					textBox_a->Text = Convert::ToString(round(0.001 * a));
					textBox_b->Text = Convert::ToString(round(0.001 * b));
					textBox_e->Text = Convert::ToString((round(1000*e))/1000.);
					textBox_T->Text = Convert::ToString(T);
					textBox_kep3->Text = Convert::ToString((round(1e17 * kep3)) / 1.e17);
				}
			}
		}

		//Вывод график энергий и момента импульса
		if (i % 10 == 0)
		{
			this->chart2->Series[0]->Points->AddXY(t, Ek);
			this->chart3->Series[0]->Points->AddXY(t, Ep);
			this->chart4->Series[0]->Points->AddXY(t, E);
			this->chart5->Series[0]->Points->AddXY(t, Lz);
		}
		
		textBox_Lz->Text = Convert::ToString(round(Lz)) + "E+7";

		//Вывод траектории на графике
		if (i % 10 == 0)
		{
			this->chart1->Series[0]->Points->AddXY(xx[i + 1], yy[i + 1]);
		}
		Application::DoEvents();//Обновление формы во время работы программы
		i++;

		//Остановка программы, при нажатии кнопки стоп или при падаении спутника на Землю
		if (stop) break;
		if (r <= R_Earth)
		{
			stop = true;
			MessageBox::Show("Спутник упал!");
		}

	} while (t <= tmax && !stop);

}


//Функция при нажатии кнопки старт
System::Void PhysTask313::MyForm::стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_x0->Text == "" || textBox_y0->Text == "" || textBox_vy->Text == "" || textBox_vx->Text == "" || textBox_dt->Text == "" || textBox_t_max->Text == "")
	{
		//Проверка на пустые поля, если пыстые замена на дефолтные параметры 
		MessageBox::Show("Пустые ячейки заменены по умолчанию!");
		DefaultParams();
		textBox_x0->Text = Convert::ToString(x0);
		textBox_y0->Text = Convert::ToString(y0);
		textBox_vy->Text = Convert::ToString(vy);
		textBox_vx->Text = Convert::ToString(vx);
		textBox_dt->Text = Convert::ToString(dt);
		textBox_t_max->Text = Convert::ToString(tmax);

	}
	else
	{
		//Иначе вводим сами начальные значения 
		x0 = Convert::ToInt32(textBox_x0->Text);
		y0 = Convert::ToInt32(textBox_y0->Text);
		vy = Convert::ToInt32(textBox_vy->Text);
		vx = Convert::ToInt32(textBox_vx->Text);
		dt = Convert::ToDouble(textBox_dt->Text);
		tmax = Convert::ToInt32(textBox_t_max->Text);
	}

	//Опрделение границ графиков орбиты, энергий, момента импульса
	chart1->ChartAreas[0]->AxisX->Maximum = 3e7;
	chart1->ChartAreas[0]->AxisX->Minimum = -7e7;
	chart1->ChartAreas[0]->AxisY->Maximum = 4e7;
	chart1->ChartAreas[0]->AxisY->Minimum = -4e7;

	chart2->ChartAreas[0]->AxisX->Maximum = tmax;
	chart2->ChartAreas[0]->AxisX->Minimum = 0;

	chart3->ChartAreas[0]->AxisX->Maximum = tmax;
	chart3->ChartAreas[0]->AxisX->Minimum = 0;

	chart4->ChartAreas[0]->AxisX->Maximum = tmax;
	chart4->ChartAreas[0]->AxisX->Minimum = 0;

	chart5->ChartAreas[0]->AxisX->Maximum = tmax;
	chart5->ChartAreas[0]->AxisX->Minimum = 0;
	
	//Очистка графиков перед отрисовкой
	this->chart1->Series[0]->Points->Clear();
	this->chart2->Series[0]->Points->Clear();
	this->chart3->Series[0]->Points->Clear();
	this->chart4->Series[0]->Points->Clear();
	this->chart5->Series[0]->Points->Clear();

	//Очитска полей в форме перед отрисовкой
	textBox_Lz->Text = "";
	textBox_a->Text = "";
	textBox_b->Text = "";
	textBox_e->Text = "";
	textBox_T->Text = "";
	textBox_kep3->Text = "";

	//Очистка динамических массивов перед отрисовкой 
	delete[] xx;
	delete[] yy;
	delete[] vxx;
	delete[] vyy;

	//Запуск рассчетов и отрисовки
	Kepler();
}

//Функция при нажатии кнопки стоп
System::Void PhysTask313::MyForm::стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	stop = true;
}

//Функция при нажатии кнопки выход
System::Void PhysTask313::MyForm::выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

//Функция с дефолтными параметрами 
void PhysTask313::MyForm::DefaultParams()
{
	x0 = 11000;
	y0 = 0;
	vy = 6500;
	vx = 3000;
	dt = 5;
	tmax = 26000;
}

//анимация при маленьком dt
	/*if (i % (2*(h+vy + tmax/10) / 1000) == 0 && i <= n/10)
	{
		this->chart1->Series[0]->Points->AddXY(xx[i + 1], yy[i + 1]);
	}

	if (i % (20 * (h + vy + tmax / 10) / 1000) == 0 && i > n/10)
	{
		this->chart1->Series[0]->Points->AddXY(xx[i + 1], yy[i + 1]);
	}*/

	/*if (vx == 0)
			{
				if (!aa)
				{
					if (vyy[i + 1] * vyy[i] < 0)
					{
						aa = true;
						a = abs(R_Earth + h * 1000 - xx[i+1]);
						b = abs(yy[i + 1]);
						e = sqrt(1 - b*b/(a*a));
						textBox_a->Text = Convert::ToString(int(0.001 * a));
						textBox_b->Text = Convert::ToString(int(0.001 * b));
						textBox_e->Text = Convert::ToString((int(1000 * e)) / 1000.);
					}
				}

				if (!TT)
				{
					if (vxx[i + 1] * vxx[i] < 0)
					{
						TT = true;
						T = 2 * t;
						kep3 = T * T * 1e9 / (a * a * a);
						textBox_T->Text = Convert::ToString(T);
						textBox_kep3->Text = Convert::ToString((int(1e8 * kep3)) / 1.e8);
					}
				}
			}*/