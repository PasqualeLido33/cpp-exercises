#include <iostream>
using namespace std;
int main(){
	
	char c;
	int M = 1;
	cout<<"IN: ";
	c = cin.get();
	cout<<"OUT: ";
	
	while(c != 10){
		if(M == 1 && c >= 'a' && c <= 'z'){
			c = c - 32;
		}else if(M == 0 && c >= 'A' && c <= 'Z'){
			c = c + 32;
		}
		cout.put(c);
		c = cin.get();
		M = -M + 1;
	}



    return 0;
}
