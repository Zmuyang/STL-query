#include <iostream>
#include <algorithm>
using namespace std;

int Cmp(int a,int b);
int main(){
	int x=2,y=1;
	cout << max(x,y) << " " << min(x,y) << endl;
	swap(x,y);
	cout << x << " " << y << endl;
	int a[]={5,4,3,2,1};
	for(int i=0;i<5;i++) cout << a[i] << " " ;
	cout << endl;
	reverse(a,a+5);
	sort(a,a+5,Cmp); // ���� 
	for(int i=0;i<5;i++) cout << a[i] << " ";
	cout << endl;
	int arr[]={1,2,3};
	// sort������Ҳ���Խ������� 
	vector<int> V;
	for(int i=10;i>=0;i--) V.push_back(i);
	for(int i=0;i<=10;i++) cout << V[i] << " ";
	cout << endl;
	sort(V.begin() ,V.end() );  
	for(int i=0;i<=10;i++) cout << V[i] << " ";
	cout << endl;

/*	���������⸳ֵ 
	fill(arr,arr+2,4); 
	for(int i=0;i<3;i++) cout << arr[i] << " ";
	cout << endl;        */
/*	
	do{
		cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	}while(next_permutation(arr,arr+3)); // ȫ����  */
	
	int num[]={1,2,2,3,3,3,5,5,5,5};
	int *LowerPos= lower_bound(num,num+10,1); //�������������ڵ�һ��ֵ���ڵ��� 1 ��Ԫ�ص�λ�� 
	int *UpperPos= upper_bound(num,num+10,1); //�������������ڵ�һ��ֵ���� 1 ��Ԫ�ص�λ��
	cout << LowerPos - num << " " << UpperPos - num << endl;
	return 0;
}

int Cmp(int a,int b){
	return a>b;
}
