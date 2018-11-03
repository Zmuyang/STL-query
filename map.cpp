#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
	map<string,int> mp1; // 键的类型  值的类型
	map<set<int>,string> mp2;
	mp1["mcy"] = 30;
	mp1["MCY"] = 15;
/*	
	for(map<string,int>::iterator it=mp1.begin() ;it!=mp1.end() ;it++) {
		cout << it->first << " " << it->second << endl;
	}    */
//	printf("%d",mp1["mcy"]);
/*
	map<string,int>::iterator it = mp1.find("MCY");
	cout << it->first << " " << it->second << endl;  
	mp1.erase(it);
	mp1.erase("MCY");   */
	mp1.size() ;
	mp1.clear() ;
	return 0;
}
