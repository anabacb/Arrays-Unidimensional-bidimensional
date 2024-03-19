#include <iostream>
using namespace std;

main(){
	int matriz[2][3]={{10,20,30},{40,50,60}};
	
	for(int i=0;i<2;i++){
		for(int ii=0;ii<3;ii++){
			cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;
			
		}
	}
	
	system("pause");
}
