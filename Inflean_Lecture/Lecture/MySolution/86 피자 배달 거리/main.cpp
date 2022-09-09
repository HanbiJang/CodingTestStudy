#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N,M;
int ch[13]; //������ ����� üũ �迭 
vector<pair<int,int> > hs; //���� ��ġ 
vector<pair<int, int> > pz; //�������� ��ġ 
int ans=2147000000;

//�Ÿ����ϱ� 
int getDist(int x, int y, int x2, int y2){
	return abs(x-x2) + abs(y-y2);
}

void dfs(int r, int start){
	
	//ch���� M���� �����
	if(r==M){
		int sum = 0;
		
		//M�� �� �������� ������ ���� ����������� ���� ª�� �Ÿ� ���ϱ�
		//***ch���� ������***
		for(int i=0; i<hs.size(); i++){
			int min_ = 2147000000; //i��° �������� ���� ������������ �ּҰŸ� 

			for(int j=0;j<M;j++){
				int dist = getDist(pz[ch[j]].first, pz[ch[j]].second, hs[i].first, hs[i].second);
				if(dist<min_) min_ = dist;
			}
			sum += min_; //���ϱ� 
		}
		//�� M�� �� ��쿡 ���� �� ������ ���� ª�� �Ÿ����� Ȯ��
		if(ans>sum) ans = sum;
		
		return;
	}
	else{
		//start ��° ���ú��� ���� ���Ը� ���� 
		for(int i=start; i<pz.size(); i++){
			ch[r]=i; //i: ���� ���� ��ȣ  
			dfs(r+1, i+1);
		} 	
		
	}
}


int main() {
	//input 
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){//��0���� ���� 
		for(int j=0; j<N; j++){//�� 0���� ���� 
			int n;
			scanf("%d", &n);
			
			if(n==1) hs.push_back(make_pair(i,j));
			else if(n==2) pz.push_back(make_pair(i,j));
		}
	}	
	
	dfs(0,0);
	
	printf("%d",ans);
	
	return 0;
}
