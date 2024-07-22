#include<stdio.h>
void margeSort(int arr[],int low,int high);
void marge(int arr[],int low,int mid,int high);
void main(){
	int arr[] = {3,2,5,0,1};
	margeSort(arr,0,4);
	int i;
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
void margeSort(int arr[],int low,int high){
	int mid;
	if(low<high){
	
		mid = (low+high)/2;
		margeSort(arr,low,mid);
		margeSort(arr,mid+1,high);
		marge(arr,low ,mid,high);
	}
}
void marge(int arr[],int low,int mid,int high){
	int i,j,k;

	int n1 = mid-low+1;
	int n2 = high-mid;
	
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++){
		L[i]= arr[low+i];
	}
	for(j=0;j<n2;j++){
		R[j]= arr[mid+j+1];
	}
	
	i=0;
	j=0;
	k=low;
	
	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			arr[k]=L[i];
			i++;
		}else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}
