#include <iostream>

using namespace std;

int main()
{
    int broj;
    int brojZ=0;
    char restart = '1';

    while(restart == '1')
    {
    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;

    //cijeli brojevi:
    while(broj/10!=0)
    {
        broj=broj/10;
        brojZ=brojZ+1;
    }
        brojZ=brojZ+1;

    cout<<"Broj znamenki je "<<brojZ<<endl;
    cout<<"Ako zelite resetirati program unesite (1): ";
    cin>>restart;   cout<<endl;
    brojZ = 0;
    }
    cout<<"Program se zavrsava..."<<endl;

    return 0;
}
