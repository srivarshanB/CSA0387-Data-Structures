#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b){
	return(*(int*)b-*(int*)a);
}
int main(){
	int arr[]={45,64,18,7,3,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i;
	printf("Original array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	printf("\nSorted array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
