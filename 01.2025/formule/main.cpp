#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Racunanje opsega i povrsine kvadrata/pravokutnika/pravokutnog trokuta

    string oblik;
    float a;
    float b;
    float c;

    float opseg;
    float povrsina;

        cout<<"Upisi kvadrat/trokut/pravokutnik: ";
            cin>>oblik;
                cout<<endl;

        if(oblik == "trokut")
            {
            cout<<"Upisi stranicu a: ";
                cin>>a;
                    cout<<endl;
            cout<<"Upisi stranicu b: ";
                cin>>b;
                    cout<<endl;
            cout<<"Upisi stranicu c: ";
                cin>>c;
                    cout<<endl;

            opseg = a+b+c;
            povrsina = (a*c)/2;

            cout<<"Opseg: "<<opseg<<endl;
            cout<<"Povrsina: "<<povrsina<<endl;
            }

        else if(oblik == "kvadrat")
        {
            cout<<"Unesi stranicu kvadrata: ";
                cin>>a; cout<<endl;

            opseg = a*4;
            povrsina = a*a;

            cout<<"Opseg: "<<opseg<<endl;
            cout<<"Povrsina: "<<povrsina<<endl;
        }

        else if(oblik == "pravokutnik")
        {
            cout<<"Unesi stranicu a: ";
                cin>>a;
                    cout<<endl;
            cout<<"Unesi stranicu b: ";
                cin>>b;
                    cout<<endl;

            opseg = 2*a+2*b;
            povrsina = a*b;

            cout<<"Opseg: "<<opseg<<endl;
            cout<<"Povrsina: "<<povrsina<<endl;
        }


    return 0;
}
