#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Inserisci un testo: ";
	

    while (c != 10) {
    	c = cin.get();
        if (c >= 'a' && c <= 'z') {
            cout.put(c - 32);
        } else {
            cout.put(c);
        }
    }
    return 0;
}
