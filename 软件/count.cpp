#include <iostream>
using namespace std;
double a,b;
char x;
void count(){
    cout<<"算式:";
    cin>>a>>x>>b;
    if(x=='+'){
        cout<<"结果:"<<a+b<<endl;
    }
    else if(x=='-'){
        cout<<"结果:"<<a-b<<endl;
    }
    else if(x=='*'){
        cout<<"结果:"<<a*b<<endl;
    }
    else if(x=='/'&&b!=0){
        cout<<"结果:"<<a/b<<endl;
    }
    else if(x=='/'&&b==0){
        cout<<"除数不能为0"<<endl;
    }
    else{
        cout<<"错误"<<endl;
    }
    return;
}