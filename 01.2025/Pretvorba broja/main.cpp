#include <iostream>

using namespace std;

int main()
{
    //ovaj program pretvara broj iz baze 10 u bazu 2
    //BROJ KOJI SE ISPISUJE U BINARNOM OBLIKU JE NAOPAKO!!
    int broj;
    int ostatak;


    cout<<"BROJ KOJI CE BITI ISPISAN NA KRAJU PROGRAMA JE OKRENUT,ZATO GA JE POTREBNO PROCITATI UNATRASKE!"<<endl<<endl;
    cout<<"Unesite neki broj: ";
        cin>>broj;  cout<<endl;

    while(broj>0)
    {
        ostatak = broj%2;
        broj=broj/2;
        cout<<ostatak;
    }
    cout<<endl<<"<-------"<<endl;
    return 0;
}
