// reverse array using recurssion
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the length of an array: "<<endl;
	cin>>n;
	vector<int>arr;
	cout <<"Enter the elementof an array:"<<endl;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);	
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	return 0;
}
