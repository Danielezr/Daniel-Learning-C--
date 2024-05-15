#include<iostream>

using namespace std;
int main(){ 
	float precio, iva=0.08, p_iva=0, preciop=0;
	
	cout<<"\nCual es el precio de el articulo?"; cin>>precio;
	p_iva = precio * iva;
	preciop = precio + p_iva;
	cout<<"El precio c/IVA del 8% es: "<<preciop<<endl;

	return 0;
}
