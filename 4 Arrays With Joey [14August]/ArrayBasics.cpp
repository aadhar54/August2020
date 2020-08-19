#include<iostream>
using namespace std;

int main(){

	int a[100]; // defining array with 100 elements

	//0 ........99 
	a[0]=5;
	cout<<a[1]<<endl; // 0 


	int b[5];
	for(int j=0;j<5;j++){
		// 0<5
		// 1<5
		// 2<5
		// 3<5
		// 4<5
		//loop runs five times
		cout<<"Enter "<<j<<" element"<<endl;
		cin>>b[j];  // User Input 
		cout<<b[j]<<endl;


	}

	return 0;
}