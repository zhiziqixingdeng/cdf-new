#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>
using namespace std;
struct text{
	string name;
	string text;
}t[99999];//配置时可以修改
int cnt;//有多少文件
void in(){
	freopen("text.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getline(cin,t[i].name);
		getline(cin,t[i].text);
	}
	freopen("CON","r",stdin);
	return;
}
void out(){
	freopen("text.txt","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<t[i].name<<endl;
		cout<<t[i].text<<endl;
	}
	freopen("CON","w",stdout);
}
void add(string a,string b,int x){
	cnt++;
	t[x].name=a;
	t[x].text=b;
	return;
}
void del(int x){
	if(x==cnt){
		t[x].name="";
		t[x].text="";
		cnt--;
		return;
	}
	for(int i=x;i<=cnt;i++){
		t[i].name=t[i+1].name;
		t[i].text=t[i+1].text;
	}
	cnt--;
	return;
}
#endif
