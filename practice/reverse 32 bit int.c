#include<stdio.h>
#include<limits.h>
int reverseInteger(int x){
	int reversed=0;
	while(x!=0){
		int lastDigit=x%10;
		if(reversed>INT_MAX/10||(reversed==INT_MAX/10 && lastDigit>7)){
			return 0;
		}
		if(reversed<INT_MIN /10||(reversed==INT_MIN/10 && lastDigit<-8)){
			return 0;
		}
		reversed=reversed*10+lastDigit;
		x/=10;
	}
	return reversed;
}
int main(){
	int num;
	printf("Enter the 32 bit signed integers:");
	scanf("%d",&num);
	int reversed=reverseInteger(num);
	printf("Reversed Integer:%d",reversed);
	return 0;
}
