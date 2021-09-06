#include <iostream>
#include <conio.h>
using namespace std;
main(){
	char opcion;
	cout<<"ingrese una letra y este programa le dira si es una vocal o no ";
	cin>>opcion;
	switch(opcion){
		case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
			cout<<opcion<<" es vocal";
			break;
		default:
				cout<<opcion<<" no es vocal";
				break;
	}
	
	
}
