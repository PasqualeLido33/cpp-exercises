#include <iostream>
using namespace std;
int main(){
	char c;
	int stato = 0;
	cout<<"Inserire un numero reale: ";
	c = cin.get();
	while(c != 10){
		if(stato == 0){
			if(c == '+' || c == '-'){stato = 1;}
			else if(c >= '0' && c <= '9'){ stato = 2;}else{stato = -1;}	
		}else if(stato == 1 ){
			if(c >= '0' && c <= '9'){ stato = 2;}else{stato = -1;}
			
		}else if(stato == 2){
			if(c >= '0' && c <= '9'){ stato = 2;}
			else if(c == '.'){stato = 3;}else{stato = -1;}
			
		}else if(stato == 3 || stato == 4){
			if(c >= '0' && c <= '9'){stato = 4;}else{stato = -1;}
		}
		c = cin.get();

	}
	if(stato == 2 || stato == 4){cout<<"OK, numero reale inserito correttamente!";}else{cout<<"ERRORE, il numero NON E' VALIDO!";}

    return 0;
}
