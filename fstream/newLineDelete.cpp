#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream fin("Stats stw.txt");
	ofstream fout("output.txt");
	char c;
	c = fin.get();while(c == 10) { c = fin.get(); }
	
	while(c != EOF){
		
		if( c != 10){
			fout.put(c);
			c = fin.get();
		}else{
			c = fin.get();	while(c == 10){ c = fin.get();}
			if(c != EOF) { fout.put(10); }
		}
	}
	
	cout << "OK";
	


    return 0;
}
