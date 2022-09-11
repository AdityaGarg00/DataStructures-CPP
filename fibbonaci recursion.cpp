#include<iostream>
using namespace std;

int fib(int num){
	
	if(num == 0){
		return 0;
	}
	else if(num == 1){
		return 1;
	}
	return (fib(num-1)+fib(num-2));
	
	
}

int main(){
	int n =8;
	int start =0;
	return fib(n);
}
