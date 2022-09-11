#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
	if(size <= 0){
		return 0;
	}
	int ans = arr[size - 1] +sum(arr,size - 1);
	return ans;	
}


int main()
{
	
	int arr[]={1,2,3,4,5};
	
	cout<< sum(arr, 5);
	
}
