#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node{
	int a,b,cost;
	
	node(int a_, int b_, int cost_){
		a=a_;
		b=b_;
		cost=cost_;
	}
	bool operator<(const node &other)const{ //�ּ����� ����� ���� 
		return cost>other.cost;
	}
};

vector<int> ch(21,2147000000); //�ּ� ��� üũ �迭 
vector<pair<int, int> > map[21];
//���ͽ�Ʈ�� 
int main() {	

	//input
	int N,M; 
	scanf("%d %d", &N, &M);
	for(int i=0; i<M; i++){
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		map[a].push_back(make_pair(b,c));
	}	 
	
	priority_queue<node> pQ;//(�����) �ּ��� 
	pQ.push(node(1,1,0));//1����� ���� 
	ch[1] = 0; //1�� ������ ��� = 0 
	
	while(!pQ.empty()){
		int cur  = pQ.top().b; 
		int cost = pQ.top().cost; 
		pQ.pop();
		
		for(int i=0; i<map[cur].size();i++){
			int next = map[cur][i].first;//�������� �� �� 
			int nextCost = map[cur][i].second + cost; //ch[now]; //���� �������� ��� 
			
			if(ch[next] > nextCost){ //���� �������� ��� ����� �� �۴ٸ� ���� 
				ch[next] = nextCost;
				pQ.push(node(cur,next,nextCost)); //ť�� �ְ� ������ �湮�� ���� 
			}
		} 
				
		
	}
	
	
	//output
	for(int i=2; i<=N; i++){
		printf("%d :" ,i);
		if(ch[i]<2147000000)
			printf("%d\n",ch[i]);
		else
			printf("impossible");
	}
	
	return 0;
}

