#include<iostream>
using namespace std;

int getSum(int arr[], int size){
	if(size < 0){
		return 0;
	}
	return arr[size] + getSum(arr, size-1);
}

int main(){
	int arr[9] = {1,3,5,0,2,4,9,9,9};
	int size = sizeof(arr) / 4;       /*4 is size of int*/ //size of opperator gives size of array in bits 
														   //like array with integer elements will give no of elements in array *4
	int sum =getSum(arr, size);
	
	cout<<"Sum is "<<sum<<endl;
	
	return 0;
}

