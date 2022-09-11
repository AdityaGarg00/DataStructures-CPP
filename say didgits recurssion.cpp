#include<iostream>
using namespace std;

string saydigit(string *arr,int N){
	if(N == 0)
		return arr[N];
	int digit = N % 10;
	N = N / 10;
	saydigit(arr, N);
	
	cout << arr[digit] <<" ";

	
}


int main(){
	string arr[10] = {"zero","one","two","three","four"
						,"five","six","seven","eight","nine"};
	int N = 521;
	
	saydigit(arr, N);
	
	return 0;
}
