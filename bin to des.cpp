#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num,digit=0,ans=0,i=0;
	cin>>num;
	while(num!=0){
		
		digit = num%10;
		num= num/10;
		if(digit == 1){
			ans = ans+pow(2,i);
		}
		i++;
	}
	return ans;
		
}
