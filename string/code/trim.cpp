#include <iostream>
using namespace std;
int main(){

	char c;
	char CONTROLLO[100];
	int i = 0;
	
	cout<<"INPUT: ";
	c = cin.get();
	while(c != 10){
		CONTROLLO[i] = c;
		i++;
		c = cin.get();
	}
	CONTROLLO[i] = 0;//Fine stringa.
	
	
	i--;//Riposizionamento sull'ultimo carattere valido.
	//Eliminazione spazi finali
	while(CONTROLLO[i] == ' '){
		CONTROLLO[i] = 0;
		i--;
	}
	
	//Eliminazione spazi iniziali
	i = 0;
	while(CONTROLLO[i] == ' '){
		CONTROLLO[i] = 0;
		i++;
	}
	
	cout<<"OUTPUT: ";
	while(CONTROLLO[i] != 0){cout<<CONTROLLO[i]; i++;}
	

    return 0;
}
