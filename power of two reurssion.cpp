#include<iostream>
using namespace std;
int poweroftwo(int num){
	if(num ==0){
		return 1;
	}
	int ans;
	ans = 2 * poweroftwo(num-1);
	return ans;
}
int main(){
	int n=4;
	return poweroftwo(n);
}
