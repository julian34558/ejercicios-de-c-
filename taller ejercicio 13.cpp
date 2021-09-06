#include <iostream>
#include <conio.h>

using namespace std;
main(){
	float r,e,a,total;
	int cr,ce,ca,cat,desa;
	string nombre;
	cout<<"bienvenido a la ferreteria \n";
	cout<<"introduzca el precio de los recogedores ";
	cin>>r;
	cout<<"introduzca el precio de las escobas ";
	cin>>e;
	cout<<"introduzca el precio de los aromatizantes ";
	cin>>a;
	system("cls");
	cout<<"\n \n \t\t\t\t\t\tdatos del cliente\n\n";
	cout<<"nombre ";
	cin>>nombre;
	cout<<"categoria del cliente(1-4) ";
	cin>>cat;
	cout<<"cuantos recogedores lleva el cliente (precio unitario "<<r<<"$) \n ";
	cin>>cr;
	cout<<"cuantas escobas de cerda llevara el cliente (precio unitario "<<e<<"$) \n";
	cin>>ce;
	cout<<"cuantos aromatizantes llevara el cliente (precio unitario "<<a<<"$) \n";
	cin>>ca;
	system("cls");
	total = (r*cr)+(e*ce)+(a*ca);
	cout<<"\n \n \t\t\t\t\t\tfactura final\n\n";
	cout<<"nombre: "<<nombre<<endl;
	cout<<"subtotal: "<<total<<endl;
	switch(cat){
		case 1:
			desc = 5;
			total -= total * 0.05;
			break;
		case 2:
			desc = 8;
			total -= total * 0.08;
			break;
		case 3:
			desc = 15;
			total -= total * 0.12;
			break;
		case 4
		    desc = 15;
		    total -= total *0.15;
		    break
		default;
		    desc = 0;
		    total = total;
		    break;
	}
	cout<<"descuento: "<<desc<<"%n";
	cout<<"total a pagar: "<<total<<"%\n";
}
