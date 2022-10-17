#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int map[101][101];
int tmp[101][101]; //***�� ĭ������ ���� ��ȯ ��*** 

int x[] = {0,0,1,-1};
int y[] = {1,-1,0,0}; 

int N;

int main() {	
	

	int Tr, Tc;
	int Jr, Jc;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>>map[i][j];
		}
	}
	cin>>Tr>>Tc;
	cin>>Jr>>Jc;
	
	//���� ���� ���� ��ȯ ���϶� 
	queue< pair<int,int> > q;
	q.push(make_pair(Tr, Tc));
	tmp[Tr][Tc]=1; //������ �ϸ� �ؿ� BFS���� 0���� �ٲ���� �� �ٽ� �湮�ؼ� ���� �� ���� ������ �� ������  
	
	while(!q.empty()){
		int curr = q.front().first;
		int curc = q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++){
			int nextr = x[i] + curr;
			int nextc = y[i] + curc;
			
			while(1){ //���� ���ö����� ���� ���� //���� ���� �� ������ �� �� ���� 
				if(nextr<1 || nextr>N || nextc<1 || nextc>N || map[nextr][nextc]==1) break; 

				//����� ���� ����(���� �湮) 
				if(tmp[nextr][nextc] == 0){ 
				
					tmp[nextr][nextc] = tmp[curr][curc] + 1; //�� �� ���� 
					q.push(make_pair(nextr,nextc));
				}
				nextr += x[i] ; //*** (ť���� �ȳ־����� next����=> ������ �����ļ��Ȱ��� �湮 ����) 
				nextc += y[i] ;
				
			}
		} 	
	}	
	if(tmp[Jr][Jc]==0) cout<<-1;
	else cout<<tmp[Jr][Jc]-2;
	
	return 0;
}

