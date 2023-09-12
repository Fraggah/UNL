ARREGLOS:
-------------------EJERCICIO 1-------------------

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int valores[10];
	srand(time(NULL));
		
		for(int i=0;i<10;i++){
		valores[i]= rand()%100;
		cout<< valores[i]<<" ";
	}
		
	cout<<"\nEl quinto valor es: "<<valores[4];
	return 0;
}

-------------------EJERCICIO 1-------------------(variacion)

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int valores[10];
	srand(time(NULL));
		
		for(int i=0;i<10;i++){
		valores[i]= rand()%10;
		cout<< valores[i]<<" ";
	}
		for(int i=0;i<10;i++){
			if(valores[i]==5){
				cout<<"\nEl valor 5 se encuentra en la posicion: "<<i+1;
		}
	}
		
	return 0;
}

-------------------EJERCICIO 2-------------------

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int valores[20], mayor=0;
	srand(time(NULL));
		
		for(int i=0;i<20;i++){
		valores[i]= rand()%100;
		cout<< valores[i]<<" ";
			if(valores [i]> mayor){
				mayor=valores [i];
		}
	}
	cout<<"\nEl mayor es: "<<mayor;
	return 0;
}

-------------------EJERCICIO 3-------------------

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int valores[100];
	int pares[50];
	int impares[50];
	int j = 0;
	srand(time(NULL));
		
		for(int i=1;i<101;i++){
			valores[i]=i;
		}
		for(int i=2;i<102;i+=2){
			pares[j] = valores[i];
			impares[j] = valores[i-1];
			j++;
		}
		cout<<"PARES\n";
		for(int i=0;i<50;i++){
			cout<<pares[i]<<" ";
		}
		cout<<"\n\nIMPARES\n";
		for(int i=0;i<50;i++){
			cout<<impares[i]<<" ";
		}
	return 0;
}

-------------------EJERCICIO 4-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contador = 0;
	string nombre;
	cout<<"Igrese su nombre: ";
	cin>>nombre;
	int tam=nombre.size();
	
	for(int i=0;i<tam;i++){
		if(nombre[i]=='a'||nombre[i]=='A'){
			contador ++;
		}
	}
	
	cout<<"Su nombre tiene la letra 'a' "<<contador<<" veces";
	
	return 0;
}

-------------------EJERCICIO 5-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contador = 0;
	string nombre="";
	cout<<"Igrese su nombre: ";
	cin>>nombre;
	int tam=nombre.size();
	
	for(int i=0;i<tam;i++){
		if(nombre[i]=='a'||nombre[i]=='A'||nombre[i]=='e'||nombre[i]=='E'||nombre[i]=='i'||nombre[i]=='I'||nombre[i]=='o'||nombre[i]=='O'||nombre[i]=='u'||nombre[i]=='U'){
			contador ++;
		}
	}
	
	cout<<"Su nombre tiene "<<contador<<" vocales";
	
	return 0;
}

-------------------EJERCICIO 6-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contadorA = 0;
	int contadorE = 0;
	int contadorI = 0;
	int contadorO = 0;
	int contadorU = 0;
	string nombre="";
	cout<<"Igrese su nombre: ";
	cin>>nombre;
	int tam=nombre.size();
	
	for(int i=0;i<tam;i++){
		if(nombre[i]=='a'||nombre[i]=='A'){
			contadorA ++;
		}
	}
	for(int i=0;i<tam;i++){
		if(nombre[i]=='e'||nombre[i]=='E'){
			contadorE ++;
		}
	}
	for(int i=0;i<tam;i++){
		if(nombre[i]=='i'||nombre[i]=='I'){
			contadorI ++;
		}
	}
	for(int i=0;i<tam;i++){
		if(nombre[i]=='o'||nombre[i]=='O'){
			contadorO ++;
		}
	}
	for(int i=0;i<tam;i++){
		if(nombre[i]=='u'||nombre[i]=='U'){
			contadorU ++;
		}
	}
	
	cout<<"\nSu nombre tiene "<<contadorA<<" letras 'a'"<<endl;
	cout<<"Su nombre tiene "<<contadorE<<" letras 'e'"<<endl;
	cout<<"Su nombre tiene "<<contadorI<<" letras 'i'"<<endl;
	cout<<"Su nombre tiene "<<contadorO<<" letras 'o'"<<endl;
	cout<<"Su nombre tiene "<<contadorU<<" letras 'u'"<<endl;
	return 0;
}

-------------------EJERCICIO 7-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char guiones[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			guiones[i][j] = '-';
		}
	}
	int n=0;
	while(n<10){
	for(int i=0;i<10;i++){
		cout<<guiones[i][n]<<" ";
	}
	cout<<endl;
	n++;
	}
	return 0;
}

-------------------EJERCICIO 8-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
int numeros[6][6];
int n = 0;

while(n<6){
	for(int i= 0;i<6;i++){
		numeros [n][i]=i;
		cout<<numeros [n][i]<<" ";
		}
	n++;
	cout<<endl;
	}
		
	return 0;
}

-------------------EJERCICIO 9-------------------

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
int numeros[6][6];
int n = 0;

while(n<6){
	for(int i= 0;i<6;i++){
		numeros [n][i]=n;
		cout<<numeros [n][i]<<" ";
		}
	n++;
	cout<<endl;
	}
		
	return 0;
}


-------------------EJERCICIO 10-------------------

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]) {
	
srand(time(NULL));
int arreglo100[100];
int extra;
cout<<"Orden correcto"<<endl;
for(int i=0;i<100;i++){
	arreglo100[i]=rand()%20;
	cout<<arreglo100[i]<<" ";
}
cout<<endl<<"Orden inverso"<<endl;
for(int i=0;i<50;i++){
	extra = arreglo100[i];
	arreglo100[i] = arreglo100[99-i];
	arreglo100[99-i] = extra;
}

for(int i=0;i<100;i++){
	cout<<arreglo100[i]<<" ";
}
	return 0;
}

-------------------EJERCICIO 11-------------------

#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	
	int arreglo[20];
	int v1, v2, v3, v4;
	int p1, p2, p3, p4;
	for(int i = 0;i<20;i++){
		arreglo[i]=0;
	}
	cout<<"Ingrese 4 valores"<<endl;
	cin>>v1>>v2>>v3>>v4;cout<<endl;
	
	cout<<"Ingrese 4 posiciones (entre 1 y 20)"<<endl;
	cin>>p1>>p2>>p3>>p4;cout<<endl;
	
	arreglo[p1-1]=v1;
	arreglo[p2-1]=v2;
	arreglo[p3-1]=v3;
	arreglo[p4-1]=v4;
	cout<<"RESULTADO"<<endl;
	for(int i = 0;i<20;i++){
		cout<<arreglo[i]<<" ";
	}

	return 0;
}

-------------------EJERCICIO 12-------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char *argv[]) {
	
srand(time(NULL));
int arreglo1[20], arreglo2[20], arregloFinal[20];
cout<<"Primer arreglo"<<endl;
for(int i=0;i<20;i++){
	arreglo1[i]=rand()%20+1;
	cout<<arreglo1[i]<<" ";
}
cout<<endl<<"Segundo arreglo"<<endl;
for(int i=0;i<20;i++){
	arreglo2[i]=rand()%20+1;
	cout<<arreglo2[i]<<" ";
}
cout<<endl<<"Suma de arreglos"<<endl;
for(int i=0;i<20;i++){
	arregloFinal[i]=arreglo1[i]+arreglo2[i];
	cout<<arregloFinal[i]<<" ";
}

	return 0;
}

