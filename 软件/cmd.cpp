#include "var.h"
using namespace std;
string str;
int a,b;
void zcmd(){
	system("cls");
	cout<<"由zhizi开发，版权所有:zhizi"<<endl;
	while(true){
		cin>>str;
		if(str=="/start"){
			cin>>a;
			system("cls");
			cout<<t[a].name<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<t[a].text<<endl;
			system("pause");
			system("cls");
		}
		else if(str=="/break"){
			break;
		}
		else if(str=="/r"){
			cout<<rand()<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
	}
	return;
}
