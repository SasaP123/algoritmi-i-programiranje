#include <iostream>

using namespace std;
                        //ovaj program uzima slovo koje korisnik unosi i nastavlja abecedu od tog slova sve do kraja engleske abecede:
int main()
{
    char a;
    int tr;

    cout<<"Unesite neko slovo: ";
        cin>>a; cout<<endl;

    tr=a;

    for(tr;tr<=122;tr=tr+1)
    {
        a=tr;
        cout<<a<<" ,";
        tr=a;
    }
    return 0;
}
