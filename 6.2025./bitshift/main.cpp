#include <iostream>
using namespace std;

int main(){

    char n[100][15];

    cout<<"Ovo je program za bit shift-ing"<<endl;

    //unos rečenice
    for(int i=0;i<100;i++){
        bool kraj = false;
        for(int j=0;j<15;j++){
            cout<<"Unesi znak: ";
                cin>>n[i][j];

            if(n[i][j]=='0' && j==0)
                kraj=!kraj;
            if(n[i][j]=='0')
                break;
        }
        if(kraj==true)
            break;
    }


    //ispis rečenice
    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){

            if(n[i][j]=='0' && j==0)
                kraj=!kraj;
            if(n[i][j]=='0')
                break;
        
            cout<<n[i][j];
                
        }cout<<" ";
        if(kraj==true)
            break;
    }cout<<endl;


    //shifting
    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){
            if(n[i][j]=='0' && j==0)
                kraj=!kraj;
            if(n[i][j]=='0')
                break;
            cout<<(char)(n[i][j] << 1); // pomak bitova u lijevo za 1 mjesto
        }
        cout<<" ";
        if(kraj==true)
            break;
    }cout<<endl;

    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){
            if(n[i][j]=='0' && j==0)
                kraj=!kraj;
            if(n[i][j]=='0')
                break;
            cout<<(char)(n[i][j] >> 1); // pomak bitova u desno za 1 mjesto
        }
        cout<<" ";
        if(kraj==true)
            break;
    }cout<<endl;

    cout<<endl; system("pause");
    return 0;

}
