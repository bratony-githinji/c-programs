//program to find the simple interest
/*
Author:BrianAnthony Githinji Nyawira
Date:27/09/2024
*/
#include<stdio.h>
int main () {
  float principal,rate,time,simpleinterest;
  printf("Enter principal amount \n");
  scanf("%f",&principal);
  printf("Enter rate of interest \n");
  scanf("%f",&rate);
  printf("Enter time (In years) \n");
  scanf("%f",&time);
  simpleinterest = (principal*rate*time)/100;
  printf("simpleinterest = %2f",&simpleinterest);
  return 0;
  
}
