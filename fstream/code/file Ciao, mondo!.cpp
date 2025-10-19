#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream fout ("Ciao, mondo!.cpp");

    fout<<"#include <iostream>";fout<<endl;
	fout<<"using namespace std;";fout<<endl;fout<<endl;

	fout<<"int main(){";fout<<endl;fout<<endl;
    
    fout<<" cout<<"; fout.put('"'); fout<<"Ciao, mondo!"; fout.put('"'); fout.put(';');
    fout<<endl;fout<<endl;


	fout<<"    return 0;";fout<<endl;
	fout<<"}";


    return 0;
}