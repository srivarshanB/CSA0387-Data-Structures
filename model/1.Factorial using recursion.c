#include<stdio.h> 
int factorial(int num); 
void main() 
{ 
	int n,res; 
	printf("enter a positive number:\n"); 
	scanf("%d",&n); 
	res=factorial(n); 
	printf("factorial=%d",res); 
} 
int factorial(int num) 
{ 
	if (num<0) 
	{
        printf("Invalid input.");
	}
	else if (num!=1) 
	{ 
		return num*factorial(num-1); 
	}
	else 
	{ 
		return num; 
	} 
}
