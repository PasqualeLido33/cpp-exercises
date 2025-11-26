#include <iostream>
using namespace std;
int main(){
	
	char c;
	char A[30];
	char B[30];
	int i = 0;
	
	cout<<"Primo vocabolo: ";
	c = cin.get();
	while(c != 10){ A[i] = c;	i++;  c = cin.get();}
	A[i] = 0;
	i = 0;
	
	cout<<"Secondo vocabolo: ";
	c = cin.get();
	while(c != 10){ B[i] = c;	i++;  c = cin.get();}
	B[i] = 0;
	i = 0;
	
	while( A[i] == B[i] && A[i] != 0 && B[i] != 0){i++;}
	
	cout << endl;
	cout << "Esito del confronto: ";	
	if(A[i] <  B[i]) { cout << "A < B";  }
	if(A[i] == B[i]) { cout << "A == B"; }
	if(A[i] >  B[i]) { cout << "A > B";  }

    return 0;
}
