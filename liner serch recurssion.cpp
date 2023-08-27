#include<iostream>
using namespace std;
 bool search(int arr[], int size, int key){
	if(size == 0){
		return 0;
	}
	else if(arr[size] == key){
		return 1;
	}
	return search(arr,size-1,key);
}
int main(){
	int arr[10] = {3,7,4,0,9,1,2,5,6,8};
	int key = 8;
	int size = sizeof(arr) / 4; //here 4 is size of int;
	return search(arr, size, key);
}
