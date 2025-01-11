#include <iostream>

using namespace std;

int main()
{
    int zbroj = 0;
    int broj;


    cout<<"Unesi prirodan broj: ";
        cin>>broj;  cout<<endl;

    cout<<"Unesen je broj: "<<broj<<endl<<endl;

    cout<<"Koliko znamenaka ima taj broj: ";
    int brojZ;
        cin>>brojZ; cout<<endl;
    cout<<"Uneseni broj ima "<<brojZ<<" znamenka/ke."<<endl;

    for(int i = 1;i<=brojZ;i=i+1)
    {
            zbroj=zbroj+(broj%10);
            broj = broj/10;
    }
    cout<<"Zbroj znamenaka unesenog broja je: "<<zbroj<<endl;
    return 0;
}
