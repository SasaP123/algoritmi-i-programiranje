#include <iostream>

using namespace std;

int main()
{
    char slovo;
    int Zn;//slovo nakon
    int Z;//slovo
    int Zp;//slovo prije

    char slovoNa;
    char slovoPr;

    cout<<"Unesi neko slovo: ";
        cin>>slovo; cout<<endl;

    Z=slovo-97;
    Zn=(Z+1)%26;
    Zp=(Z-1)%25;

    slovoNa=Zn+97;
    slovoPr=Zp+97;

    cout<<"Slovo prije: "<<slovoPr<<endl;
    cout<<"Slovo poslije: "<<slovoNa<<endl;

    return 0;

}
