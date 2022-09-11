#include<iostream>
using namespace std;
int is_sort(int *arr,int n){
	if(n == 0 ||n == 1){
		return 1;
	}
	else if(arr[0] <= arr[1]){
		return is_sort(arr+1,n-1);
	}
	return 0;
}
int main(){
	
	int arr[5] = {1,0,3,6,9};
	
	return is_sort(arr,5);
	
	
	
}
