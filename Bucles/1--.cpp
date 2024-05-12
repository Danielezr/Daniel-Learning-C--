//Este codigo usa un ciclo do-while para imprimir los numeros 10-1.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);

	system("pause");
	return 0;
}
