#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int batas,bil,input,x,y;
    int a,b,c;
    char pil;
    do{
        system("cls");
    a=0;
    b=1;
    c=a+b;
    lagi:
        cout<<"Masukkan nilai X :";
        cin>>x;
        cout<<"Masukkan nilay Y :";
        cin>>y;
        cout<<endl;


    if (x>y) goto lagi;
        for (batas=0; batas<=y-1; batas++){
            for (bil=0;bil<=((2*y)-(2*batas));bil++){
                cout<<" ";
            }
            for(input=0; input<=batas; input++){
                c=a+b;
                b=a;
                a=c;
                (batas>=x-1) ? cout<<"   "<<c%10 : cout<<"";
            }
            cout<<endl<<endl;
        }        cout<<"Lagi [Y/N]? "<<endl;
                 cin>>pil;


        }while(pil == 'Y' || pil == 'y');
            cout<<"Keluar dari loop"<<endl;
}
