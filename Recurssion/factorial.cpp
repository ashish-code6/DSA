//---Factorial----
#include<bits/stdc++.h>
using namespace std;

void fact(long long int n,long long int ans=1){
//	base case
	if(n==0){
		cout<<ans;
		return;
	}
	ans*=n;
	fact(n-1,ans);
	 
}


int main(){
	long long int n,ans=1;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	fact(n,ans);
	
	return 0;
}
