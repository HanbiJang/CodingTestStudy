#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; // ����ī��Ʈ�� ��  	
	vector<int> cnt(progresses.size()); // �۾��� �ʿ��� ���� 
	 
    int i,j;

	
	// [1] �۾� �� ��� 
    for(i=0;i< progresses.size();i++){
    	cnt[i] = ceil( ((float)(100 - progresses[i]) / speeds[i]) );
        printf("%d ", cnt[i]);
	}
	
	// [2] ������ ���
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
