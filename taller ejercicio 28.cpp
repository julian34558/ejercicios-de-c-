#include <iostream> 
#include <conio.h> 
using namespace std;
main()
{
	float a,b,c,d,e,f,g;
	cout<<" porcentaje de hombres, niños y mujeres "<<endl;
	cout<<" digita el numero de personas en total"<<endl;
	cin>>a;
	cout<<" numero de hombres "<<endl;
	cin>>b;
	cout<<" numero de mujeres "<<endl;
	cin>>c;
	cout<<" numero de niños "<<endl;
	cin>>f;
	cout<<" el porcentahe de hombres y mujeres a continuacion "<<endl;
	g=(f*100)/a;
	d=(b*100)/a;
	e=(c*100)/a;
	cout<<" el porcentaje de hombres en total es del "<< d << " % "<<endl;
	cout<<" el porcentaje de mujeres en total es del "<< e << " % "<<endl;
	cout<<" el porcentaje de niños en total es del "<< e << " % "<<endl;
}

