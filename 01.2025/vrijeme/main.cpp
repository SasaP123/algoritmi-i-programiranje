#include <iostream>

using namespace std;

int main()
{
    string vrijednost;
    string sat = "sat";
    string minuta = "minuta";
    string sekunda = "sekunda";
    string valja = "valja";
    float vrijeme;
    float rezultat1;
    float rezultat2;


    while(valja == "valja"){
        cout<<"Unesite vremensku vrijednost (sat/minuta/sekunda/stop(za prestanak programa)): ";
        cin>>vrijednost;
        cout<<endl;

            if(vrijednost==sat)
            {
                cout<<"Unesite koliko sati zelite pretvoriti u minute i sekunde: ";
                    cin>>vrijeme;   cout<<endl;
                rezultat1 = vrijeme*60;
                rezultat2 = vrijeme*3600;
                printf("Uneseno vrijeme %f sati jednako je kao %f minuta ili %f sekundi",vrijeme,rezultat1,rezultat2);
                cout<<endl<<endl;
            }
            else if(vrijednost == minuta)
            {
                cout<<"Unesite koliko minuta zelite pretvoriti u sate i sekunde: ";
                cin>>vrijeme;   cout<<endl;
                rezultat1 = vrijeme/60;
                rezultat2 = vrijeme*60;
                printf("Uneseno vrijeme od %f minuta jednako je kao %f sati ili %f sekundi. ",vrijeme,rezultat1,rezultat2);
                cout<<endl<<endl;
            }
            else if(vrijednost == sekunda)
            {
                cout<<"Unesite koliko sekundi zelite pretvoriti u sate i minute: ";
                    cin>>vrijeme;    cout<<endl;
                rezultat1=vrijeme/3600;
                rezultat2=vrijeme/60;
                printf("Uneseno vrijeme od %f sekundi jednako je kao %f sati ili %f minuta. ",vrijeme,rezultat1,rezultat2);
                cout<<endl<<endl;
            }
            else if(vrijednost == "stop")
            {
                cout<<"Program zavrsava...";
                valja = "ne valja...";
            }
            else
            {
                cout<<"Vrijednost nije vazeca..."<<endl;
            }
    }

    return 0;

}
