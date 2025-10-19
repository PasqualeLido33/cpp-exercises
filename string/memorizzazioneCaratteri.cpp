#include <iostream>
using namespace std;

int main(){
	//ti fa memorizzare n caratteri
	int i = 0; int n;
	cout<<"Quanti caratteri vuoi memorizzare: "; cin>>n;
	char porte[n];
	
	porte[i] = cin.get();
	while(i<n){
		porte[i] = cin.get();
		if( 'a'<= porte[i] && porte[i] <= 'z'){//UPPERCASE
			porte[i] = porte[i] - 32;
		}
		i++;
	}

	for(i = 0; i<n+1; i++){cout<<porte[i];}
		
	return 0;

}
