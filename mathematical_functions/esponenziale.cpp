#include<iostream>
using namespace std;
int main(){
	int intera,i;
	double e,p,pi,s,sd,x,f,d;
    i = 0;  p = 1;  pi = 1; sd = 1; f = 1;  s = 1;  e = 2.718;
    cout<<"Immettere esponente: ";
    cin>>x;
    
    if(x == 1){
     s=e;
    }else if( x > 0 && x < 1){
        while(e*p/f > 0.0001){
            p = p*x;
            f = f*(i+1);
            s = s + p/f;
            i++;
        }
    }else if( x > 1){
        intera = x;
        d = x - intera;
        for(i = 0; i < intera; i++){
            pi=pi*e;
        }
        i = 0;
        while(e*p/f > 0.0001){
            p = p*d;
            f = f*(i+1);
            sd = sd + p/f;
            i++;
        } 
        s = sd*pi;
    }else if( x < 0){
          while(e*p/f > 0.0001){
            p = p*-x;
            f = f*(i+1);
            sd = sd + p/f;
            i++;
        }
        s = 1.0/sd;

    }
    cout<<"L'esponenziale e': "<<s;


	return 0;
}
