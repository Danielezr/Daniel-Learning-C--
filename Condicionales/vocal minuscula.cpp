#include<iostream>

using namespace std;

int main(){
	char letra;
	cout<<"Escribe una vocal: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		case 'A' :
		case 'E':
		case 'I':
		case 'O' :
		case 'U' : cout<<"Es una vocal Mayuscula"; break;
		default : cout<<"NO es una vocal"; break;
	}
	
	
	return 0;
}
