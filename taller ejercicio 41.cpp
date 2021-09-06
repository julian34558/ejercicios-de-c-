#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int a,b,c,d;
	cout<<" digite el numero para sacarle el factorial ";
	cin>>a;
	b=1;
	c=1;
	while (b<a)
	{
		c=c*(1+b);
		b=b+1;
	}
	cout<<" el factorial de "<<a<<" es: "<<c<<endl;
}
