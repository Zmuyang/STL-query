#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q;
	for(int i=1;i<=5;i++) q.push(i);
	q.pop(); //������ 
	printf("%d %d",q.front() ,q.back() ); //���� ��β 
	if(q.empty() )  printf("�ӿ�");
	else printf("\n%d",q.size() );
	return 0;  
}
