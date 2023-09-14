#include<stdio.h>
int main(){
	int n,i;
	long long int sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	long long int a=0;
	long long int b=1; 
	for(i=0;i<n;i++){
		sum+=a;
		long long int c=a+b;
		a=b;
		b=c;
	}
	printf("sum of fibonacci series %d terms:%lld",n,sum);
	return 0;  
}
