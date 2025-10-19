#include <iostream>
using namespace std;
int main(){
	
	double x,r;
	cout<<"Inserire il valore: ";
	cin>>x;
	r=1;
	while(x>=1){
		
		r=r*x;
		x--;	
	}
	cout<<"il fattoriale e': "<<r;
	
	return 0;
}
