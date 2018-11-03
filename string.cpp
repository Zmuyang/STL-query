#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1="MCY";
	string str2="mcy";

//	string 类型需要用 cin 和 cout  读入和输出整个字符串 
//	如想用 printf ,则用 c_str() 
	printf("%s\n",str.c_str());  */ 
	
//	string 类型变量还可以直接比大小   
//	length()/size()    erase()  clear()
	string str3 = str1+str2;
	for(string :: iterator it=str3.begin() ;it != str3.end(); it++){
		printf("%c",*it);
	}    
	
	str1.insert(1,str2); // str1[1] 处插入 str2 
	str1.insert(str1.begin() +1,str2.begin() ,str2.end() ); // str1[1] 处插入 str2  
	str1.substr(0,5)  // 从0开始返回长度为5的字符串   */
	str1.find(str2); // 当 str2 是 tr1的子串时，返回其在str1中第一次出现的位置 
	str1.find(str2,1); // 从 str1 的 1 位置 开始匹配 str2
	str1.replace(0,5,str2); //把 str1 从 0 号位开始，长度为5 的子串替换为 str2
	str1.replace(str1.begin() ,str1.begin()+5,str2 ); //同上   
	return 0;	 
}
