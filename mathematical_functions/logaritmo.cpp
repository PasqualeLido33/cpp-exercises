#include<iostream>
using namespace std;
int main(){
	int i;
	double p,s,z,x,N;
    i = 1;  p = 1;  z = 1; s = 0;  N = 0.693147;//ln(2)
    cout<<"Immettere un valolre: ";
    cin>>x;
    cout<<"Il logaritmo di: "<<x;
    /*
        x = x
        x = 2*(x/2)
        ln(x) = ln(2*(x/2))
        ln(x) = ln(2)+ln(x/2)
        Quindi dividiamo x per 2 fino a quando non e' minore di 2 
        e per ogni divisione sommiamo N ovvero il logaritmo di 2
    */
    while (x > 2) {
        x = x / 2;          
        s = s + N;  
    }
    
    if(x>1 && x<2){
        while(p*z/i > 0.00000001|| p * z / i < -0.000001){ // seconda condizione nel caso in cui p * z / i diventi negativa
        p = p*(x-1); 
        s = s + p*z/i;
        z=-z;
        i++;
        }
    }else if( x>0 && x <= 1){// per propieta' dei logaritmi dove ln(x)= −ln(1/x)
        while(p*z/i > 0.00000001|| p * z / i < -0.000001){
        p = p*(1.0/x-1); 
        s = s + p*z/i;
        z=-z;
        i++;
    }
    s=-s;
    }else if(x==2){s=N;}

    cout<<" e': "<<s;

	return 0;
}
