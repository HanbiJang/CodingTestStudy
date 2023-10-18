#include <iostream>
#include <map>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	//두 집합의 대칭 차집합의 원소의 개수를 출력하라
	//(A-B)와 (B-A)의 합집합을 A와 B의 대칭 차집합이라고 한다
	
	int a;
	int b;

	map<int,int> ma, mb;
	 
	cin>>a;
	cin>>b;
	
	for(int i=0; i<a; i++){
		int aa;
		cin>>aa;

		ma[aa]++; //갯수 증가 
	} 
	
	for(int i=0; i<b; i++){
		int aa;
		cin>>aa;

		mb[aa]++;
	} 
	
	int cnt = a+b;
	
	//교집합 구하기	 
	for(auto iter = ma.begin(); iter!= ma.end(); ++iter){
		if(mb[iter->first]>0){ //교집합이면, 
			cnt-= (mb[iter->first] + iter->second); //갯수만큼 감소 
		}	
	}
	
	cout<<cnt;
	

	return 0;
}

