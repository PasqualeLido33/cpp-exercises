#include <iostream>
using namespace std;
int main(){
    int i,j,n,t;
    
    cout<<"Inserire il numero di valori: ";
    cin>>n;
    int N[n];

    cout<<"Inserire i valori: \n";
    for(i=0; i<n; i++){
        cin>>N[i];
    }
    for(i=0; i < n - 1; i++){
        for(j=0; j < n - 1; j++){
            if(N[j] > N[j+1]){
            	
                t = N[j];
            	N[j] = N[j+1];
            	N[j+1] = t;
            }
        }
    }
   cout<<"I valori in ordine: \n";
    for(i = 0; i<n; i++){
        cout<<N[i]<<"\n";
    }


    return 0;
}
