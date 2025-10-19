#include <iostream>
#include <fstream>
using namespace std;

int main(){

	char NOME[100];
	char NOME_COPIA[106];
	char c;
	int i = 0;
	
	cout<<"Inserire il nome del file da copiare: ";
	c = cin.get();
	while(c != 10){
		NOME[i] = c;
		i++;
		c = cin.get();
	}
	NOME[i] = 0;
	
	i = 0;
	while(NOME[i] != 0){
		NOME_COPIA[i] = NOME[i];
		i++;
	}
	
	NOME_COPIA[i-4] = '-';
    NOME_COPIA[i-3] = 'c';
    NOME_COPIA[i-2] = 'o';
    NOME_COPIA[i-1] = 'p';
    NOME_COPIA[i]   = 'i';
    NOME_COPIA[i+1] = 'a';
    NOME_COPIA[i+2] = '.';
    NOME_COPIA[i+3] = 't';
    NOME_COPIA[i+4] = 'x';
    NOME_COPIA[i+5] = 't';
    NOME_COPIA[i+6] = 0;
	
	ofstream fout(NOME_COPIA);
	ifstream fin(NOME);
	c = fin.get();
	while(c != EOF){
		fout.put(c);
		c = fin.get();		
	}

	cout<<"FILE COPIATO!!";
	
    return 0;
}
