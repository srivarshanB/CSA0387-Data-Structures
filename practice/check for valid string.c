#include<stdio.h>
#include<ctype.h>
int isValidString(const char*str){
	while(*str){
		if(!isalpha(*str)){
			return 0;
		}
		str++;
	}
	return 1;
}
int main(){
	const char*inputString="Srivarshan";
	if(isValidString(inputString)){
		printf("the string is valid");
	}
	else{
		printf("the string is invalid");
	}
	return 0;
}
