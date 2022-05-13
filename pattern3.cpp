#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter a number: ";
	cin>>n;
	for(i=n;i>=1;i--){
		for(j=i;j>=1;){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
