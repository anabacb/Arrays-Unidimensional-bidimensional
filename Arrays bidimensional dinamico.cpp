#include <iostream>
using namespace std;

main(){
	int fil=0,col=0;
	cout<<"Ingrese las filas:";
	cin>>fil;
	cout<<"Ingrese las columnas:";
	cin>>col;
	int matriz[fil][col];
	cout<<"-------Ingresar------"<<endl;
	for(int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<":";
			cin>>matriz[i][ii];
			
		}
		cout<<"__________________"<<endl;
	}
	
	
	cout<<"-------Mostrar------"<<endl;
	for(int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;
			
		}
	}
	
	system("pause");
}
