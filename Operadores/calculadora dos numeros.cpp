#include<iostream>

using namespace std;

int main(){
	float x, y, suma, resta, multiplicacion, division;
	int opc;
	cout<<"\tBienvenido a mi calculadora"<<endl;
	cout<<"Ingresa el primer valor: "; cin>>x;
	cout<<"Ingresa el otro valor: "; cin>>y;
	
	cout<<"1. Suma";
	cout<<"\n2. Resta";
	cout<<"\n3. Multpilicacion";
	cout<<"\n4. Division";
	cout<<"\n5. Salir";
	cout<<"\nQue quieres hacer?";
	cin>>opc;
	
	switch(opc){
		case 1:
			suma = x + y;
			cout<<"Tu resultado es: "<<suma<<endl; break;
		case 2: 
			resta = x - y;
			cout<<"Tu resultado es: "<<resta<<endl; break;
		case 3:
			multiplicacion = x * y;
			cout<<"Tu resultado es: "<<multiplicacion<<endl; break;
		case 4:
			division = x / y;
			cout<<"Tu resultado es: "<<division<<endl; break;
		case 5: break;
			
		
		
	}
	
	
	
	return 0;
}
