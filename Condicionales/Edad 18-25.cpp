#include<iostream>

using namespace std;

int main(){
	int edad;
	cout<<"Ingresa tu edad: "; cin>>edad;
	
	if (edad >= 18 && edad <= 25){
		cout<<"Tu edad esta en el rango de 18-25 años";
	}
	else{
		cout<<"Tu edad no esta dentro del rango";
	}
	return 0;
}
