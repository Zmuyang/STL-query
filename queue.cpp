#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q;
	for(int i=1;i<=5;i++) q.push(i);
	q.pop(); //出队首 
	printf("%d %d",q.front() ,q.back() ); //队首 队尾 
	if(q.empty() )  printf("队空");
	else printf("\n%d",q.size() );
	return 0;  
}
