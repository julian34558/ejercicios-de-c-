#include <iostream>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <iostream>
#include <stdio.h>

using namespace std;

main(){
	int n, m, d;
	cout << "ingrese un numero entre 0 y 99: \n";
	cin >> n;
	while ((n<1)||(n>99)){
		system ("cls");
		cout << "ingrese un numero entre 0 y 99: \n";
		cin >> n;
	}
	m = n%10;
	d = n/10;
	cout << "el numweo " << n << " en romano es; ";
	switch (d){
		case 0: cout << ""; break;
		case 1: cout << "x"; break;
		case 2: cout << "xx"; break;
		case 3: cout << "xxx"; break;
		case 4: cout << "xl"; break;
		case 5: cout << "l"; break;
		case 6: cout << "lx"; break;
		case 7: cout << "lxx"; break;
		case 8: cout << "lxxx"; break;
		case 9: cout << "xc"; break;
	}
	switch (m){
		case 0: cout << "\n"; break;
		case 1: cout << "I\N"; break;
		case 2: cout << "II\n"; break;
		case 3: cout << "III\n"; break;
		case 4: cout << "IV\n"; break;
		case 5: cout << "V\n"; break;
		case 6: cout << "VI\n"; break;
		case 7: cout << "VII\n"; break;
		case 8: cout << "VIII\n"; break;
		case 9: cout << "IX\n"; break;
	}
	cout << "\n";
}

