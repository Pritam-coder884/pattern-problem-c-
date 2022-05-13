#include<iostream>
using namespace std;
//int main(){
//	int n,i,j,count=1;
//	cout<<"Enter the number: ";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			cout<<count<<"\t";
//			count=count+1;
//		}
//		cout<<"\n";
//	}
//	return 0;
//}
int main(){
	int n,i,j;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<n*i+j-n<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}


