#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	vector<pair<int,int> > arr; //�� ���� (�Ϲ�ȣa ,�Ϲ�ȣb) 
	queue<int> q;
	
	int N,M;
	
	//input 
	scanf("%d %d", &N, &M);
	
	vector<int> degree(N+1); //������ ó������� �ϴ� �ϵ��� ���� ���� �迭: �и��� 0����(������) 
	
	for(int i=1; i<=M; i++){ //�� ����  
		int a,b;
		scanf("%d %d",&a, &b);
		
		degree[b]++;
		arr.push_back(make_pair(a,b));
	}
	
	//start
	for(int i=1; i<=N; i++){
		if(degree[i]==0) q.push(i); //������ (���� 0 ��) �Ϲ�ȣ�� �־��� 
	}
	
	while(!q.empty()){
		int tmp = q.front(); //ó���� �� ��ȣ 
		printf("%d ",tmp); //���� ó�� 
		q.pop();
		
		for(int i=0; i<arr.size(); i++){ //�� ���� ���� ��ȸ 
			if(arr[i].first==tmp && degree[arr[i].second]>0){ 
				degree[arr[i].second]--; //���� ���� �������϶�, ������ ����� �ϴ� �Ϲ�ȣ�� degree 1 ����(������ ������ϴ� �ϼ�degree) 
				if(degree[arr[i].second]==0) q.push(arr[i].second); //������ ó���ؾ��� �� ���� 0�̸� ť�� �ֱ� 
			}
		}					
	}	
	
    return 0;
}
