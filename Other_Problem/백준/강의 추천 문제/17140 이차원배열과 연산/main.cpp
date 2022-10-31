#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct num{
	int a,b; //값, 횟수 
	num(){
		a=0;
		b=0;
	}
	num(int a, int b){
		this->a = a; 
		this->b = b;
	}
	
	bool operator<(const num& other)const{
		if(b!=other.b) return b<other.b; //횟수 비교 
		else return a<other.a; //값 비교 
	}
};


vector<vector<int> > arr(101, vector<int>(101,0)); //2차원 벡터 [101][101]

int currow=3; //현재 행수 
int curcul=3; //현재 열수  

int cnt=0;


void R(){ //arr의 행에 대해 연산 
	int maxsize = -2147000000;

	for (int i = 1; i <= currow; i++) {
		vector<num> tmp; //정렬용 임시 배열 tmp 
		map<int,int> m;
		map<int, int>::iterator iter;
		
		//어떤 수가 몇 번 쓰였는지 카운트
		for(int j=1; j<= curcul; j++){
			if(arr[i][j]==0) continue; //0 무시 
			else m[arr[i][j]]++;
		} 
 		//각 숫자의 횟수대로 소트
		for(iter = m.begin(); iter != m.end(); iter++) {
			tmp.push_back(num(iter->first, iter->second)); //값, 횟수		
		}
		sort(tmp.begin(), tmp.end());

		//횟수도 끼워 넣은 결과를 만들기 		
		vector<int> tmp2;		
		for(int j = 0; j < tmp.size(); j++) {
			tmp2.push_back(tmp[j].a); //값 
			tmp2.push_back(tmp[j].b); //횟수 
		}
		
		//**원 배열 arr에 tmp2를 (복사)하기**
		//0으로 초기화
		for(int j=1; j<=curcul; j++){
			arr[i][j]=0;
		} 
		for(int j = 0; j<tmp2.size(); j++) {		
			arr[i][j+1] = tmp2[j]; //복사
		}
		
		//currow 와 curcul의 크기 판단 
		if(maxsize < (int)tmp2.size()){
			maxsize = tmp2.size();
		}		
	}
	
	//행 정렬-> 열 갯수 변화 
	curcul = maxsize;
}

void C(){ //arr의 열에 대해 연산
	int maxsize = -2147000000;

	for (int i = 1; i <= curcul; i++) {
		vector<num> tmp; //정렬용 임시 배열 tmp 
		map<int,int> m;
		map<int, int>::iterator iter;
		
		//어떤 수가 몇 번 쓰였는지 카운트
		for(int j=1; j<= currow; j++){
			if(arr[j][i]==0) continue; //0 무시 
			else m[arr[j][i]]++;
		} 
 		//각 숫자의 횟수대로 소트
		for(iter = m.begin(); iter != m.end(); iter++) {
			tmp.push_back(num(iter->first, iter->second)); //값, 횟수		
		}
		sort(tmp.begin(), tmp.end());

		//횟수도 끼워 넣은 결과를 만들기 		
		vector<int> tmp2;		
		for(int j = 0; j < tmp.size(); j++) {
			tmp2.push_back(tmp[j].a); //값 
			tmp2.push_back(tmp[j].b); //횟수 
		}
		
		//**원 배열 arr에 tmp2를 (복사)하기**
		//0으로 초기화
		for(int j=1; j<=currow; j++){
			arr[j][i]=0;
		} 
		for(int j = 0; j<tmp2.size(); j++) {
			arr[j+1][i] = tmp2[j]; //복사
		}
		
		//currow 와 curcul의 크기 판단 
		if(maxsize < (int)tmp2.size()){
			maxsize = tmp2.size();
		}		
	}
	
	//열 정렬-> 행 갯수 변화 
	currow = maxsize;
}

int main(){

	int r,c,k;
	scanf("%d %d %d", &r, &c, &k);
	
	//input
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			int a;
			scanf("%d", &a);
			arr[i][j] = a;
		}
	}
	while(cnt<=100){
		if(arr[r][c]==k){
			printf("%d",cnt);
			exit(0);
		}
		//정렬 (시뮬레이션)
		if(currow>=curcul){
			R(); //R연산 
		}	
		else C(); //C연산 
		cnt++;
	}
	printf("-1");

	return 0;
}

