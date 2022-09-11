#include<iostream>
using namespace std;
bool sorted(int *arr, int size){
	if(size == 0 || size == 1){
		return 1;
	}
	if([arr+0]>arr[1]){
		return 0;
	}
	else{
		bool remain = sorted(arr+1, size-1);
		return remain;
	}
}
int main(){
	int arr[] = {0,0,0,7,8,9};
	return sorted(arr, 6);
	
}
