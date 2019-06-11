#include <stdio.h>


int subtracao(int a, int b)
{
	int sub_num = a-b;
	return sub_num;
}
int soma(int a, int b)
{
	int soma_num = a+b;
	return soma_num;
}
int multiplicacao(int a, int b)
{
	int mult = a*b;
	return mult;
}
int main()
{
	printf("Soma dos numeros: %d\n", soma(3,4));
	printf("Subtracao dos numeros: %d\n", subtracao(4,3));
	printf("Multiplicacao dos numeros: %d\n", multiplicacao(2,3));
	return 0;
}
