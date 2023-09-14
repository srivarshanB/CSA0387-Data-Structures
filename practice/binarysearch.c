#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target){
	while(left<=target){
		int mid=left+(right-left)/2;
		if(arr[mid]==target)
			return mid;
		if(arr[mid]<target)
			left=mid+1;
		else
			right=mid-1;
	}
	return -1;
}
int main(){
	int arr[]={10,20,30,40,60,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=60;
	int result=binarySearch(arr,0,n-1,target);
	if(result==-1)
		printf("Element not found");
	else
		printf("Element found at index %d",result);
	return 0;
}
