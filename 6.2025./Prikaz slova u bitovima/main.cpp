#include <iostream>
using namespace std;

int main()
{
    char rijeci[100][15];

    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){
            cout<<"Unesi slovo:";
                cin>>rijeci[i][j];
            if(rijeci[i][0]=='0')
                kraj=!kraj;
            if(rijeci[i][j]=='0')
                break;
        }
        if(kraj==true)
            break;
    }

    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){
            if(rijeci[i][0]=='0')
                kraj=!kraj;
            if(rijeci[i][j]=='0')
                break;
            cout<<rijeci[i][j];
        }
        if(kraj==true)
            break;
        cout<<" ";
    }cout<<endl;

    for(int i=0;i<100;i++){
        bool kraj=false;
        for(int j=0;j<15;j++){
            cout<<"-";
            if(rijeci[i][0]=='0')
                kraj=!kraj;
            if(rijeci[i][j]=='0')
                break;
            for(int z=7;z>=0;z--)
                cout<<((rijeci[i][j]>>z) &1);
        }
        if(kraj==true)
            break;
        cout<<" ";
    }cout<<"-"<<endl;


    cout<<endl; system("Pause");
    return 0;

}
