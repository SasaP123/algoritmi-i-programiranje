#include <iostream>

using namespace std;

int main()
{
    int ponavljanje;
    string recenica;
    cout<<"Ne koristi razmake!"<<endl<<endl;
    cout<<"Unesi recenicu koja ce se ponavljati: ";
        cin>>recenica;
            cout<<endl;

    cout<<"Unesi broj ponavljanja recenice: ";
        cin>>ponavljanje;
            cout<<endl;

    for(int i=1;i<=ponavljanje;i=i+1){

        cout<<recenica<<" "<<i<<endl;
    }
    return 0;
}
