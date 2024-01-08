#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;
struct people{
	string p_name;
	string password;
}p[999];
int ans;//有多少 
void pin(){
	freopen("people.txt","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		getline(cin,p[i].p_name);
		getline(cin,p[i].password);
	}
	freopen("CON","r",stdin);
	return;
}
bool sign_in(string to_name,string pass){
	for(int i=1;i<=ans;i++){
		if(p[i].p_name==to_name&&pass==p[i].password){
			cout<<"欢迎您！"<<p[i].p_name<<endl;
			return true; 
		}
	}
	cout<<"未找到用户"<<endl;
	return false;
}
void enroll(string a,string b){
	ans++;
	p[ans].p_name=a;
	p[ans].password=b;
	return;
}
void b(){
	freopen("people.txt","w",stdout);
	cout<<ans<<endl;
	for(int i=1;i<=ans;i++){
		cout<<p[i].p_name<<endl;
		cout<<p[i].password<<endl;
	}
	freopen("CON","r",stdout);
}
#endif
