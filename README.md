//while loop user input
/*
Author:BrianAnthony Githinji Nyawira
Reg No:CT101/G/22765/24
#include<stdio.h>
int main () {
	int i, start,sum=0,stop;
	
	printf("Enter a value for when to start:\n");
	scanf("%d",&start);
	
	printf("Enter a value for when to stop\n");
	scanf("%d",&stop);
	i=start;
	while(i<=stop)
	{
printf("%d\n",i);
i++;
sum=sum+i;
	}
	printf("The sum is %d",sum);
	
	
	return 0;
}
