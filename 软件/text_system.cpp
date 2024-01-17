#include "var.h"
using namespace std;
void text_system(){
	int n;
	string a,b;
  system("cls");
  in();
	while(true){
		cout<<"你要干什么"<<endl;
		cout<<"1.增加文件"<<endl;
		cout<<"2.删除文件"<<endl;
		cout<<"3.文件列表"<<endl;
		cout<<"4.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"文件名:";
			getline(cin,a);
			cout<<"内容:";
			getline(cin,b);
			add(a,b);
			cout<<"ok"<<endl;
		}
		else if(n==2){
			cout<<"请输入文件位置:";
			int w;
			cin>>w;
			if(w!=0){
				del(w);
			}
		}
		else if(n==3){
			for(int i=1;i<=cnt;i++){
				cout<<i<<"."<<t[i].name<<endl;
			}
			system("pause");
		}
		else if(n==4){
			out();
			system("cls");
			return;
		}
		else{
			cout<<"错误"<<endl;
		}
		sleep(1);
		system("cls");
	}	
}
