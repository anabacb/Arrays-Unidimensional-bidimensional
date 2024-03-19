#include <iostream>
using namespace std;

main(){
	int tam=0;
	cout<<"Cuantas notas desea ingresar:";
	cin>>tam;
	int notas[tam];
	for(int i=0;i<tam;i++){
		cout<<"Ingrese nota:"<<i+1<<":";
		cin>>notas[i];
	}
	
	system("pause");
	
}

