#include<iostream>

using namespace std;

int main(){
	int year;
	cout<<"Tu año es bisiesto?";
	cout<<"Introduce un año: "; cin>>year;
	
	if(año%=4 == 0){
		if(año%100 == 0){
			if(año%400 == 0){	
				cout<<"Tu año es bisiesto";
			}
			else{
				cout<<"Tu año no es bisiesto";
			}
		}
	}
	
	return 0;
}
