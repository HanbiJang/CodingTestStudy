#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; // 배포카운트가 들어감  	
	vector<int> cnt(progresses.size()); // 작업에 필요한 날들 
	 
    int i,j;

	
	// [1] 작업 날 계산 
    for(i=0;i< progresses.size();i++){
    	cnt[i] = ceil( ((float)(100 - progresses[i]) / speeds[i]) );
        printf("%d ", cnt[i]);
	}
	
	// [2] 배포일 계산
	int max = cnt[0];
	answer.push_back(1);
	for(j=1;j<cnt.size();j++){
				
		if( max < cnt[j] ){
			max = cnt[j];
			answer.push_back(1);					
		}
		else{
			answer[answer.size()-1]++;
		}		
	}
    
    return answer;
}
