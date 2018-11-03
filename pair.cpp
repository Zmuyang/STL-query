#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(){
	pair<string,int> p; 
	pair<string,int> q("Mcy",3); //初始化
	p.first = "mcy";
	p.second = 5;
	cout << p.first << " " << p.second << endl;
	pair<int,int> x(5,10);
	pair<int,int> y(5,15);
	pair<int,int> z(10,15);
	//先比较 first ，first相等再比较 second 
	if(x<y) cout << "x<y" << endl;
	if(x<z) cout << "x<z" << endl;
/*	
	x=make_pair(3,"Mcy");
	cout << x.first << " " << x.second << endl;
	y = pair<char,int>('M',1);
	cout << y.first << " " << y.second << endl;   */
	return 0; 
}
