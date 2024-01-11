#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c;//小时，分钟，秒
int cnt;
int x,y,z;
void time(){
	cout<<"小时:";
	cin>>a;
	cout<<"分钟:";
	cin>>b;
	cout<<"秒:";
	cin>>c;
	cnt=a*3600+b*60+c;
	system("cls");
	while(x*3600+y*60+z<cnt){
		cout<<x<<":"<<y<<":"<<z<<endl;
		sleep(1);
		system("cls");
		z++;
		if(z==60){
			z=0;
			y++;
		}
		if(y==60){
			y=0;
			x++;
		}
	}
	cout<<"时间到"<<endl;
	return;
}
