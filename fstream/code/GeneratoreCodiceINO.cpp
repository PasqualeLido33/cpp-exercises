#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	char porte[2];
	int i = 0;
	ofstream fout("Lampadina_Lampeggiante.ino");
	cout<<"Inserisci una porta tra 2-13 e A0-A5: ";
	while(i<2){
		porte[i] = cin.get();
		if( 'a'<= porte[i] && porte[i] <= 'z'){
			porte[i] = porte[i] - 32;
		}
		i++;
	}
	
	fout<<"void setup(){"<<endl;
	fout<<"	pinMode(";for(i = 0; i<2; i++){fout<<porte[i];};fout<<", OUTPUT);"<<endl;
	fout.put('}');fout<<endl;
	fout<<"void loop(){"<<endl;
	fout<<"	digitalWrite(";for(i = 0; i<2; i++){fout<<porte[i];};fout<<", HIGH);"<<endl;
	fout<<"	delay(500);"<<endl;
	fout<<"	digitalWrite(";for(i = 0; i<2; i++){fout<<porte[i];};fout<<", Low);"<<endl;
	fout<<"	delay(500);"<<endl;
	fout.put('}');


    return 0;
}
