#include<iostream>
using namespace std;
int main(){
	
	double x,min,max,r,e,n,i,p;       
	i=0;
	cout<<"Inserire il valore di x: ";
	cin>>x;
	cout<<"Inserire l'esponente: ";
	cin>>n;
	
	if(n==1){ cout<<"La radice n-esima e': "<<x;return 0;}
	
	e=1;
	max=x+1;
	min=0;
	while(e>=0.000000000001){
		p=1;
		r=(max+min)/2;
		while(i<n){ p=p*r; i++;	}
		i=0;
		if(x>p){min=r;}else{max=r;}
		e=max-min;
	}

	cout<<"La radice n-esima e': " <<r;

	return 0;
}
