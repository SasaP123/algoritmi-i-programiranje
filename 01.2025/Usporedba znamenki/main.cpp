#include <iostream>

using namespace std;

int main()
{
    int broj;
    int Z1; //Znamenka 1
    int Z2; //Znamenka 2
    int z1; //koji je broj znamenka po redu
    int z2; //Koji je broj znamenka po redu

    cout<<"Unesite neki broj: ";
    scanf("Broj je %i",&broj);  cout<<endl;

    cout<<"Unesite broj znamenki koje se usporedzuju: "<<endl;
    cout<<"ZNAMENKE SE CITAJU OD DESNA NA LIJEVO!"<<endl;
    cin>>z1;  cout<<endl;
    cin>>z2;  cout<<endl;

    int BROJ=broj;
    for(int i=1;i<z1;i=i+1)
    {
        BROJ=BROJ/10;
    }
        Z1=BROJ%10;

    for(int i=1;i<z2;i=i+1)
    {
        broj=broj/10;
    }
        Z2=broj%10;

    int r = Z1 - Z2;

    if(r<0)
    {
        printf("Znamenka %i je manja od %i za %i",Z1,Z2,r*-1);
    }
    else if(r==0)
    {
        printf("Znamenke %i i %i su jednake tako da je razlika %i...",Z1,Z2,r);
    }
    else
    {
        printf("Znamenka %i je veca od %i za %i",Z1,Z2,r);
    }
    return 0;
}
