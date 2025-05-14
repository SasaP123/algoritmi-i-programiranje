#include <iostream>

using namespace std;

int main()
{
    int polje1[100];

    for(int i=0;i<100;i++)
        {
            polje1[i]=99-i;
            cout<<polje1[i]<<endl;
        }cout<<"-----------------------------------------|"<<endl;


    int polje2[100];

    for(int i=0;i<100;i++)
        {
            polje2[i]=rand()%100+1;
            if(i<100/2)
                {
                    cout<<polje2[i]-1<<endl;
                }
            else
                    cout<<polje2[i]+1<<endl;
        }cout<<"-----------------------------------------|"<<endl;


    char slova[10];

    cout<<"Unesi slovo: ";
        cin>>slova[0];

    for(int i=1;i<10;i++)
        {
            cout<<"Unesi slovo :";
                cin>>slova[i];
        }

    for(int i=1;i<10;i++)
        {
            if(slova[i]>slova[0])
                cout<<slova[i]<<endl;
        }cout<<"-----------------------------------------|"<<endl;




    int n[100];

    for(int i=0;i<5;i++)
        {
            n[i]=rand()%100+1;
        }
    cout<<"---"<<endl;

    for(int i=0; i<100; i+=2)
        {
            if(n[i]==n[i+1])
                cout<<n[i]<<endl;
        }


}
