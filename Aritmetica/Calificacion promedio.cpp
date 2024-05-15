#include<iostream>

using namespace std;

int main(){
	float practicas, teoria, participacion, nota_final = 0;
	
	cout<<"Resultado de practicas: "; cin>>practicas;
	cout<<"Resultado de teoria: "; cin>>teoria;
	cout<<"Resultado de participacion: "; cin>>participacion;
	
	practicas *= 0.30;
	teoria *= 0.60;
	participacion *= 0.10;
	
	nota_final = practicas + teoria + participacion;
		
	cout<<"\nTu calificacion final es: "<<nota_final<<endl;
	
	
	return 0;
}
