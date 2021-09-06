#include <iostream>
#include <iostream>
#include <conio.h>

using namespace std;
main(){
	strind dias[5] = {"lunes","martes","miercoles","jueves","viernes"};
	int hI,hF,HFI,HFF,horaso[5],horasE[5];
	cout<<"bienvenido a la calculadora de salarios \n";
	cout<<"porfavor ingrese la hora de entrada de su trabajo en formato 24hrs: ";
	cin>>hFI;
	cout<<"porfavor ingrese la hora de finalizacion de su trabajo en formato 24hrs: ";
	cin>>hFF;
	system("cls");
	cout<<"\n \n \t\t\t\t\t\tregistro de horas (L-V)\n\n";
	
	for(int i = 0; i < 5;i++){
		
		cout<<"hora de inicio de trabajo el dia "<<dias[i]<<": ";
		cin>>hI;
		cout<<"hora de finalizacion de trabajo el dia "<<dias[i]<<": ";
		cin>>hF;
		
		if((hFF - hFI)<(hF - hI)){
			horaso[i] = hFF - hFI;
			horase[i] = (hF - hI) - (hFF - hFI);
		}else{
			horaso[i] = hF - hI;
			horaso[i] = 0;
		}
		
		cout<<las horas de oficina el dia "<<dias[i]<<" "<<horaso[i]<<endl;
		cout<<"las horas extra del dia "<<dias[i]<<" "<<horase[i]<<endl;
	}
	
	int hOF=0,hEF=0,
	float price;
	
	for (int i = 0; i < 5; i++){
		hOF += horasO[i];
		hEF += horasE[1];
	}
	system("cls");
	cout<<"\t\t\t\t\t\t fase final y facturacion \n\n";
	cout<<"precio de la hora: ";
	cin>>price;
	system("cls");
	for(int i = 0; i < 21; i++){
		string fa = "\t\t\t\t\t\tF A C T U R A ";
		cout<<fa[i];
		sleep(80);
	}
	caut<<"\n\horas extras: "<<hEF<<"hrs // valor total horas extras: "<<hEF + (price + (price + 0.75))<<"$"<<endl<<endl;
	cout<<"horas extras: "<<hOF<<"hrs // valor total horas oficina: "<<hOF * price<<"$"<<endl<<endl;
	hOF = hOF * price;
	hEF = hEF * (price + (price * 0.75));
	cout<<"total ingreso : "<<hOF + hEF<<"$";
	if(hOF > hEF){
		cout<<"\n\nlos ingresos del trabajo en horario normal fueron mayores \n";
	}else{
		cout<<"\n\nlos ingresos del trabajo en horas extras fueron mayores \n";
	}
	
	
}

