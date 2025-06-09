#include <iostream>
using namespace std;

int main(){
    
    int r=1;
    int broj;
    char dij;
    do{
    cout<<"Unesi broj: ";
        cin>>broj;
    cout<<"Kako ces popuniti dijagonale:";
        cin>>dij;
        if(dij=='1')
            dij=' ';
    char n[broj][broj];
    for(int i = 0;i<broj;i++){
        for(int j=0;j<broj;j++)
        {
            //postavljanje praznih polja i dijagonala
            n[i][j]='0';
            if(j==0 || i==0 || j==(broj-1) || i==(broj-1))
                n[i][j]=dij;
            else if(i==j)
                n[i][j]=dij;
            else if(j==(broj-1)-i)
                n[i][j]=dij;

            //postavljanje polja iznad 1. i 2. dijagonale
            else if(j<(broj-1)-i && j>i)
                n[i][j]='1';

            //postavljanje polja lijevo od 1. dijagonale
            else if(i>j && i!=0)
            {
                n[i][j]='2';
                    //postavljanje polja ispod 1. i 2. dijagonale
                    if(j>(broj-1)-i && j<i)
                    n[i][j]='3';
            }

            //postavljanje polja desno od 2. dijagonale
            else if(i>(broj-1)-j && i<j)
                n[i][j]='4';
            
            cout<<n[i][j];
        }
    cout<<endl;
    }
    cout<<"Unesi 1 za reset: ";
        cin>>r;
    }while(r==1);

    cout<<endl; system("pause");
    return 0;
}
