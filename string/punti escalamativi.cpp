#include <iostream>
using namespace std;

int main() {
    char c; int x = 0;
    cout << "Inserisci un testo: ";
	

    while (c != 10) {
    	c = cin.get();
        if (c == '!') {
            x++;
        }
    }
    cout <<"Ci sono: "<<x<<" Punti esclamativi";
    return 0;
}
