#include <iostream>
#include <vector>  
using namespace std;

int main(){
	//vector �����������峤�ȿɱ�����飬Ҳ�����������ڽӱ�ķ�ʽ�洢ͼ 
	vector<int> n; // ������һ�� int ���͵�һά����
	vector<int> a(10,1); //������10������Ԫ�صı������ҳ�ֵΪ1 
	vector<vector<int> > N; //�����˶�ά����  > > ֮����Ҫ����һ���ո� 
	for(int i=0;i<5;i++) n.push_back(i);  // n.pop_back() ɾ��βԪ��  
	vector<int>::iterator it=n.begin(); //������ 
	printf("%d %d",*(it+1),n[0]); */
	
	for(vector<int>::iterator it=n.begin();it != n.end();it++) printf("%d ",*it); // ��������  
	
	n.clear() ;  //���
	n.insert(n.begin() +2,7); //��n[2]������һ��7  	
	n.erase(n.begin() +3);   //ɾ�� n[3]����Ԫ��
	n.erase(n.begin() +1,n.begin() +3); //ɾ�� v[1],v[2];   
	printf("%d\n",n.size() );  // ��ȡԪ�ظ��� 
	return 0; 
}
