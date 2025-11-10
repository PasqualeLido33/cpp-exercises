#include <iostream>
using namespace std;
int main(){
	char c;
	int stato = 0;
	cout<<"Inserire un ORARIO: ";
	c = cin.get();
	while(c != 10){
		if(stato == 0){
			if(c >= '0' && c <= '1'){stato = 1;}
			else if(c == '2'){ stato = 2;}else{stato = -1;}
				
		}else if(stato == 1 ){
			if(c >= '0' && c <= '9'){ stato = 3;}else{stato = -1;}
			
		}else if(stato == 2){
			if(c >= '0' && c <= '3'){ stato = 4;}else{stato = -1;}
			
		}else if(stato == 3 || stato == 4){
			if(c == ':'){stato = 5;}else{stato = -1;}
			
		}else if(stato == 5){
			if(c >= '0' && c <= '5'){ stato = 6;}else{stato = -1;}
		}
		
		else if(stato == 6){
			if(c >= '0' && c <= '9'){ stato = 7;}else{stato = -1;}
		}
		c = cin.get();
	}
	if(stato == 7){cout<<"OK, orario inserito correttamente!";}else{cout<<"ERRORE, l'orario inserito NON E' VALIDO!";}

    return 0;
}
