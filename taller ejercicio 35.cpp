#include <iostream> 
#include <cstdlib> 
using namespace std; 
main()
{
	float ft1,tta1,precio1,precio2,precio3,pago1,pago2,pago3;
	cout<<" FOTOCOPIADORA  "<<endl;
	cout<<" precio unitario de fotocopias -$100 "<<endl;
	cout<<" cuantoas fotocopias reañizara y pagara?"<<endl;
	cin>>ft1;
	tta1=ft1*100;
	if ((ft1>=100) && (ft1<=200))
	{
		precio1=(tta1*12)/100;
		cout<<" el precio descuento es de "<< precio1 <<endl;
		pago1=tta1-precio1;
		cout<<" por lo que el valor a total a pagar es de "<<pago1 <<endl;		
	}
	if ((ft1>=201) && (ft1<=400))
	{
		precio2=(tta1*15)/100;
		cout<<" el precio decuento es de "<< precio2 << endl;
		pago2=tta1-precio2;
		cout<<" por lo que el valor a total a pagar es de "<<pago2 <<endl;
	}
	if ((ft1>=401))
	{
		precio3=(tta1*15)/100;
		cout<<" el precio descuento es de "<< precio3 << endl;
		pago3=tta1-precio3;
		cout<<"por lo que el valor a total a pagar es de "<<pago3 <<endl;
	}
	if ((ft1<100))
	{
		cout<<" debescomprar mas de 100 fotocopias "<<endl;
	}
}
