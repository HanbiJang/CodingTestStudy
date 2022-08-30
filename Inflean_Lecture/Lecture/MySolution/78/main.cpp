#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//도시 연결 정보 
struct city{
	int a,b,c;
	city(int a_,int b_, int c_){
		a=a_; //연결도시1 
		b=b_; //연결된 도시2 
		c=c_; //코스트 
	}
	bool operator<(city &other){ //cost값으로 비교 
		return c<other.c;
	}
};

int unf[26]; //유니온 파인드용 배열 

//같은 집합인지 확인 
int F(int n){
	if(unf[n]==n) return n;
	else return unf[n] = F(unf[n]);
}

void U(int a, int b){
	a = F(a);
	b = F(b);
	
	if(a<b){
		unf[a]=b;
	}
	else{
		unf[b]=a;
	}
	
}

int V,E;
vector<city> map; //전체 도시의 맵 
int sum;

int main() {	
	
	scanf("%d %d", &V, &E);

	//전체도시의 맵 & 코스트 정보 
	for(int i=0; i<E; i++){
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		map.push_back(city(a,b,c));
	}
	
	sort(map.begin(), map.end()); //코스트 값 기준 오름차순 정렬  
	
	//유니온 파인드용 배열 초기화 
	for(int i=1;i<=V;i++){
		unf[i]=i;
	}
	
	//반복문을 돌며 ((새로만들 도시)) Union 진행하기 + sum 추정 
	for(int i=0; i<E; i++){	
		int a = F(map[i].a);
		int b = F(map[i].b);		
		
		if(a!=b){
			U(map[i].a,map[i].b);
			sum+=map[i].c;
		}
				
	}
	printf("%d",sum);

	return 0;
}

