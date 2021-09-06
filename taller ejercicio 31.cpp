#include <iostream> 
#include <cstdlib> 
using namespace std; 
main()
{
	int la,lb;
	cout<<" programa que a los numeros de 20 y menores de 40 les sume 15 "<<endl;
	cout<<" digita un numero "<<endl;
	cin>>la;
	cout<<" el resultado total de la suma es: "<<endl;
	if((la>20)&&(la<40))
	{
		lb=la+15;
		cout<< " el resultado de la suma es de "<< lb <<endl;
	}
	else{
		cout<<" el numero que digitaste es menor a 20 o superior a 40 "<<endl;
	}
}
