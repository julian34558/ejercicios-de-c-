#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int a,b;
	cout<<" digita un numero menor a 90 "<<endl;
	cin>>a;
	b=90;
	if (a<b)
	{
		while(a<b)
		{
			cout<< b-2 <<endl;
			b=b-2;
		}
	}
	else
	{
		cout<< " el numero ingresado es mayor a 90 "<<endl;
	}
}

