#include<iostream>
using namespace std;

int leng(char arr[])
{
	int count=0;
	for(int i=0; arr[i] != '\0';i++){
		count++;
	}
	return count;
}

void rev(char arr2[],int n){
	int i=0;
	int e=n-1;
	while(i<e){
		swap(arr2[i++],arr2[e--]);
	}
}
int main(){
	char arr[20];
	
	cout << "Enter the string: " << endl;
	cin >> arr;
	cout << "String is : ";
	cout << arr << endl;
	int l=leng(arr);
	cout << "length is: " << l<<endl;
	rev(arr,l);
	cout << "reverse is: " << arr<<endl;
}
