#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	//https://velog.io/@emplam27/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%B7%B8%EB%A6%BC%EC%9C%BC%EB%A1%9C-%EC%95%8C%EC%95%84%EB%B3%B4%EB%8A%94-LCS-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Longest-Common-Substring%EC%99%80-Longest-Common-Subsequence
	//LCS ( 최장 공통 부분 수열 ) 의 길이를 출력하라
	string str1, str2;
	cin>>str1>>str2;
	
	//0번째 인덱스를 0으로 채움
	vector<vector<int> > dp(str1.length()+1,vector<int>(str2.length()+1,0));
	int res_max = 0;
	for(int i=1; i<=str1.length(); i++){
		for(int j=1; j<=str2.length(); j++){
				
			if(str1[i-1]==str2[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
				if(res_max<dp[i][j]) res_max = dp[i][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}
	
	cout<<res_max;
	
	return 0;
}

