#include <iostream> 
#include <conio.h> 
using namespace std;
main()
{
	float a,b,c,d,e;
	cout<<" porcentaje de hombres y mujeres "<<endl;
	cout<<" digita el numero de personas en total"<<endl;
	cin>>a;
	cout<<" numero de hombres "<<endl;
	cin>>b;
	cout<<" numero de mujeres "<<endl;
	cin>>c;
	cout<<" el porcentahe de hombres y mujeres a continuacion "<<endl;
	d=(b*100)/a;
	e=(c*100)/a;
	cout<<" el porcentaje de hombres en total es del "<< d << " % "<<endl;
	cout<<" el porcentaje de mujeres en total es del "<< e << " % "<<endl;
	
}

