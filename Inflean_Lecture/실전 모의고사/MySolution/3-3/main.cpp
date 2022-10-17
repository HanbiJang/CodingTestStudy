#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> //****
#include <algorithm>

using namespace std; 

struct my{
	int a,b;
	char c;
	my(int a, int b, char c){
		this->a=a; //idx
		this->b=b; // 공격력 
		this->c=c; // 팀 
	}
	
	bool operator< (const my& other)const{
		return b<other.b;
	}
};

int main() {	
	ios_base::sync_with_stdio(false);
	
	int N; //학생수 
	cin>>N;
	
	vector< my > arr; //값,팀 
	arr.push_back(my(0,0,0));
	
	for(int i=1; i<=N; i++){
		int a;
		char b;
		cin>>b>>a;
		
		arr.push_back(my(i,a,b));
	}
	
	vector<int> res(N+1); //결과
	unordered_map<char, int> uM; //***해시맵*** : 각팀 공격력 누적 
	// 이전의 팀별로의 공격력이 저장되어 있음 (같은팀 공격력 제외 용도) 
	
	sort(arr.begin(), arr.end()); //오름차순 정렬 
	
	int sum = 0; //전체 합
	int j=1; //같은 공격력 가진 학생(못먹음) 처리 *** 
	
	for(int i=1; i<=N; i++){
				
		while(j<i){ //같은 공격력 가진 학생 처리 *** 
			if(arr[i].b > arr[j].b){ //먹을 수 있음 
				sum+=arr[j].b;
				uM[arr[j].c] += arr[j].b;
			}
			else{ //값이 같음 => j 증가 막음 (못먹게 함=>변화된 값 불가) 
				break;
			}

			j++;
		}
		 
		res[arr[i].a] = sum - uM[arr[i].c];
	}
	
	
	//output 
	for(int i=1; i<=N; i++){
		cout<<res[i]<<endl;
	} 	
	
	return 0;
}

