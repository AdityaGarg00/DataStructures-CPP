//2d array
#include <iostream>
#include<vector>
using namespace std;
bool ispresent(int arr[][3],int target,int i,int j){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(target == arr[i][j]){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	vector<int> vec;
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sum =0;
	//sum of each row
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
		vec.push_back(sum);
		sum=0;
		cout<<endl;
	}
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	int target;
	 cout<<"Enter element to be found: ";
	 cin>>target;
	if(ispresent(arr,target,3,3)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}

