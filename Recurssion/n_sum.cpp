// Print sum of 1 to N.
#include <bits/stdc++.h>
using namespace std;
void summation(int num,int sum=0){
//	base case
	if(num<=0){
		cout<<sum<<endl;
		return;
	}
	
	sum+=num;
	num--;
	summation(num,sum);
//	cout<<sum<<endl;
	
}
int main(){
	
	int sum=0;
	int num;
	cout<<"Enter the Number:"<<" ";
	cin>>num;
	summation(num,sum);
	return 0;
}
