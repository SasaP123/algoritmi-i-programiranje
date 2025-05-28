#include <iostream>

using namespace std;

int main()
{
    char rijeci[100][15];

            for(int i=0;i<100;i++)
                {
                    bool kraj=false;
                    for(int j=0;j<15;j++)
                        {
                            cout<<"Unesi slovo:";
                                cin>>rijeci[i][j];
                            if(rijeci[i][j]=='0' && j==0)
                                kraj=!kraj;
                            if(rijeci[i][j]=='0')
                                break;
                        }
                    if(kraj == true)
                        break;
                }


        for(int i=0;i<100;i++)
        {
            bool kraj=false;
            for(int j=0;j<15;j++)
                {
                    if(rijeci[i][j]=='0' && j==0)
                        kraj=!kraj;
                    if(rijeci[i][j]=='0')
                        break;
                    cout<<rijeci[i][j];
                }
            cout<<" ";
            if(kraj==true)
                break;
        }cout<<endl<<"----------------"<<endl;

        int brojS[100][1]; // broj slova
        int s=0; //broj ponavljanja broja Slova
        for(int i=0;i<100;i++)
            {
                bool kraj=false;
                brojS[i][0]=0;

                for(int j=0;j<15;j++)
                    {
                        if(rijeci[i][j]=='0' && j==0)
                            kraj=!kraj;
                        if(rijeci[i][j]=='0')
                            break;

                        brojS[i][0]++;
                        if(rijeci[i][j+1]=='0') //ispis zadnjeg slova
                            {
                                cout<<rijeci[i][j]<<endl;
                            }
                    }

                s++;
                if(kraj==true)
                    {
                        for(int n=0;n<s;n++)
                            {
                                if(brojS[n][0]!=0)
                                    cout<<brojS[n][0]<<endl;
                            }
                        break;
                    }
            }cout<<"\n-----------------------\n";

            char zadnji='a';
            int rijec=0;
            for(int i=0;i<100;i++)
                {
                    bool kraj=false;
                    for(int j=0;j<15;j++)
                        {
                            if(rijeci[i][j]=='0' && j==0)
                                kraj=!kraj;
                            if(rijeci[i][j]=='0')
                                break;

                            if(rijeci[i][j]>zadnji)
                                zadnji=rijeci[i][j];
                        }
                    if(kraj==true)
                        {
                            cout<<"Zadnje slovo je "<<zadnji<<" u "<<rijec<<". rijeci.";
                            break;
                        }
                    rijec++;
                }
}
