#include <iostream>
#include <cstdlib>
using namespace std;
string str;
int n,m;
int user;
char world[1000][1000];
void cd(){
	freopen("draw.txt","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>world[i][j];
		}
	}
	freopen("CON","r",stdin);
}
void d(){
	int a,b;
	char x;
	cin>>a>>b>>x;
	if(a>n||a<=0||b>n||b<=0){
		cout<<"错误"<<endl; 
	}
	else{
		world[a][b]=x; 
	}
	return;
}
void h(){
	int x,y,cnt;
	char f;
	cin>>x>>y>>cnt>>f;
	for(int i=1;i<=cnt;i++){
		world[x+i-1][y]=f;
	}
	return;
}
void l(){
	int x,y,cnt;
	char f;
	cin>>x>>y>>cnt>>f;
	for(int i=1;i<=cnt;i++){
		world[x][y+i-1];
	}
	return;
}
void till(int x,int y,char f){
	if(x>=1&&x<=n&&y>=1&&y<=m&&world[x][y]==' '){
		world[x][y]=f;
	  till(x+1,y,f);
		till(x-1,y,f);
		till(x,y-1,f);
		till(x,y+1,f);
	}
	return;
}
void t(){
	int x,y;
	char f;
	cin>>x>>y>>f;
	till(x,y,f);
}
void clear(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=a;i<=c;i++){
		for(int j=b;j<=d;j++){
			world[i][j]=' ';
		}
	}
	return;
}
int main(){
	cout<<"是否读取上次画作"<<endl<<"1.是"<<endl<<"2.否"<<endl;
	cin>>user;
	if(user==1){
		cd();
	}
	else{
		cin>>n>>m;
	}
	while(true){
		system("cls");
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
			  cout<<world[i][j];
			}
			cout<<endl;
		}
		cin>>str;
		if(str=="/end"){
			break;
		}
		else if(str=="/d"){
			cin.ignore();
			d();
		}
		else if(str=="/h"){
			cin.ignore();
			h();
		}
		else if(str=="/l"){
			cin.ignore();
			l();			
		}
		else if(str=="/till"){
			cin.ignore();
			t();
		}
		else if(str=="/clear"){
			cin.ignore();
			clear();
		}
	}
	freopen("draw.txt","r",stdin);
	cout<<n<<" "<<m<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<world[i][j];
		}
		cout<<endl;
	}
	freopen("CON","r",stdin);
}
