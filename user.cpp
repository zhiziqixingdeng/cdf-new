#include "var.h"
#include "people.h"
using namespace std;
extern you;
void user(){
    int n;
    int w;
    while(true){
        cout<<"干什么"<<endl;
        cout<<"1.打开文件夹"<<endl;
        cout<<"2.软件"<<endl;
        cin>>n;
        if(n==1){
            cout<<"0.不看"<<endl;
            for(int i=1;i<=cnt;i++){
                cout<<i<<"."<<t[i].name<<endl;
            }
            cout<<"打开:";
            cin>>w;
            if(w!=0){
                system("cls");
                cout<<t[w].name<<endl;
                cout<<"-----------------------------------"<<endl;
                cout<<t[w].text<<endl;
            }
            else{
                cout<<"好的"<<endl;
            }
            else if(n==2){
                system("cls");
                cout<<"你打开什么"<<endl;
                cout<<"1.文件系统"<<endl;
                cout<<"2.计算器"<<endl;
                cout<<"3.主题切换"<<endl;
                cout<<"4.游戏"<<endl;
                cout<<"5.计时器"<<endl;
                cout<<"6.cmd"<<endl;
                cout<<"7.画图"<<endl;
                cin>>w;
                if(w==1){
                    text_system();
                }
                else if(w==2){
                    count();
                }
                else if(w==3){
                    style();
                }
                else if(w==4){
                    game();
                }
                else if(w==5){
                    ttime();
                }
                else(w==6){
                    zcmd();
                }
                else if(w==7){
                    draw();
                }
                else{
                    cout<<"错误"<<endl;
                }
            }
            else{
                cout<<"错误"<<endl;
            }
        }
    }
}