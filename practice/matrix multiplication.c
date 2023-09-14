#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],n,i,j,k;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the elements of matrix a:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix b:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][j]*b[i][j];
			}	
		}
	}	
	printf("The Product of two matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
