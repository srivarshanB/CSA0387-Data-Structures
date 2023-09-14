#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	printf("Enter the string:");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(!strcmp(a,b))
		printf("palindrome");
	else
		printf("Not a palindrome");
	return 0;
}
