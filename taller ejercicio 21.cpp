#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int diaN,mesN,anoN,anoA,mesA,diaA;
	float livertime;
	cout<<"digite el dia de su nacimiento (numero): ";
	cin>>diaN;
	cout<<"digite el mes de su nacimiento (numero: ";
	cin>>mesN;
	cout<<"digite su año de nacimiento: ";
	cin>>anoN;
	cout<<"digite la fecha actual (DIA/MES/AÑO):\n";
	cin>>diaA;
	cin>>mesA;
	cin>>anoA;
	livertime=(365*(anoA-anoN)+(31*(mesA-mesN))+(diaA-diaN));
	cout<<"la cantidad de dias que has vivido es: "<<livertime<<" dias"<<endl;
	
	getch();
}
