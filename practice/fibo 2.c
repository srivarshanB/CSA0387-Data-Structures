#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,n3;
	printf("Number of elements:");
	scanf("%d",&num);
	printf("\n%d%d",n1,n2);
	int i;
	for(i=2;i<num;++i){
			n3=n1+n2;
			printf("%d",n3);
			n1=n2;
			n2=n3;
	}
	return 0;
}
