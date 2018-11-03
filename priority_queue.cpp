#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

typedef struct{
	string name;
	int price;
/*	
	// friend 为友元  ， bool operator < (Fruit f1,Fruit f2) 对 < 进行了重载
	//以价格高的水果为优先级高 
	friend bool operator < (Fruit f1,Fruit f2){
		return f1.price < f2.price;  // < 改成  > 则价格低的为优先级高 
	}   */      
}Fruit;

// 上面注释的外部写法 
struct CMP{
	//若数据较大，建议使用 引用“&” 
	bool operator () (Fruit f1,Fruit f2){  
		return f1.price < f2.price;
	}
}; 


int main(){
	//优先队列 
	priority_queue<int> q; // int double 类型，数字大的优先级高  
	priority_queue<char> c; // 字典序大的优先级高 
	//greater<int> 表示数字小的优先级大 ， less<int> 相反 
	priority_queue<int,vector<int>,greater<int>> Q; 
	priority_queue<Fruit,vector<Fruit>,CMP> F;
	Fruit f[3];
	for(int i=0;i<3;i++){
		scanf("%s%d",f[i].name.c_str() ,&f[i].price);
		F.push(f[i]); 
	} 
/*	
	printf("%s %d",F.top() .name.c_str(),F.top().price);
	return 0;   */
	
	q.push(3); 
	q.push(4); 
	q.push(1);
	q.pop() ;
	printf("%d",q.top() ); //队首 
	if(q.empty()) printf("队空");
	else printf("\n%d",q.size()) ;
	return 0;
}
