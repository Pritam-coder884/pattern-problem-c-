#include<iostream>
using namespace std;
int main(){
	int i,j,n,count=1;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<count;
			count=count+1;
		}
		cout<<"\n";
	}
	return 0;
}
//int main(){
//	int i,j,n;
//	cout<<"Enter the number: ";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			cout<<i*(i-1)/2+j;
//		}
//		cout<<"\n";
//	}
//	return 0;
//}
