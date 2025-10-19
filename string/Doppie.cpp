#include <iostream>
using namespace std;
int main(){
	
	char carattereAttuale;
	char caratterePrecedente;
	bool Doppie = false;
	cout<<"Inserire un vocabolo: ";
	
	carattereAttuale = cin.get();
	
	while(carattereAttuale != 10){
		carattereAttuale = cin.get();
		
		if(carattereAttuale == caratterePrecedente){
			Doppie = true;
		}
		caratterePrecedente = carattereAttuale;
	}
	
	if(Doppie){cout<<"Il vocabolo contiene delle doppie";}else{cout<<"Il vocabolo non contiene delle doppie";}
	
	return 0;
}
