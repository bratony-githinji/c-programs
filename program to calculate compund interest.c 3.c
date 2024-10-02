//program to calculate compuond interest
/* 
Author:BrianAnthony Githinji Nyawira
Date:16/10/2024
*/
//preprocessor directive
#include<stdio.h>
int main() {
	//declaration and initialization
    float amnt,rate,time,compint,period;
	int n;
	printf("enter principal amount \n");
	scanf("%f",& amnt);
	printf("enter rate of interest \n");
	scanf("%f",&rate);
	printf("enter time in period (in years) \n");
	scanf("%f",&time);
	printf("Enter the number of time compounding is done in a year\n");
	scanf("%d",&n);
	compint=amnt*pow(1+(rate/100)/n,period);	
	printf("Compound interest = %2f",compint);
	return 0; 
}