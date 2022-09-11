#include<iostream>
using namespace std;
int count(int number){
	
	if(number==0){
		return 0;
	}
	count(number-1);
	cout<<number;

	
}
int main(){
	int n=9;
	return count(n);
}
