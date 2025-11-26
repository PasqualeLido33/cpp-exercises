#include <iostream>
using namespace std;
int main(){

	char c;
	char vocabolo[30];
	int i = 0; int j = 0; int s = 0;
	cout<<"Inserire vocabolo: ";
	c = cin.get();
	
	while(c != 10){ vocabolo[i] = c; i++; c = cin.get();}
	
	while( j<i && vocabolo[j] == vocabolo[i-(j+1)]){
		 j++;
	}
	
	if(j < i) { cout << "Il vocabolo immesso NON e' un palindromo"; }
	else      { cout << "Il vocabolo immesso e' un palindromo";     }
	
	


    return 0;
}
