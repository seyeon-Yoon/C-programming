#include <stdio.h>
#include <math.h>
int main() 
{
	double a[5], avg, variance, Standard_Deviation= 0;
	int i = 0;

	printf("Enter 5 real numbers: ");
	
	for (i = 0; i < 5; i++) 
	{
		scanf("%lf", &a[i]);
		avg += a[i];
	}
	
	avg=avg/5;
	
	for (i = 0; i < 5; i++)
	{
	    variance = variance + pow(a[i]-avg,2);
	}
	
	variance = variance / 5 ;
	Standard_Deviation=sqrt(variance);
	printf("Standard Deviation: %.3lf",Standard_Deviation);

	return 0;
}