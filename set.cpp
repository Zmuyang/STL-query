#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> x; // ʹ�õ������������� *��it+i���ķ�ʽ���� 
	x.insert(1); //����1 
	x.find(1); // ����ֵΪ1�ĵ�����
	x.erase(x.find(1)); // ɾ��ֵΪ1�ĵ�����
	x.erase(1); //ɾ��ֵΪ1��Ԫ��   
	x.size() ; 
	x.clear() 
	return 0;
}
