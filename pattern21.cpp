#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	char ch='A';
	cout<<"Enter number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<ch;
			ch=ch+1;
		}
		cout<<"\n";
	}
	return 0;
}
