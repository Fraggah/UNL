#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string nom;
	int r1, r2, r3;
	bool sobrevive;
	float vida = 10;
	cout << "Bienvenido a CODE QUEST\n\n";
	cout << "Nombre de Personaje: ";
	cin >> nom;
	cout << "\nBienvenido " + nom + " es momento de equilibrar tu poder!\n"<<endl;
	cout << "Recuerda que debes ser cuidadoso, la exposicion a las runas puede ser peligrosa\nDe esto dependera tu vida\n" << endl;
	cout << "Durante cuantos segundos te expondras a la runa amarilla?: ";
	cin >> r1;
	cout << "Durante cuantos segundos te expondras a la runa azul?: ";
	cin >> r2;
	cout << "Durante cuantos segundos te expondras a la runa roja?: ";
	cin >> r3;
	cout << endl;
	vida = vida - r1 - (r2 / 2) + (r3 / 2);
	cout << nom +": "<< (vida * 10) << "% de vida"<<endl;
	bool vivo;
	vivo = vida > 0;
	cout << nom << " esta vivo? " << vivo << endl;
	cout << "\nHas sabido mantener el equilibrio de poder? (pulse 1 para SI, de lo contrario presione ESC)";
	cin >> sobrevive;
	cout << "\n\nIntentemos llevar esto mas alla y elevar nuestra fuerza exponiendonos nuevamente a las runas!" << endl;
        vida = vida - r1 - (r2 / 2) + (r3 / 2);
	cout << endl;
	cout << nom + ": " << (vida * 10) << "% de vida" << endl;
	vivo = vida > 0;
	cout << nom << " esta vivo? " << vivo <<endl;
	return 0;
}