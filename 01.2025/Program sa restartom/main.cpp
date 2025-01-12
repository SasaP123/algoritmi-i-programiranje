#include <iostream>

using namespace std;

int main()
{
    int broj1;
    int broj2;
    int rezultat;
    string restart = "restart";

    while(restart == "restart")
    {
        cout<<"Unesi broj: ";
            cin>>broj1;  cout<<endl;

        cout<<"Unesi jos neki broj: ";
            cin>>broj2;  cout<<endl;

        rezultat = broj1 + broj2;
        cout<<"Zbroj tih brojeva je "<<rezultat<<endl;
        rezultat = broj1 - broj2;
        cout<<"Razlika tih brojeva je "<<rezultat<<endl;
        rezultat = broj1*broj2;
        cout<<"Umnozak tih brojeva je "<<rezultat<<endl;
        rezultat = broj1 / broj2;
        cout<<"Kolicnik tih brojeva je "<<rezultat<<endl;
        cout<<endl;

        cout<<"Ako zelite ponoviti program unesite (restart): ";
            cin>>restart;   cout<<endl;

        if(restart == "restart")
        {
            cout<<"Restartanje: "<<endl<<endl;
        }
        else
        {
            cout<<"Kraj programa: "<<endl;
        }
    }
    return 0;
}
