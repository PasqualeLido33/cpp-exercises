#include <iostream>
using namespace std;
int main(){
	
	char c;
	int s = 0;	int N  = 0;	 int op = 0; int spazioInserito = 0;
	
	cout<<"Inserire l'operazione: ";
	c = cin.get();
	
	while(c != 10){
		
		// Permette di leggere il carattere successivo a un operatore, anche in presenza di spazi. a +'   'b
		// Se viene inserito un spazio ma non e' stato letto ancora un valore,
		// allora il prsossimo carattere puo' essere letto.
		if(spazioInserito == 1 && op == 0){ spazioInserito = 0;}
		
		// Questo stato impone che il primo numero non deve avere segni.
		if(s == 0){if(c >= '0' && c <= '9'){s = 1; N = 10 * N + ( c - '0');}
				   else if( c == ' '){ s = 0;}	
				   else{s = -1;}   
		
		}else if( s == 1){if((c >= '0' && c <= '9') && spazioInserito == 0){s = 1; N = 10 * N + ( c - '0');}
						  else if(c == ' '){ spazioInserito = 1;}
						  else if(c == '+'){s = 2; spazioInserito = 0;}
						  else if(c == '-'){s = 3; spazioInserito = 0;}
						  else{s = -1;}
						  
		// Si fa la somma e la differenza appena viene immessa l'ultima cifra, 
		// quindi appena viene messo un nuovo operatore.
			
		}else if( s == 2){if((c >= '0' && c <= '9') && spazioInserito == 0){s = 2; op = 10 * op + ( c - '0');}
						  else if(c == ' '){ spazioInserito = 1;}
						  else if(c == '+'){s = 2; N = N + op; op = 0; spazioInserito = 0;} 
						  else if(c == '-'){s = 3; N = N + op; op = 0; spazioInserito = 0;}
						  else{s = -1;}
						  
		}else if( s == 3){if((c >= '0' && c <= '9') && spazioInserito == 0){s = 3; op = 10 * op + ( c - '0');}
						  else if(c == ' '){ spazioInserito = 1;}
						  else if(c == '+'){s = 2; N = N - op; op = 0; spazioInserito = 0;}
						  else if(c == '-'){s = 3; N = N - op; op = 0; spazioInserito = 0;}
						  else{s = -1;}
		}
		c = cin.get();

	}
		// L'ultima operazione si gestisce a parte.
	if(s == 2){ N = N + op ; op = 0;}else if(s == 3){ N = N - op; op = 0;}
	
	if(s == 1 || s == 2 || s ==3){cout<<"Il risultato e': "<<N;}else{cout<<"ERRORE";}
	
	
    return 0;
}
