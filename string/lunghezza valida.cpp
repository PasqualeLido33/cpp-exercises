#include <iostream>
using namespace std;
int main(){


	char c;
	int s = 0;
	cout<<"Inserire lunghezza: ";
	c = cin.get();
	
	while(c != 10){
		if(s == 0){if(c >= '0' && c <= '9'){s = 1;}
				   else{s = -1;}
				   
		}else if(s == 1){if(c >= '0' && c <= '9'){s = 1;}
						 else if( c == '.'){s = 2;}
						 else if( c == 'd' || c == 'c'){s = 4;}
						 else if(c == 'm'){s = 5;}
						 else{s = -1;}
						 
		}else if(s == 2){if(c >= '0' && c <= '9'){s = 3;}
		
		}else if(s == 3){if(c >= '0' && c <= '9'){s = 3;}
						 else if( c == 'd' || c == 'c'){s = 4;}
						 else if(c == 'm'){s = 5;}
						 else{s = -1;}
						 
		}else if(s == 4){if(c == 'm'){s = 6;}
						  else{s = -1;}
						  
		}else if(s == 5){if(c == 'm'){s = 6;}
						 else{s = -1;}
						 
		}
		
		c = cin.get();
	}
	
	if(s == 5 || s == 6){cout<<"OK";}
	else{cout<<"ERRORE";}
	

    return 0;
}
