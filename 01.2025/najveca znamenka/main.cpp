#include <iostream>

using namespace std;

//program koji provjerava najvecu znamenku u nekom broju:

int main()
{
    int broj;
    int brojZ;
    int naj = -1;


    cout<<"Unesi neki broj: ";
        cin>>broj;  cout<<endl;
    cout<<"Koliko znamenaka ima taj broj: ";
        cin>>brojZ; cout<<endl;

    for(int i = 1;i<=brojZ;i=i+1)
    {
        if(naj<broj%10)
        {
            naj = broj%10;
        }
        broj=broj/10;
    }
    cout<<"Najveca znamenka u tome broju je "<<naj<<endl;
    return 0;
}
