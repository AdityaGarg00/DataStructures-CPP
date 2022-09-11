///pointers
#include<iostream>

using namespace std;

int main(){
	int j=50;

	int *p = &j;
	int arr[]={1,2,3,4};
	arr++;
	int *q = arr;
	cout<<"cb"<<*q<<endl;
//	int i= p;	//gives error
	cout<<"value of p before ic is"<<p<<endl;
	p++;
//	cout<<"value of i is"<<i;
	cout<<"value of p after ic is"<<p<<endl;
	cout<<"value of *p after ic is"<<*p<<endl;//garbage value
}
