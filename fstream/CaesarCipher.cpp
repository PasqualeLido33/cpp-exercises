#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	ifstream fin("messaggio.txt");
	ofstream fout("segreto.txt");
	int N; int S;
	char c;
	cout<<"Inserisci la chiave: ";cin>>N;
	
	c = fin.get();
	while(c != EOF){
		S = c + N;
		if(S > 126){S = (S - 126) + 31;
		}
		fout.put(S);
		c = fin.get();		
	}	

    return 0;
}
