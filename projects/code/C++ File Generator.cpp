#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	ofstream fout;
	string Desktop = "C:/Users/master/Desktop/";
	string Drive   = "C:/Users/master/Desktop/C++/";
	string cpp 	   =".cpp"; 
	int i = 0;
	string fileName;
	
	cout<<"Inserisci il nome del file: ";	
	getline(cin, fileName);
	string compleateName=fileName+cpp;
	string compleatePath;
	cout<<"\n\n"<<"1: Desktop    	2: Drive"<<"\n\nInserisci posizione: ";
	cin>>i;
	if(i == 1){
		compleatePath =  Desktop+compleateName;
	}else if(i == 2){
		compleatePath = Drive+compleateName;
		
	}
	else{cout<<"ERRORE";}
	
	fout.open(compleatePath.c_str());
	fout<<"#include <iostream>";fout<<endl;
	fout<<"using namespace std;";fout<<endl;
	fout<<"int main(){";fout<<endl;fout<<endl;fout<<endl;fout<<endl;
	fout<<"    return 0;";fout<<endl;
	fout<<"}";
	fout.close();
	
	
	
		
    return 0;
}
