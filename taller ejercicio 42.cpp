#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int a,b,c,d,e;
	cout<<" programa que lee 20 numerosy encontrar el mayor y el menor valor leidos \n\n";
	for (e=1;e<=20;e++)
	{
		cout<<"ingrese un numero "<<e<<endl;
		cin>>b;
		if (e==0){
			d=b;
			c=b;		}
	}
	else{
		if (b<d){
			d=b;
		}
		if(b>c){
			c=b;
		}
	}
}
cout<<"el numero menor es; "<<d<<endl;
cout<<"el numero meyor es: "<<c<<endl;
}

