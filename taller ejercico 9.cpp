#include <iostream>
#include <conio.h>
using namespace std;
main(){
	string bi;
	int mes, ano;
	string meses [13] = {"enero","febrerp","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
	cout<<"bienvenido al calendario empresarial \n ";
	cout<<"cual es el año actual "
	cin>>ano;
	if(ano%4 == 0 || (ano%400 == 0 || ano%100 == 0)){
		bi = "biciesto";
	}else{
		bi = "no biciesto";
	}
	cout<<"\ndigite el mes que desea visualizar ";
	cin>>mes;
	
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		cout<<"el mes "<<mes<<" ("<<meses[mes]<<") tiene \n30 dias \nel año "<<ano<<" es "<<bi;
	}else if(mes == 2){
	if (bi == "biciesto"){
		cout<<"el mes"<<mes<<" ("<<meses[mes]<<") tiene \n29 dias \nel año "<<ano<<" es "<<bi;
	}else{
		cout<<" el mes "<<mes<<" ("<<meses[mes]<<") tiene \n28 dias \nel año "<<ano<<" es "<<bi;
	}
	}else{
		cout<<"el mes "<<mes<<" ("<<meses[mes]<<") tiene \n31 dias \nel año "<<ano<<" es "<<bi;
	}
