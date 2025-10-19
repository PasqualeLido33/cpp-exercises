#include <iostream>
using namespace std;
int main()
{
    int opzione = 0;    
    double soldi,i_soldi,p_soldi;
    soldi = 0;
    
    while(opzione!=4){
    cout<<"/////////////////////////////////////////////////////////\n";
    cout<<"                        BANCOMAT                         \n";
    cout<<"\n";
    cout<<"1: Immisione.\n";
    cout<<"2: Prelievo.\n";
    cout<<"3: Conto.\n";
    cout<<"4: ESCI.\n\n";
    cout<<"/////////////////////////////////////////////////////////\n";
    cout<<"Scegliere un'opzione: ";
    cin>>opzione;
    system("cls");
    switch(opzione){
        case 1:
            cout<<"Immettere il la quantita' di soldi da immettere: ";
            cin>>i_soldi;
            system("cls");
            while(i_soldi<=0)
            {
                system("cls");
                cout<<"Immettere una quantita' valida: ";
                cin>>i_soldi;
            }
            soldi = soldi + i_soldi;
            system("cls");
            break;
        case 2:
            cout<<"Immettere il numero di soldi da prelevare: ";
            cin>>p_soldi;
            system("cls");
            while(p_soldi>soldi)
            {
                system("cls");
                cout<<"ERRORE, SOLDI INSUFFICIENTI!!\n";
                cout<<"Immettere una quantita' valida: ";
                cin>>p_soldi; 
            }
            while(p_soldi<0)
            {
                system("cls");
                cout<<"Immettere una quantita' valida: ";
                cin>>p_soldi;
             }
            soldi = soldi - p_soldi;
            system("cls");
            break;
        case 3:
            system("cls");
            cout<<"LE RIMANGONO: "<<soldi<<"$\n";
            system("pause");
            system("cls");
            break; 
        case 4:
            break;
        default:
            system("cls");
            cout<<"ERRORE, INSERIRE UN'OPZIONE VALIDA!\n";
            system("pause");
            system("cls");
        }            
    
    }

    system("cls");
    cout<<"ARRIVEDERCI!\n";
    system("pause");
    return 0;
}
