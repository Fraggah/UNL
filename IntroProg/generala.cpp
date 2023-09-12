#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio2.h>
#define color SetConsoleTextAttribute
using namespace std;

void ordenar(int arr[]);
int esGenerala(int arr[]);
int esEscalera(int arr[]);
int esPoker(int arr[]);
int esFull(int arr[]);
int todoAl1(int arr[]);
int todoAl2(int arr[]);
int todoAl3(int arr[]);
int todoAl4(int arr[]);
int todoAl5(int arr[]);
int todoAl6(int arr[]);
string mensajePuntos(int arr[],int pts);

int main(int argc, char *argv[]) {
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	int dado[5];
	int resultado[10];
	bool juego = true;
	color(hConsole, 14);
	cout<<"-------------<GENERALA>-------------"<<endl<<endl;
	while(juego){
		for(int i=0;i<5;i++){
			dado[i]=rand()%5+1;
		}
		color(hConsole, 3);
		cout<<"Tirada jugador: ";
		for(int i=0;i<5;i++){
			cout<<dado[i]<<" ";
		}
		color(hConsole, 7);
		cout<<endl<<". ";Sleep(500);cout<<". ";Sleep(500);cout<<". ";
		Sleep(700);
		resultado[0]=todoAl1(dado);cout<<"\n\nTodo al 1: "<<todoAl1(dado)<<endl;
		resultado[1]=todoAl2(dado);cout<<"Todo al 2: "<<todoAl2(dado)<<endl;
		resultado[2]=todoAl3(dado);cout<<"Todo al 3: "<<todoAl3(dado)<<endl;
		resultado[3]=todoAl4(dado);cout<<"Todo al 4: "<<todoAl4(dado)<<endl;
		resultado[4]=todoAl5(dado);cout<<"Todo al 5: "<<todoAl5(dado)<<endl;
		resultado[5]=todoAl6(dado);cout<<"Todo al 6: "<<todoAl6(dado)<<endl;
		resultado[6]=esFull(dado);cout<<"Full: "<<esFull(dado)<<endl;
		resultado[7]=esPoker(dado);cout<<"Poker: "<<esPoker(dado)<<endl;
		resultado[8]=esEscalera(dado);cout<<"Escalera: "<<esEscalera(dado)<<endl;
		resultado[9]=esGenerala(dado);cout<<"Generala: "<<esGenerala(dado)<<endl<<endl;
		
		int mayor = -1;
		
		for (int i=0;i<10;++i){
			if (resultado[i] > mayor){
				mayor = resultado[i];
			}
		}
		Sleep(700);
		color(hConsole, 15);
		cout<<mensajePuntos(resultado,mayor)<<mayor;
		
		for(int i=0;i<5;i++){
			dado[i]=rand()%5+1;
		}
		cout<<endl<<". ";Sleep(500);cout<<". ";Sleep(500);cout<<". ";
		color(hConsole, 4);
		cout<<endl<<"\nTirada PC: ";
		for(int i=0;i<5;i++){
			cout<<dado[i]<<" ";
		}
		color(hConsole, 7);
		cout<<endl<<". ";Sleep(500);cout<<". ";Sleep(500);cout<<". ";
		Sleep(700);
		resultado[0]=todoAl1(dado);cout<<"\n\nTodo al 1: "<<todoAl1(dado)<<endl;
		resultado[1]=todoAl2(dado);cout<<"Todo al 2: "<<todoAl2(dado)<<endl;
		resultado[2]=todoAl3(dado);cout<<"Todo al 3: "<<todoAl3(dado)<<endl;
		resultado[3]=todoAl4(dado);cout<<"Todo al 4: "<<todoAl4(dado)<<endl;
		resultado[4]=todoAl5(dado);cout<<"Todo al 5: "<<todoAl5(dado)<<endl;
		resultado[5]=todoAl6(dado);cout<<"Todo al 6: "<<todoAl6(dado)<<endl;
		resultado[6]=esFull(dado);cout<<"Full: "<<esFull(dado)<<endl;
		resultado[7]=esPoker(dado);cout<<"Poker: "<<esPoker(dado)<<endl;
		resultado[8]=esEscalera(dado);cout<<"Escalera: "<<esEscalera(dado)<<endl;
		resultado[9]=esGenerala(dado);cout<<"Generala: "<<esGenerala(dado)<<endl<<endl;
		
		int mayorPC = -1;
		
		for (int i=0;i<10;++i){
			if (resultado[i] > mayorPC){
				mayorPC = resultado[i];
			}
		}
		Sleep(700);
		color(hConsole, 15);
		cout<<mensajePuntos(resultado,mayorPC)<<mayorPC;
		cout<<endl<<". ";Sleep(500);cout<<". ";Sleep(500);cout<<". ";
		Sleep(700);
		
		if(mayor>mayorPC){
			color(hConsole, 3);
			cout<<endl<<"\nGANASTE!"<<endl;
		}
		if(mayor<mayorPC){
			color(hConsole, 4);
			cout<<endl<<"\nGANA LA PC!"<<endl;
		}
		if(mayor==mayorPC){
			color(hConsole, 15);
			cout<<endl<<"Puntajes iguales, EMPATE!"<<endl;
		}
		bool continuar=true;
		color(hConsole, 7);
		cout<<"\n¿Jugar otra vez? (s/n)"<<endl;
		while(continuar==true){
			if(kbhit()){
				char tecla = getch();
				switch(tecla){
				case 's': {
					cout<<"\n    -----<|NUEVA PARTIDA|>-----\n"<<endl<<endl;
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
void ordenar(int arr[]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){
				int aux = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = aux;
			}
		}
	}
}
int esGenerala(int arr[]) {
	int pts = 0;
	for (int i = 1; i <= 6; i++) {
		if (arr[0]==i&&arr[1]==i&&arr[2]==i&&arr[3]==i&&arr[4]==i){
			pts = 60;
			break;
		}
	}
	return pts;
}
int esEscalera(int arr[]){
	int pts = 0;
	ordenar(arr);
	if ((arr[0]==1&&arr[1]==2&&arr[2]==3&&arr[3]==4&&arr[4]==5)||(arr[0]==2&&arr[1]==3&&arr[2]==4&&arr[3]==5&&arr[4]==6)){
		pts=50;
	}
	return pts;
}
int esPoker(int arr[]){
	int pts = 0;
	ordenar(arr);
	for (int i = 1; i < 7; i++) {
		if (arr[0]!=i&&arr[1]==i&&arr[2]==i&&arr[3]==i&&arr[4]==i){
			pts = 40;
			break;
		}
	}
	for (int i = 1; i < 7; i++) {
		if (arr[0]==i&&arr[1]==i&&arr[2]==i&&arr[3]==i&&arr[4]!=i){
			pts = 40;
			break;
		}
	}
	return pts;
}
int esFull(int arr[]){
	int pts = 0;
	ordenar(arr);
	for (int i = 1; i < 7; i++) {
		if ((arr[0]==i&&arr[1]==i&&arr[2]==i&&arr[3]!=i)&&(arr[3]==arr[4])){
			pts = 30;
			break;
		}
	}
	for (int i = 1; i < 7; i++) {
		if ((arr[1]!=i&&arr[2]==i&&arr[3]==i&&arr[4]==i)&&(arr[0]==arr[1])){
			pts=30;
			break;
		}
	}
	return pts;		
}
int todoAl1(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==1){
			pts+=1;
		}
	}
	if(pts==1){
		pts=0;
	}
	return pts;
}
int todoAl2(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==2){
			pts+=2;
		}
	}
	if(pts==2){
		pts=0;
	}
	return pts;
}
int todoAl3(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==3){
				pts+=3;
		}
	}
	if(pts==3){
		pts=0;
	}
	return pts;
}
int todoAl4(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==4){
			pts+=4;
		}
	}
	if(pts==4){
		pts=0;
	}
	return pts;
}
int todoAl5(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==5){
			pts+=5;
		}
	}
	if(pts==5){
		pts=0;
	}
	return pts;
}
int todoAl6(int arr[]){
	int pts =0;	
	for(int i=0;i<5;i++){
		if(arr[i]==6){
			pts+=6;
		}
	}
	if(pts==6){
		pts=0;
	}
	return pts;
}
string mensajePuntos(int arr[],int pts){
	string mensaje="";
	switch(pts){
		case 2:
		case 3:mensaje="El Todo al 1 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 4:mensaje="El Todo al 2 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 6: if(arr[1]==6){
				mensaje="El Todo al 2 fue la jugada mas alta, asi que el puntaje es ";
			}else{
				mensaje="El Todo al 3 fue la jugada mas alta, asi que el puntaje es ";
			}
			break;
		case 8:mensaje="El Todo al 4 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 9:mensaje="El Todo al 3 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 10:mensaje="El Todo al 5 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 12:mensaje="El Todo al 6 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 15:mensaje="El Todo al 5 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 18:mensaje="El Todo al 6 fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 30:mensaje="El Full fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 40:mensaje="El Poker fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 50:mensaje="La Escalera fue la jugada mas alta, asi que el puntaje es ";
			break;
		case 60:mensaje="La Generala fue la jugada mas alta, asi que el puntaje es ";
			break;
	}
	return mensaje;
}
