#include <iostream>

using namespace std;

int main()
{
    int n[10][10];

    for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
                {
                    n[i][j]=rand()%50+1;
                    cout<<n[i][j]<<"\t";
                }cout<<endl;
        }
    cout<<"--------------------------------------------------------------------------------------------|"<<endl;

    bool prvi = true;
    int najmanji;
    int red;
    for(int i=0;i<10;i++)
        {
            int zbroj=0;
            for(int j=0;j<10;j++)
                {
                    zbroj+=n[i][j];
                }
            if(prvi==true)
                {
                    prvi=!prvi;
                    najmanji=zbroj;
                    red=i+1;
                }
            else if(zbroj<najmanji)
                {
                    red=i+1;
                    najmanji=zbroj;
                }
            cout<<i+1<<". zbroj: "<<zbroj<<endl;
        }
    cout<<"Najmanji zbroj je "<<najmanji<<" u "<<red<<". redu."<<endl;

}
