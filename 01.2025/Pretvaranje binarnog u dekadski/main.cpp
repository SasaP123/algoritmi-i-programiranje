#include <iostream>

using namespace std;

int main()
{
    int broj;
    int pov=1; //pove�anje->potencija
    int ponavljanje = 0;
    int z;
    int zbroj = 0;
    string reset="reset";

    while(reset == "reset")
    {

    cout<<"Unesite neki broj s bazom 2: ";
        cin>>broj;  cout<<endl;

    int brojN=broj;
    while(brojN>0)
    {
        ponavljanje=ponavljanje+1;
        brojN=brojN/10;
    }

    for(int i=1;i<=ponavljanje;i=i+1)
    {
        z=broj%10;
        zbroj=zbroj+z*pov;
        broj=broj/10;
        pov=pov*2;
    }

    cout<<"Binarni broj u dekadski je: "<<zbroj<<endl;
    zbroj = 0;
    pov = 1;
    cout<<"Zelite li resetirati?"<<endl<<"Unesite reset: ";
        cin>>reset;  cout<<endl;
    }
    cout<<"Program se zavrsava..."<<endl;

    return 0;
}
