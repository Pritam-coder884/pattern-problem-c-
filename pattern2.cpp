#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter a number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
