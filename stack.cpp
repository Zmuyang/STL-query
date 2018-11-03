#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> st;
	for(int i=1;i<=5;i++) st.push(i);
	st.pop() ;
	if(st.empty() ) printf("Õ»¿Õ");
	else printf("%d",st.size() );
	printf("\n%d",st.top() );
	return 0; 
}
