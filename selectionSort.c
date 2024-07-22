#include<stdio.h>
void selectionSort(int arr[],int len);
void main(){
	int arr[] ={2,3,0,44,1};
	selectionSort(arr,5);
	int i;
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
void selectionSort(int arr[],int len){
	int i ,j;
	for(i=0;i<len-1;i++){
		int minIndex = i;
		int minValue = arr[i];
		
		for(j=i+1;j<len;j++){
			if(arr[j]<minValue){
				minIndex =j;
				minValue = arr[j];
			}
		}
		
		if(i!=minIndex){
			arr[minIndex] = arr[i];
			arr[i] = minValue;
		}
	}
	
}
