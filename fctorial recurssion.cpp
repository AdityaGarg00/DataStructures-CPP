#include<iostream>
using namespace std;

int factorial(int number){
	if(number == 1){
		return 1;
	}
	int ans = number*factorial(number-1);
}


int main(){
	int num = 10;
	return factorial(num);
}
