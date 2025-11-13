#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	ofstream fout("cirlce.svg");
	char c;
	char x[100],y[100];
	int i = 0;int j = 0;int stato = 0;int n = 0; int k = 1;
	cout<<"SVG EDITOR - version 1"<<endl<<"Please, enter one instruction per line:"<<endl;
	cout<<"> ";
	c = cin.get();

		while(stato != 2){
			if(stato == -1){ cout<<"ERROR! not valid value.\n"; stato = 0; c = cin.get(); n--;
			}else if(stato == 0){ 
				if(c == 'q'){ stato = 2;}						// p o q
				else if (c == 'p'){stato = 1;}else{stato = -1;}
				
			}else if(stato == 1 ){								// spazio
				if(c == ' '){ stato = 3;}else{stato = -1;}
	
				
			}else if(stato == 3 || stato == 4 || stato == 5){ 	//xxx
				if(c >= '0' && c <= '9'){ x[i] = c;	i++; stato++;}else{stato = -1;}
				
			}else if(stato == 6){								// spazio
				if(c == ' '){ stato = 7;}else{stato = -1;}

			}else if(stato == 7 || stato == 8 || stato == 9){	//yyy
				if(c >= '0' && c <= '9'){ y[j] = c;	j++; stato++;}else{stato = -1;}
	
			}
		if(stato == 10 ){ n++;  stato = 0; c = cin.get();cout<<"> ";}
		
			
		c = cin.get();
		
		}	
	i = 0; j = 0;
	fout<<"<svg"<<endl;
	fout<<"xmlns = ";fout.put('"');fout<<"http://www.w3.org/2000/svg";fout.put('"');fout<<endl;
	fout<<"width = ";fout.put('"');fout<<"300";fout.put('"');fout<<endl;
	fout<<"height = ";fout.put('"');fout<<"300";fout.put('"');fout<<endl;
	fout<<"fill = ";fout.put('"');fout<<"rgb(230, 230, 230)";fout.put('"');fout<<endl;
	fout<<"stroke = ";fout.put('"');fout<<"rgb(0, 0, 0)";fout.put('"');fout<<endl;
	fout<<"stroke-width = ";fout.put('"');fout<<"4";fout.put('"');fout<<endl;
	fout.put('>');
	
	while(k<=n){
		
		fout<<"<circle cx=";fout.put('"');for(i;i<3*k;i++){ fout<<x[i];};fout.put('"');
		fout<<" cy=";fout.put('"');for(j;j<3*k;j++){ fout<<y[j];};fout.put('"');
		fout<<" r=";fout.put('"');fout<<"20";fout.put('"');
		fout<<" />";fout<<endl;
		k++;
	}
	
	fout<<endl<<"</svg>";
	
	
	if(stato == 2){cout<<"The image has been created. Bye!";}
	

    return 0;
}
