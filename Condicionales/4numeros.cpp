#include<iostream>

using namespace std;
 
int main(){
	int a, b, c, d;
	cout<<"Introduce el valor a: "; cin>>a;
	cout<<"Introduce el valor b: "; cin>>b;
	cout<<"Introduce el valor c: "; cin>>c;
	cout<<"Introduce el valor d: "; cin>>d;
	
	if (d==c){
		cout<<"El valor de d y c es igual";
	}
	else if(d==b){
		cout<<"El valor de b y d es igual";
	}
	else if(d==a){
		cout<<"El valor de d y a es igual";
	}
	else{
		cout<<"Ningun valor es igual";
	}
	

	return 0;
}
