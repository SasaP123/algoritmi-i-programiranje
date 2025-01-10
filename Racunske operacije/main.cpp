#include <iostream>

using namespace std;

int main()
{
    int broj1;
    int broj2;

    int rezultat;

    cout<<"Upisi 1. broj: ";
        cin>>broj1;
            cout<<endl;

    cout<<"Upisi 2. broj: ";
        cin>>broj2;
            cout<<endl;

    rezultat=broj1+broj2;
        cout<<"Zbroj: "<<rezultat<<endl;
    rezultat=broj1-broj2;
        cout<<"Razlika: "<<rezultat<<endl;
    rezultat=broj1*broj2;
        cout<<"Umnozak: "<<rezultat<<endl;
    rezultat=broj1/broj2;
        cout<<"Razlomak: "<<rezultat<<endl;

    return 0;

}

