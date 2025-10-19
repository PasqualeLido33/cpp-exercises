#include <iostream>
using namespace std;
int main(){
    char op;
    int  a = 0,i = 1;
    double N[i];
    double r;
 

    while(true){
    	if(a == 0){		
    	cout<<"        CALCOLATRICE\n";
   		cout<<"##################################\n\n\n";
		cout<<"Inserisci numero: ";
		cin>>N[i];
		i++;	a=1;
		}
		
        cout<<"Inserisci operatore ('+'  '-'  '*'  '/'  'C'  'E'): ";
        cin>>op;
        if(op == 'c'|| op == 'C'){system("cls"); i--; a = 0;continue;}
        if(op == 'e'|| op == 'E'){break;}
        
        cout<<"Inserisci numero: ";
        cin>>N[i];
        
        if(op == '+'){r = N[i-1] + N[i];}
        else if(op == '-'){r = N[i-1] - N[i];}
        else if(op == '*'){r = N[i-1] * N[i];}
        else if(op == '/'){r = N[i-1] / N[i];}
        if(op == 'c'|| op == 'C'){r = 0;}
        N[i]=r;
        cout<<"Risultato: "<<r<<"\n";
        i++;
    }
	system("cls");
	cout<<"Arrivederci!!!\n";
	system("pause");
   

    return 0;
}
