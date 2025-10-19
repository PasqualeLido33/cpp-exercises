#include <iostream>
using namespace std;
int main(){
    int x,i,s;
    cout<<"Quanti valori sommare: ";
    cin>>i;
    cout<<"Inserire i valori: \n";
    while(i>0){
        cin>>x;
        s=s+x;
        i--;
    }
    cout<<"La somma e': "<<s;
    
    return 0;
}