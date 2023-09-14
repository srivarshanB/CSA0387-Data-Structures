#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,n3;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Fibonacci series:");
	int i;
	for(i=0;i<num;i++){
		if(i<=1)
			n3=i;
		else{
			n3=n1+n2;
			n1=n2;
			n2=n3;
		}
		printf(" %d",n3);
	}
	return 0;
}
