#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"Enter number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		char ch='A'+i-1;
		for(j=1;j<=i;j++){
			cout<<ch;
		}
		cout<<"\n";
	}
	return 0;
}
