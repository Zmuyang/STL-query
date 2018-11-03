#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> x; // 使用迭代器，不能用 *（it+i）的方式访问 
	x.insert(1); //插入1 
	x.find(1); // 返回值为1的迭代器
	x.erase(x.find(1)); // 删除值为1的迭代器
	x.erase(1); //删除值为1的元素   
	x.size() ; 
	x.clear() 
	return 0;
}
