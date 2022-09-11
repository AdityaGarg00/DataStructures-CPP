#include<iostream>
using namespace std;

void swap(){

}



int main()
{
	int arr[8]={4,9,5,2,6,2,3,1};
	
	for(int i=0;i<8;i+=2){
		swap(arr[i],arr[i+1]);		
	}
	
	for(int i=0;i<8;i++){
		cout<<arr[i];
	}
}
