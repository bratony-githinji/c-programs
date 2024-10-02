//program to create loan disbursment/
/*
Author:BrianAnthony Githinji Nyawira
Date:2/10/2024
*/
#include<stdio.h>
int main (){
//variable declaration
int age;
float income;

printf("Please enter your age:");
scanf("%d",&age);

printf("Please enter your annualIncome here in ksh");
scanf("%f",&income);

if(age >= 21 & income >= 21000){
	printf("Congratulations you gualify for a loan.");
}else{
	printf("Unfortunately,we are unable to offer you a loan at this time");
}
return 0;	
}