#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1="MCY";
	string str2="mcy";

//	string ������Ҫ�� cin �� cout  �������������ַ��� 
//	������ printf ,���� c_str() 
	printf("%s\n",str.c_str());  */ 
	
//	string ���ͱ���������ֱ�ӱȴ�С   
//	length()/size()    erase()  clear()
	string str3 = str1+str2;
	for(string :: iterator it=str3.begin() ;it != str3.end(); it++){
		printf("%c",*it);
	}    
	
	str1.insert(1,str2); // str1[1] ������ str2 
	str1.insert(str1.begin() +1,str2.begin() ,str2.end() ); // str1[1] ������ str2  
	str1.substr(0,5)  // ��0��ʼ���س���Ϊ5���ַ���   */
	str1.find(str2); // �� str2 �� tr1���Ӵ�ʱ����������str1�е�һ�γ��ֵ�λ�� 
	str1.find(str2,1); // �� str1 �� 1 λ�� ��ʼƥ�� str2
	str1.replace(0,5,str2); //�� str1 �� 0 ��λ��ʼ������Ϊ5 ���Ӵ��滻Ϊ str2
	str1.replace(str1.begin() ,str1.begin()+5,str2 ); //ͬ��   
	return 0;	 
}
