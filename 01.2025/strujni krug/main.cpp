#include <iostream>

using namespace std;

int main()
{
    string nepoznato;
    string reset = "reset";
    string recenica;
    string MJ;
    float otpor;
    float napon;
    float struja;
    float rezultat;

    while(reset == "reset")
    {
        cout<<"Koji dio strujnog kruga je nepoznat? (otpor/struja/napon): ";
            cin>>nepoznato; cout<<endl;

        if(nepoznato == "otpor")
        {
            cout<<"Unesi struju: ";  cin>>struja;    cout<<endl;
            cout<<"Unesi napon: ";  cin>>napon;     cout<<endl;
            rezultat = napon/struja;
            MJ = " Ohma.";
            cout<<nepoznato<<" je "<<rezultat<<MJ<<endl<<endl;
        }
        else if(nepoznato == "struja")
        {
            cout<<"Unesi otpor: ";  cin>>otpor;  cout<<endl;
            cout<<"Unesi napon: ";  cin>>napon;  cout<<endl;
            rezultat = napon/otpor;
            MJ = " Ampera.";
            cout<<nepoznato<<" je "<<rezultat<<MJ<<endl<<endl;
        }
        else if(nepoznato =="napon")
        {
            cout<<"Unesi struju: "; cin>>struja;    cout<<endl;
            cout<<"Unesi otpor: ";  cin>>otpor;     cout<<endl;
            rezultat = struja * otpor;
            MJ = " Volti.";
            cout<<nepoznato<<" je "<<rezultat<<MJ<<endl<<endl;
        }
        else if(nepoznato != "otpor" && nepoznato != "struja" && nepoznato != "napon")
        {
            cout<<"Krivi unos podataka:"<<endl<<endl;
        }
        cout<<"Zelite li resetirati program,unesite (reset): ";   cin>>reset;   cout<<endl;
        rezultat = 0;
    }
    cout<<"Program se zavrsava..."<<endl;
    return 0;
}
