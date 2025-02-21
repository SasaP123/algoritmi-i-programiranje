#include <iostream>

using namespace std;

int main()
{
    cout<<"Ovaj program zbraja sve brojeve izmedzu 2 unesena broja..."<<endl<<"Npr. brojevi od 1 do 100:"<<endl<<"1+2+3+4+5+...+99+100 = 5050"<<endl<<endl<<endl;
    int brojZ,brojP,razmak,zbroj=0;

    cout<<"Unesite Broj od kojeg zbrajanje pocinje: ";
        cin>>brojP; cout<<endl;
    cout<<"Unesite broj kada zbrajanje zavrsava: ";
        cin>>brojZ; cout<<endl;
    cout<<"Unesite razmak: ";
        cin>>razmak;    cout<<endl;

    int broj=brojP;

    for(int i = brojP;i<=brojZ;i+=razmak)
    {
        zbroj+=broj;
        broj+=razmak;
    }
    cout<<zbroj;
    return 0;
}
