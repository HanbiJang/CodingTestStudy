#include <iostream>
#include <map>
#include <unordered_set>

using namespace std;


int main(){
		
	int N; //상근이가 가지고 있는 숫자 카드 개수
	
	//map<int,int> mymap;
	unordered_set<int> myun;
	
	cin>>N;
	//숫자 카드에 적혀있는 정수  
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		//mymap[a]++;
		myun.insert(a);
	}
	
	int M; //상근이가 가지고있는 숫자카드인지 아닌지를 구하는 M개의 정수
	cin>>M;
	for(int i=0; i<M; i++){
		int a;
		scanf("%d",&a);
		
		//가지고 있는지 아닌지 출력하기
		int res = 0;
		//if(mymap[a]>0){
		//	res=1;
		//}
		res = myun.count(a);
		
		printf("%d ",res);
	} 

	return 0;
}

