#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	char NOME[100];
	int i = 0;
	char c;
	cout << "Immettere il nome del file di input: ";
	c = cin.get();

	while( c != 10){ NOME[i] = c; i++; c = cin.get();}
	NOME[i] = 0;
	
	ifstream fin(NOME);
	ofstream fout("uppercase.txt");
	
	c = fin.get();
	while( c != EOF){
		if(c >= 'a' && c <= 'z'){
			c = c - 32;
		}
		fout.put(c);
		c = fin.get();
	}
	
	cout<<"FILE CREATO";

    return 0;
}
