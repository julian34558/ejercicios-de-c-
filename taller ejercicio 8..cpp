#include <iostream>
#include <conio.h>
using namespace std;
main()
{
		float r,b,s,total;
	int cr,cb,cs,play;
	cout<<"bienvenido a la ferreteria \n";
	cout<<"introduzca el preciodelosrodillos: ";
	cin>>r;
	cout<<"introduzca el precio de las brochas de cerda: ";
	cin>>b;
	cout<<"introduzca el precio de los selladores ";
	cin>>s;
	r  -= r*0.15;
	b -= b*0.20;
	cout<<"¿cuantos rodillos llevara el cliente? precio unitario("<<r<<"$) \n";
	cin>>cr;
	cout<<"¿cuantoas brochas de cerda llevara el cliente? precio  unitario("<<b<<"$) \n?;
	cin>>cb;
	cout<<"¿cuantos selladores llevara el cliente? precio unitario ("<<s<<"$)  \n";
	cin>>cs;
	cout<<"¿pagara una tarjeta en efectivo? \n 1: tarjeta  \n 2:  efectivo \nseleccion: ";
	cin>>pay;
	while(pay < 1 || pay > 2){
		cout<<"la opcion no es correcta, porfavor introduzca un numero entre 1  y 2 (1)tarjeta (2)efectivo \n";
		cin>>pay;
	}

total =(r*cr)+(b*cb)+(s*cs);
if(play ==  2){
	total -= total *7/100;
	cout<<"el monto total apagar es : "<<total<<"$\n\n";
	
}else{
	cout<<"el monto total a pagar es: "<<total<<"s\n\n";
}
cout<<"\n\n \t\t\t\t\t\t factura \n\t\t\t\t\trodillos *  "<<cr<<"unds: "<<r*cr<<"$\n"<<"\t\t\t\t\tbrochas  * "<<cb<<"unds: "<<b*cb<<"$\n"<<"\t\t\t\
}
