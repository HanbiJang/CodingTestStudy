#include <iostream>
#include <vector> 
using namespace std;

//유클리드 호제법
//a를 b로 대체하고 b를 a와b의 나머지로 대체함 
int GetAGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GetAGcd(b, a % b);
}

int main(){
	
	//모든 나무의 간격이 같도록 새로 심어야 하는 가로수의 최소수를 구하라
	//모든 나무 사이 간격들의 gcd를 구해서 [그 나눈 몫값 -1] 들의 합을 구하면 됨 
		
	int N; //이미 심어져있는 가로수의 수
	int res = 0;
	vector<int> arr; //메모리 문제 없음 128MB 제한 
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int a;
		scanf("%d", &a);
		arr.push_back(a);
	}
	
	vector<int> tmp; //간격 값 구하기 
	for(int i=0; i<arr.size()-1; i++){
		tmp.push_back(arr[i+1] - arr[i]);
	}
	
	//간격값 tmp배열의 gcd 구하기 
	int gcd = tmp[0];
	for(int i=1; i<tmp.size(); i++){
		gcd = GetAGcd(gcd, tmp[i]);
	}
	
	/* //시간초과 
	for(int i=0; i<tmp.size()-1; i++){
		for(int j=min(tmp[i], tmp[i+1]); j>=2; --j){
			if(tmp[i+1]%j==0 && tmp[i]%j==0){
				if(gcd>j) gcd = j;					
				break;
			}
		}		
	}
	*/	
	
	for(int i=0; i<tmp.size(); i++){
		res += ( (tmp[i]/gcd)==0?0:tmp[i]/gcd-1 );
		//res += ( tmp[i]/gcd-1 ); 
	}
	printf("%d", res);
	
	return 0;
}

