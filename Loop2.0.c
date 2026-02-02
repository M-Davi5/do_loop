//A program to write 1-100
#include<stdio.h>
int main(){
	int i;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		printf("%d\n",i);
		printf("%d\n",i*i);
		printf("%d\n",i*i*i);
		sum=sum+(i*i*i);
	
	}
	printf("The sum of cube is %d\n",sum);
	return 0;
	}