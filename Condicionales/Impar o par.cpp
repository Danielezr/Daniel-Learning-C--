#include<iostream>

using namespace std;

int main(){
	int x;
	cout<<"Digite un valor: "; cin>>x;
	
	
	if (x == 0){
		cout<<"Tu numero es 0";
	}
	else if(x > 0){
		cout<<"El numero " <<x<< " es positivo";
	}
	else{
		cout<<"El numero " <<x<< " es negativo";
	}
	return 0;
}
