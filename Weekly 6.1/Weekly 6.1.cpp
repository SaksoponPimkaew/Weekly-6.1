
#include <stdio.h>
double msqr(double x, double y) {
	double j = 1;
	for (int i = y; i > 0; i--)
	{
		j=j*x;
	}
	return j;

}
double msqrt(double x,double y) {
	double i = 0.00;
	for ( i = 0.000000; msqr(i,y) <= x;) {
		i += 0.0000001;
	}
	return i;
}

int main()
{
	double number = 0, i, x;
	scanf_s("%lf",&number);
	scanf_s("%lf", &x);
	//printf("Insert Your root : ");
		printf("%lf", msqrt(number,x));
		return 0;
}

