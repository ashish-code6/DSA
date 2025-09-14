// reverse array using recurssion
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int start,int end){
	vector<int>ans;
	
//	base case
	if(start>=end){
		return;
	}	
	swap(arr[start],arr[end]);
	reverse(arr,start+1,end-1);
}


int main(){
	
	int n,start,end;
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
	
	reverse(arr,0,n-1);
	
//	print reverse array
	cout<<"\n Reverse Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	
	return 0;
}
