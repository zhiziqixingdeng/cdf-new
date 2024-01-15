#include <iostream>
#include <cstdlib>
using namespace std;
void stlye(){
    int n;
    cout<<"你要什么风格"<<endl;
    cout<<"1.返回黑白"<<endl;
    cout<<"2.随机"<<endl;
    cin>>n;
    if(n==1){
        system("color 07");
    }
    else if(n==2){
        int r=rand()%5+1;
        if(r==1){
            system("color 02");
        }
        if(r==2){
            system("color 04");
        }
        if(r==3){
            system("color 0A");
        }
        if(r==4||r==5){
            system("color 08");
        }
    }
    else{
        cout<<"错误"<<endl;
    }
}
