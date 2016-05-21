#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void Verificador(char);
void Verificador2(char);
string claveMorse(string,char[]);

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
			string palabra;
			char Morse[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			//string Morse[92] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",".--","-..-","-.--","--.."};
			//char a[2]={'.','-'},b[4]={'-','.','.','.'},c[4]={'-','.','-','.','-'},d[3]={'-','.','.'},e[1]={'.'},f[4]={'.','.','-','.'},g[3]={'-','-','.'},h[4]={'.','.','.','.'},i[2]={'.','.'},j[4]{'.','-','-','-'},k[3]{'-','.','-'},l[4]={'.','-','.','.'},m[2]={'-','-'},n[2]={'-','.'},o[3]={'-','-','-'},p[4]={'.','-','-','.'},q[4]={'-','-','.','-'},r[3]{'.','-','.'},s[3]={'.','.','.'},t[1]={'-'},u[3]={'.','.','-'},v[4]={'.','.','.','-'},w[3]={'.','-','-'},x[4]={'-','.','.','-'},y[4]={'-','.','-','-'},z[4]={'-','-','.','.'};
			cout << "Bienvenido al ejercicio #3" << endl;
			cout << "Ingrese Morse a texto:" << endl;
			cin >> palabra;
			cout << claveMorse(palabra, Morse) << endl;

		}
	}
	cout << "Gracias por utilizar este programa :3" << endl;
	return 0;
}

void Verificador(char frase){
	int tamano;
	char abecedario[26] = {0};
	bool Pangrama = true;
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
	if (Pangrama == true)
	{
		cout << "Pangrama" << endl;
	}
	else if (Pangrama == false)
	{
		cout << "Pangrama NO" << endl;
	}
}

void Verificador2(char* frase){
	int tamano = strlen(frase);

}

string claveMorse(string palabra,char Morse[]){
	const int count=0;
    string traduccion;
    string espaciado= " ";
    string spacio = " ";

    for (int i=0; i<Morse[i]; i++)
    {
    	if (Morse[i]!=' ')
    	{
        	traduccion=espaciado += Morse[i];
    	}
	}	
	return traduccion;
}