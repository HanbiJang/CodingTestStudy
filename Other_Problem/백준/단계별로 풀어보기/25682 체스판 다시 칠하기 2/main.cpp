#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int n,m,k;
	cin>>n>>m>>k;
	
	vector<vector<int> > chess(n+1, vector<int>(m+1,0));
	for(int i=1; i<=n; i++){
		string str;
		cin>>str;
		for(int j=1; j<=m; j++){
			// 'B'�� 1, 'W'�� 0���� ����
			chess[i][j] = (str[j - 1] == 'B') ? 1 : 0;
		}
	}
	
	//<ü���ǰ� ���۾��ϱ�>		
	vector<vector<int> > dp1(n+1, vector<int>(m+1,0)); //0ü���ǰ� �� 
	vector<vector<int> > dp2(n+1, vector<int>(m+1,0)); //1ü���ǰ� �� 
	
	int chess0row = 0;
	int chess1row = 1;
	
	for(int i=1; i<=n; i++){
		int chess0cur = chess0row;
		int chess1cur = chess1row;
		for(int j=1; j<=m; j++){
			
			//�� �۾�
			dp1[i][j] = chess0cur==chess[i][j]?0:1; //������ 0 
			dp2[i][j] = chess1cur==chess[i][j]?0:1;
					
			chess0cur = chess0cur==0?1:0;
			chess1cur = chess1cur==0?1:0;
		}		
		chess0row = chess0row==0?1:0;
		chess1row = chess1row==0?1:0;
	}
	
	//������ ���ϱ�
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			dp1[i][j] = dp1[i][j] + dp1[i-1][j] + dp1[i][j-1] - dp1[i-1][j-1];
			dp2[i][j] = dp2[i][j] + dp2[i-1][j] + dp2[i][j-1] - dp2[i-1][j-1];					
		}	
	}
	
	//+������ Ȱ�� : k*k ����
	int minRes = 2147000000;
	for(int i=k; i<=n; i++){
		for(int j=k; j<=m; j++){
			int chess0total = dp1[i][j] - dp1[i-k][j] - dp1[i][j-k] + dp1[i-k][j-k];
			int chess1total = dp2[i][j] - dp2[i-k][j] - dp2[i][j-k] + dp2[i-k][j-k];
			int minOne = min(chess0total, chess1total);
			if(minRes>minOne) minRes = minOne;
		}
	}	
	
	cout<<minRes;
	
	return 0;
}

