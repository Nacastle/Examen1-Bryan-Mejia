#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

//const string abecedario "abcdefghijklmnopqrstuvwxyz";
void Verificador(char);

int main(int argc, char const *argv[])
{
	int op = 0;
	while(op != 4){
		cout << "A que ejercicio quiere entrar?\n1.Verificador de Pangrama\n2.Arreglo dinamico\n3.Morse\n4.Salir." << endl;
		cin >> op;
		cout << endl;
		if (op == 1)
		{
			char frase;
			cout << "Bienvenido al ejercicio #1" << endl;
			cout << "Ingrese una palabra para verificar si es Pangrama o no: ";
			cin >> frase;
			Verificador(frase);
		}else if (op == 2)
		{
			cout << "Bienvenido al ejercicio #2" << endl;
		}
		else if(op == 3)
		{
			cout << "Bienvenido al ejercicio #3" << endl;
		}
	}
	cout << "Gracias por utilizar este programa :3" << endl;
	return 0;
}

void Verificador(char frase){
	int tamano;
	char abecedario[26] = {0};
	bool Pangrama;
	while((frase = getchar()) != '\n'){
		if ('A' <= frase && frase<= 'Z')
		{
			tamano = frase-'A';
		}
		else if ('a' <= frase && frase <= 'z')
		{
			tamano = frase-'a';
		}
		abecedario[tamano] = 1;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (abecedario[i] == 0)
		{
			Pangrama = false;
		}
	}
	Pangrama = true;
	if (Pangrama == true)
	{
		cout << "Pangrama" << endl;
	}
	else if (Pangrama == false)
	{
		cout << "Pangrama NO" << endl;
	}
}