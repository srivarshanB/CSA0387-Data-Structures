#include<stdio.h>
void main(){
	int n,res;
	printf("Enter the number:");
	scanf("%d",&n);
	res=fact(n);
	printf("factorial=%d",res);
}
int fact(int num){
	if(num!=1)
		return num*fact(num-1);
	else
		return num;
}
