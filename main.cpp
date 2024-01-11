#include "people.h"
#include "var.h"
using namespace std;
int n;
void padd(){
    string a,b;//名字和密码
    cout<<"请输入你的名字:";
    getline(cin,a);
    for(int i=1;i<=ans;i++){//检查名称重复
        if(a==p[i].p_name){
            cout<<"名称重复！"<<endl;
            sleep(1);
            system("cls");
            return;
        }
    }
    cout<<"请输入密码:";
    getline(cin,b);
    enrolll(a,b);
    cout<<"注册成功！"<<endl;
    return;
}
void to_in(){
    string a,b;
    cout<<"请输入你的名字:";
    getline(cin,a);
    cout<<"密码:";
    getline(cin,b);
    if(sign_in(a,b)==true){
        user();
    }
    else{
        cout<<"登陆失败"<<endl;
    }
    return;
}
int main(){
    in();
    pin();
    for(int i=1;i<=5;i++){
        system("color 1A");
        system("color 2B");
        system("color 3C");
        system("color 4D");
        system("color 5E");
    }
    system("color 07");
    cout<<"你要干什么"<<endl;
    cout<<"1.注册"<<endl;
    cout<<"2.登陆"<<endl;
    cin>>n;
    if(n==1){
        padd();
        return 0;
    }
    else if(n==2){
        to_in();
    }
    else{
        cout<<"错误"<<endl;
    }
    return;
}