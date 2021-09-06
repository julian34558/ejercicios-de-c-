#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int ano,edad,anob;
	cout<<"este programa define tu edad <<endl;"
	cout<<"ingrese el año en el que nacio: ";
	cin>>ano;
	cout<<"ingrese el año actual: ";
	cin>>anob;
	edad=anob-ano;
	cout<<"su edad es: "<<edad<<endl;
	
	getch();
}
