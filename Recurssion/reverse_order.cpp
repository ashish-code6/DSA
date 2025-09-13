#include<bits/stdc++.h>
using namespace std;

void reverse(int num){
//	Base Condition
if(num==0){
	return;
}
cout<<num<<" ";
num=num-1;
reverse(num);
	
}

int main(){
	
	int num;
	cout<<"Enter Number:"<<endl;
	cin>>num;
	reverse(num);
	return 0;
}
