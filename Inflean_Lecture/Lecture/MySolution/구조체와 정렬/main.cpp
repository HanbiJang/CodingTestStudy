#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> 

using namespace std;

//구조체
struct My{
	int a,b,c;
	
	//구조체 생성자 : 여기서 초기화 
	My(int a_,int b_,int c_){
		a=a_;
		b=b_;
		c=c_;
	}
	
	//연산자 오버로드 (for... 커스텀 정렬) 
	//bool operator ~ 아래와 같이 정렬 기준을 바꿀 때 쓰임 
	//const My &n: n 주소로 원본 바꾸기 불가
	//(~) const{}: 함수가 상수함수가 됨=>멤버변수 변경 불가 
	// * 경우에 따라서 const를 안 쓰면 오류나는 경우 있어서 주의 !! 
	bool operator<(const My &n) const{
		//n : 인자로 넘어온 객체  
		if(a!=n.a) return a<n.a; //가장 먼저 a값으로 정렬 
		if(b!=n.b) return b<n.b; //a값이 같으면 b값으로 비교 
		if(c!=n.c) return c<n.c; //b값 마저 같으면 c값으로 비교 
	}
	
	
}; 

int main() {	
	
	vector<My> v;

	//구조체 안에 생성자가 있어야 이렇게 넣을 수 있음 
	v.push_back(My(10,20,30)); 
	v.push_back(My(30,60,70)); 
	v.push_back(My(40,30,10)); 
	sort(v.begin(), v.end()); //정렬
	
	 
	
	return 0;
}

