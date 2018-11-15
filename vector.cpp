#include <iostream>
#include <vector>  
using namespace std;

int main(){
	//vector 可以用来定义长度可变的数组，也可以用来以邻接表的方式存储图 
	vector<int> n; // 定义了一个 int 类型的一维数组
	vector<int> a(10,1); //定义了10个整型元素的变量，且初值为1 
	vector<vector<int> > N; //定义了二维数组  > > 之间需要保留一个空格 
	for(int i=0;i<5;i++) n.push_back(i);  // n.pop_back() 删除尾元素  
	vector<int>::iterator it=n.begin(); //迭代器 
	printf("%d %d",*(it+1),n[0]); */
	
	for(vector<int>::iterator it=n.begin();it != n.end();it++) printf("%d ",*it); // 遍历操作  
	
	n.clear() ;  //清空
	n.insert(n.begin() +2,7); //在n[2]处插入一个7  	
	n.erase(n.begin() +3);   //删除 n[3]处的元素
	n.erase(n.begin() +1,n.begin() +3); //删除 v[1],v[2];   
	printf("%d\n",n.size() );  // 获取元素个数 
	return 0; 
}
