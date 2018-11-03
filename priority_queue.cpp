#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

typedef struct{
	string name;
	int price;
/*	
	// friend Ϊ��Ԫ  �� bool operator < (Fruit f1,Fruit f2) �� < ����������
	//�Լ۸�ߵ�ˮ��Ϊ���ȼ��� 
	friend bool operator < (Fruit f1,Fruit f2){
		return f1.price < f2.price;  // < �ĳ�  > ��۸�͵�Ϊ���ȼ��� 
	}   */      
}Fruit;

// ����ע�͵��ⲿд�� 
struct CMP{
	//�����ݽϴ󣬽���ʹ�� ���á�&�� 
	bool operator () (Fruit f1,Fruit f2){  
		return f1.price < f2.price;
	}
}; 


int main(){
	//���ȶ��� 
	priority_queue<int> q; // int double ���ͣ����ִ�����ȼ���  
	priority_queue<char> c; // �ֵ��������ȼ��� 
	//greater<int> ��ʾ����С�����ȼ��� �� less<int> �෴ 
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
	printf("%d",q.top() ); //���� 
	if(q.empty()) printf("�ӿ�");
	else printf("\n%d",q.size()) ;
	return 0;
}
