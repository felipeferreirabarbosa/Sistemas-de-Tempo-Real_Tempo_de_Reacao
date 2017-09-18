#include <iostream>
#include "BlackGPIO/BlackGPIO.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

using namespace BlackLib;

BlackGPIO e(GPIO_22, output);
BlackGPIO f(GPIO_61, output);
BlackGPIO d(GPIO_27, output);
BlackGPIO g(GPIO_65, output);
BlackGPIO c(GPIO_47, output);
BlackGPIO a(GPIO_46, output);
BlackGPIO P1(GPIO_23, output);
BlackGPIO b(GPIO_26, output);
BlackGPIO E(GPIO_45, output);
BlackGPIO F(GPIO_44, output);
BlackGPIO A(GPIO_68, output);
BlackGPIO B(GPIO_67, output);
BlackGPIO D(GPIO_69, output);
BlackGPIO G(GPIO_66, output);
BlackGPIO C(GPIO_51, output);

void zero();
void display(double result);
void numero0_0();
void numero0_1();
void numero0_2();
void numero0_3();
void numero0_4();
void numero0_5();
void numero0_6();
void numero0_7();
void numero0_8();
void numero0_9();
void numero1_0();
void numero1_1();
void numero1_2();
void numero1_3();
void numero1_4();
void numero1_5();
void numero1_6();
void numero1_7();
void numero1_8();
void numero1_9();

int main()
{	
	clock_t t;
	double result;
	zero();
	BlackGPIO botao(GPIO_49, input);
	BlackGPIO led(GPIO_15, output);
	int pausa;
	std::string leitura_botao;
	numero1_0();
	P1.setValue(high);
	numero0_0();
	led.setValue(high);
	do
		leitura_botao = botao.getValue();
	while(leitura_botao == "0");
	while(1)
	{
		led.setValue(low);
		pausa = rand()%3;
		sleep(pausa);
		led.setValue(high);
		t = clock();
		do
			leitura_botao = botao.getValue();
		while(leitura_botao == "0");
		t = clock() - t;
		printf("Reaction = %f\n", (double)t/(double)CLOCKS_PER_SEC);
		zero();
		result = (double)t/(double)CLOCKS_PER_SEC;
		display(result);
	}
}

void display(double result)
{
	int primeiro_digito = (int)result;
	int segundo_digito = (int)((result - primeiro_digito)*10);
	switch(primeiro_digito)
	{
		case 0:
		 	numero1_0();
			break;
		case 1:
		 	numero1_1();
			break;
		case 2:
		 	numero1_2();
			break;
		case 3:
		 	numero1_3();
			break;
		case 4:
		 	numero1_4();
			break;
		case 5:
		 	numero1_5();
			break;
		case 6:
		 	numero1_6();
			break;
		case 7:
		 	numero1_7();
			break;
		case 8:
			numero1_8();
			break;
		case 9:
		 	numero1_9();
			break;
		default:
			break;
	}
	P1.setValue(high);
	switch(segundo_digito)
	{
		case 0:
		 	numero0_0();
			break;
		case 1:
		 	numero0_1();
			break;
		case 2:
		 	numero0_2();
			break;
		case 3:
		 	numero0_3();
			break;
		case 4:
		 	numero0_4();
			break;
		case 5:
		 	numero0_5();
			break;
		case 6:
		 	numero0_6();
			break;
		case 7:
		 	numero0_7();
			break;
		case 8:
			numero0_8();
			break;
		case 9:
		 	numero0_9();
			break;
		default:
			break;
	}
}

void zero()
{
	a.setValue(low);
	b.setValue(low);
	c.setValue(low);
	d.setValue(low);
	e.setValue(low);
	f.setValue(low);
	g.setValue(low);
	P1.setValue(low);
	A.setValue(low);
	B.setValue(low);
	C.setValue(low);
	D.setValue(low);
	E.setValue(low);
	F.setValue(low);
	G.setValue(low);
}

void numero0_0()
{
	A.setValue(high);
	B.setValue(high);
	C.setValue(high);
	D.setValue(high);
	E.setValue(high);
	F.setValue(high);

}

void numero0_1()
{
	B.setValue(high);
	C.setValue(high);
}

void numero0_2()
{
	A.setValue(high);
	B.setValue(high);
	D.setValue(high);
	E.setValue(high);
	G.setValue(high);	
}

void numero0_3()
{
	A.setValue(high);
	B.setValue(high);
	C.setValue(high);
	D.setValue(high);
	G.setValue(high);

}

void numero0_4()
{
	B.setValue(high);
	C.setValue(high);
	F.setValue(high);
	G.setValue(high);
}

void numero0_5()
{
	A.setValue(high);
	C.setValue(high);
	D.setValue(high);
	F.setValue(high);
	G.setValue(high);
}

void numero0_6()
{
	A.setValue(high);
	C.setValue(high);
	D.setValue(high);
	E.setValue(high);
	F.setValue(high);
	G.setValue(high);
}

void numero0_7()
{
	A.setValue(high);
	B.setValue(high);
	C.setValue(high);
}

void numero0_8()
{
	A.setValue(high);
	B.setValue(high);
	C.setValue(high);
	D.setValue(high);
	E.setValue(high);
	F.setValue(high);
	G.setValue(high);
}

void numero0_9()
{
	A.setValue(high);
	B.setValue(high);
	C.setValue(high);
	D.setValue(high);
	F.setValue(high);
	G.setValue(high);
}

void numero1_0()
{	
	a.setValue(high);
	b.setValue(high);
	c.setValue(high);
	d.setValue(high);
	e.setValue(high);
	f.setValue(high);
}

void numero1_1()
{
	b.setValue(high);
	c.setValue(high);
}

void numero1_2()
{
	a.setValue(high);
	b.setValue(high);
	d.setValue(high);
	e.setValue(high);
	g.setValue(high);	
}


void numero1_3()
{	
	a.setValue(high);
	b.setValue(high);
	c.setValue(high);
	d.setValue(high);
	g.setValue(high);
}

void numero1_4()
{	
	b.setValue(high);
	c.setValue(high);
	f.setValue(high);
	g.setValue(high);
}

void numero1_5()
{	
	a.setValue(high);
	c.setValue(high);
	d.setValue(high);
	f.setValue(high);
	g.setValue(high);
}

void numero1_6()
{	
	a.setValue(high);
	c.setValue(high);
	d.setValue(high);
	e.setValue(high);
	f.setValue(high);
	g.setValue(high);
}

void numero1_7()
{	
	a.setValue(high);
	b.setValue(high);
	c.setValue(high);
}

void numero1_8()
{	
	a.setValue(high);
	b.setValue(high);
	c.setValue(high);
	d.setValue(high);
	e.setValue(high);
	f.setValue(high);
	g.setValue(high);
}

void numero1_9()
{	
	a.setValue(high);
	b.setValue(high);
	c.setValue(high);
	d.setValue(high);
	f.setValue(high);
	g.setValue(high);
}

	
