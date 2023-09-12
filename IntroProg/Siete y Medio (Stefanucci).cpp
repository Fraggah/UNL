#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio2.h>
#include <windows.h>
#include <cmath>
#define color SetConsoleTextAttribute
using namespace std;

int main(int argc, char *argv[]) {
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	srand(time(NULL));
	color(hConsole, 7);
	int mazo[4][10];
	bool yasalio[4][10];
	float puntos[4][10];
	bool turnoJ = true;
	bool turnoPC = true;
	bool juego = true;
	bool continuar =  true;
	float suma = 0;
	float sumaPC = 0;
	float diferenciaJ = 0;
	float diferenciaPC = 0;
	
	cout<<"--------<SIETE Y MEDIO>--------"<<endl;
	cout<<"==============================="<<endl<<endl;
		
	for(int j=0;j<4;j++){
		for(int i=0;i<10;i++){
			if(i>6){
				mazo[j][i]=i+3;
				puntos[j][i]=0.5;
			}
			if(i<7){
				mazo[j][i]=i+1;
				puntos[j][i]=i+1;
			}
			yasalio[j][i]=false;
		}
	}
	while(juego==true){                                      
		int ale1 =0;
		int ale2 =0;
		color(hConsole, 7);
		cout<<"Presione 's' para sacar una carta\n";
		while(turnoJ){
			if(kbhit()){
				char tecla = getch();
				switch(tecla){
				case 's': {
					ale1=rand()%3;
					ale2=rand()%9;
					if(yasalio[ale1][ale2]==true){
						ale1=rand()%3;
						ale2=rand()%9;
						if(yasalio[ale1][ale2]==true){
							ale1=rand()%3;
							ale2=rand()%9;
						}
					}
					while(yasalio[ale1][ale2]==false){
						color(hConsole, 3);
						cout<<"\nTe salio la carta: "<<mazo[ale1][ale2]<<endl;	
						yasalio[ale1][ale2]=true;
						suma+=puntos[ale1][ale2];
						color(hConsole, 7);
						Sleep(500);
						cout<<"\nTus puntos son: "<<suma<<endl;
						if(suma>7.5){
							cout<<"\nPASASTE EL LIMITE!!!"<<endl;
							turnoJ=false;
						}else{
							color(hConsole, 7);
							cout<<"\n¿Sacar otra carta? (s/n)"<<endl;}
					}
				}break;
				case 'n': {
					cout<<"\nTE PLANTAS CON: "<<suma<<" PUNTOS!!"<<endl;
					turnoJ =false;
				};
				}
			}
		}
		color(hConsole, 3);
		cout<<"\nTu puntaje es de: "<<suma<<endl;
		color(hConsole, 7);
		cout<<"\n==============================="<<endl;
		cout<<"Comienza el turno de la computadora"<<endl;
		cout<<"==============================="<<endl<<endl;
		
		while(turnoPC==true){
			ale1=rand()%3;
			ale2=rand()%9;
			color(hConsole, 7);
			cout<<"\n. ";Sleep(400);cout<<". ";Sleep(400);cout<<". ";Sleep(400);cout<<endl;
			color(hConsole, 4);
			cout<<"\nLe salió la carta: "<<mazo[ale1][ale2]<<endl;
			Sleep(500);
			sumaPC += puntos[ale1][ale2];
			color(hConsole, 7);
			cout<<"\nLa computadora acumula "<<sumaPC<<" puntos!"<<endl;
			Sleep(1000);
			diferenciaJ = std::abs(suma - 7.5);
			diferenciaPC= std::abs(sumaPC - 7.5);
			if((diferenciaPC <= diferenciaJ)&&(sumaPC<8)){
				cout<<"\nLA COMPUTADORA SE PLANTA CON: "<<sumaPC<<"!!!!!"<<endl;
				turnoPC=false;
			}
			if(sumaPC>7.5){
				cout<<"\nLa computadora pasó el limite!"<<endl;
				cout<<"\nTerminó el turno de la computadora!"<<endl;
				turnoPC=false;
			}
		}
		color(hConsole, 4);
		cout<<"\nEl puntaje de la computadora es de: "<<sumaPC<<endl;
		if((diferenciaPC <= diferenciaJ)){
			color(hConsole, 4);
			cout<<"\n    |¡LA COMPUTADORA GANA!|"<<endl;
			color(hConsole, 7);
			cout<<"\nComputadora: "<<sumaPC<<"  Jugador: "<<suma<<endl;
		}
		else{
			color(hConsole, 3);
			cout<<"\n        |¡¡GANASTE!!|"<<endl;
			color(hConsole, 7);
			cout<<"\nJugador: "<<suma<<"  Computadora: "<<sumaPC<<endl;
		}
		suma=0;
		sumaPC=0;
		turnoJ=true;
		turnoPC=true;
		for(int j=0;j<4;j++){
			for(int i=0;i<10;i++){
				yasalio[j][i]=false;
			}
		}
		continuar=true;
		color(hConsole, 7);
		cout<<"\n¿Jugar otra vez? (s/n)"<<endl;
		while(continuar==true){
			if(kbhit()){
				char tecla = getch();
				switch(tecla){
				case 's': {
					cout<<"\n    -----<|NUEVA PARTIDA|>-----\n\nEs tu turno.."<<endl<<endl;
					continuar = false;
				}break;
				case 'n': {
					cout<<"\n-----<|FIN DEL JUEGO|>-----";
					juego=false;
					continuar = false;
				};
				}
			}
		}
	}
	return 0;
}

