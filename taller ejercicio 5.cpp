#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
main (){
	int n1,n2;
	cout<<"digite el primer numero: "<<endl;
	cin>>n1;
	cout<<"digite el divisor: "<<endl;
	cin>>n2;
	if(n2 == 0){
		cout<<"no se puede dividir  entre 0";
	}else{
		cout<<"\n \nel resultado de la division es: "<<n1  / n2;
	}	
}
	
