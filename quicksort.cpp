#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition(int arr[],int i,int r){
	for(int a=0;a<r;a++){
		if(arr[a]<arr[r]){
		
			swap(arr[i],arr[a]);
			i++;}
	}
	
	swap(arr[i],arr[r]);
	
	return i;
}
void quickSort(int arr[],int i,int r){
	
	if(i>r)
		return;
	int ortadaki = partition(arr,i,r);
		
		
		
		quickSort(arr,i,ortadaki-1);
		quickSort(arr,ortadaki+1,r);
}



void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = 6; 
	quickSort(arr, 0, n-1); 
	printArray(arr, n); 
	return 0; 
} 
