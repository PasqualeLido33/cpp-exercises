#include <iostream>
using namespace std;
int main(){
	
	char c;
	cout<<"INPUT: ";
	
	while(c != 10){
		c = cin.get();
		if( 'A'<= c && c <= 'Z'){
			cout.put(c + 32);
		}else{
			cout.put(c);
		}
	}
	
	return 0;
}
