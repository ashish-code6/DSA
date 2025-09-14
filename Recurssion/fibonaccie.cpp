// Print fibonnaciie using recurssion
#include <bits/stdc++.h>

int fibonaccie(int n){
	if(n<=1){
		return n;
	}
	int last= fibonaccie(n-1);
	int slast = fibonaccie(n-2);
	
	return (last + slast);
}

using namespace std;
int main(){
	
	int n;
	cout<<"Enter the no.of terms: ";
	cin>>n;
	//0 1 1 2 3 5
	cout<<fibonaccie(n)<<endl;
	
	for(int i=0;i<n;i++){
		cout<<fibonaccie(i);
	}
	
	
	return 0;
}
