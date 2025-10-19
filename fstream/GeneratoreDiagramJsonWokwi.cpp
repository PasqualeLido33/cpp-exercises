#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	char porte[2];
	int i = 0;int e = 2;
	ofstream fout("diagram.json");
	cout<<"Inserisci una porta tra 2-13 e A0-A5: ";
	while(i<2){
		porte[i] = cin.get();
		if( 'a'<= porte[i] && porte[i] <= 'z'){
			porte[i] = porte[i] - 32;
		}
		
		i++;
	}
	if(porte[1]==10){e = 1;}
	
	fout.put('{');fout<<endl;
	fout<<"	";fout.put('"');fout<<"version";fout.put('"');fout<<": 1,"<<endl;
	fout<<"	";fout.put('"');fout<<"author";fout.put('"');fout<<": ";fout.put('"');fout<<"Pasquale Lido";fout.put('"');fout.put(',');fout<<endl;
	fout<<"	";fout.put('"');fout<<"editor";fout.put('"');fout<<": ";fout.put('"');fout<<"wokwi";fout.put('"');fout.put(',');fout<<endl;
	fout<<"	";fout.put('"');fout<<"parts";fout.put('"');fout<<": ["<<endl;
	fout<<"		";fout.put('{');fout<<" ";fout.put('"');fout<<"type";fout.put('"');fout<<": ";fout.put('"');fout<<"wokwi-arduino-uno";fout.put('"');fout<<", ";fout.put('"');fout<<"id";fout.put('"');fout<<": ";fout.put('"');fout<<"uno";fout.put('"');fout<<", ";fout.put('"');fout<<"top";fout.put('"');fout<<": 0, ";fout.put('"');fout<<"left";fout.put('"');fout<<": 0, ";fout.put('"');fout<<"attrs";fout.put('"');fout<<": {} },"<<endl;
	fout<<"		";fout.put('{');fout<<endl;
	fout<<"			";fout.put('"');fout<<"type";fout.put('"');fout<<": ";fout.put('"');fout<<"wokwi-led";fout.put('"');fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"id";fout.put('"');fout<<": ";fout.put('"');fout<<"led1";fout.put('"');fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"top";fout.put('"');fout<<": ";fout<<"-157.2";fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"left";fout.put('"');fout<<": ";fout<<"61.4";fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"attrs";fout.put('"');fout<<": { ";fout.put('"');fout<<"color";fout.put('"');fout<<": ";fout.put('"');fout<<"red";fout.put('"');fout<<" }"<<endl;
	fout<<"		},"<<endl;
	fout<<"		{"<<endl;
	fout<<"			";fout.put('"');fout<<"type";fout.put('"');fout<<": ";fout.put('"');fout<<"wokwi-resistor";fout.put('"');fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"id";fout.put('"');fout<<": ";fout.put('"');fout<<"r1";fout.put('"');fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"top";fout.put('"');fout<<": ";fout<<"-91.2";fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"left";fout.put('"');fout<<": ";fout<<"57.05";fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"rotate";fout.put('"');fout<<": ";fout<<"90";fout<<","<<endl;
	fout<<"			";fout.put('"');fout<<"attrs";fout.put('"');fout<<": { ";fout.put('"');fout<<"value";fout.put('"');fout<<": ";fout.put('"');fout<<"220";fout.put('"');fout<<" }"<<endl;
	fout<<"		}"<<endl;
	fout<<"	],"<<endl;
	fout<<"	";fout.put('"');fout<<"connections";fout.put('"');fout<<": ["<<endl;
	fout<<"		[ ";fout.put('"');fout<<"uno:GND.1";fout.put('"');fout<<", ";fout.put('"');fout<<"led1:C";fout.put('"');fout<<", ";fout.put('"');fout<<"black";fout.put('"');fout<<", [ ";fout.put('"');fout<<"v-37.8";fout.put('"');fout<<", ";fout.put('"');fout<<"h-38.7";fout.put('"');fout<<" ] ],"<<endl;
	fout<<"		[ ";fout.put('"');fout<<"r1:2";fout.put('"');fout<<", ";fout.put('"');fout<<"uno:";for(i = 0; i<e; i++){fout<<porte[i];}fout.put('"');fout<<", ";fout.put('"');fout<<"green";fout.put('"');fout<<", [ ";fout.put('"');fout<<"h0";fout.put('"');fout<<" ] ]"<<endl;
	fout<<"	],"<<endl;
	fout<<"	";fout.put('"');fout<<"dependencies";fout.put('"');fout<<": {}"<<endl;
	fout.put('}');	
	
    return 0;
}
