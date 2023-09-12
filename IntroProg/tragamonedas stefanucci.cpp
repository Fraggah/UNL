#include<iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

int main (int argc, char *argv[]) {
	srand(time(NULL));
	
	int n,val1, val2, val3, contador, creditos;
	contador=0;
	cout<<"BIENVENIDOS A LA MAQUINA TRAGAMONEDAS!"<<endl;
	cout<<"======================================"<<endl<<endl;
	
	do{
		cout<<"Ingrese Monedas de 1$ (1 a 10 Monedas): ";
		cin>>n;
		creditos=n;
		cout<<endl;
		
	}while(n<1||n>10);
	
	while(creditos>0){
		cout<<"          ______________"<<endl;
		cout<<"          |CREDITOS: ";
		if(creditos!=10){cout<<" ";}
		cout<<creditos<<"|"<<endl;
		cout<<"          ¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl<<endl;
		cout<<" Presione P para tirar la palanca"<<endl<<endl;
		
		if(kbhit());
			int tecla=getch();
			switch(tecla){
			case 112: 
				
				val1= rand()%3+1;
				val2= rand()%3+1;
				val3= rand()%3+1;
				cout<<"              "<<val1<<" "<<val2<<" "<<val3<<endl;
				cout<<endl;
				creditos--;
					if(val1==val2&&val2==val3){
					contador++;	
					cout<<"          -<|GANASTE!|>-"<<endl<<endl;
					}
				break;
			default:
				cout<<"-POR FAVOR PRESIONE LA TECLA CORRECTA-"<<endl<<endl;
				break;
			}
	}
	cout<<"<<<Ganaste un total de "<<contador<<" veces!>>>";
		
	return 0;
}


