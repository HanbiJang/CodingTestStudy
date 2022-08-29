#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> 

using namespace std;

//����ü
struct My{
	int a,b,c;
	
	//����ü ������ : ���⼭ �ʱ�ȭ 
	My(int a_,int b_,int c_){
		a=a_;
		b=b_;
		c=c_;
	}
	
	//������ �����ε� (for... Ŀ���� ����) 
	//bool operator ~ �Ʒ��� ���� ���� ������ �ٲ� �� ���� 
	//const My &n: n �ּҷ� ���� �ٲٱ� �Ұ�
	//(~) const{}: �Լ��� ����Լ��� ��=>������� ���� �Ұ� 
	// * ��쿡 ���� const�� �� ���� �������� ��� �־ ���� !! 
	bool operator<(const My &n) const{
		//n : ���ڷ� �Ѿ�� ��ü  
		if(a!=n.a) return a<n.a; //���� ���� a������ ���� 
		if(b!=n.b) return b<n.b; //a���� ������ b������ �� 
		if(c!=n.c) return c<n.c; //b�� ���� ������ c������ �� 
	}
	
	
}; 

int main() {	
	
	vector<My> v;

	//����ü �ȿ� �����ڰ� �־�� �̷��� ���� �� ���� 
	v.push_back(My(10,20,30)); 
	v.push_back(My(30,60,70)); 
	v.push_back(My(40,30,10)); 
	sort(v.begin(), v.end()); //����
	
	 
	
	return 0;
}

