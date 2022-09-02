#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct city{ //���� ���� 
	int b,cost; //a�� b������ �����ϰ� ����� cost
	
	city(int b_, int cost_){
		b = b_;
		cost = cost_;
	}
	
	bool operator<(const city &other) const {
		return cost>other.cost; //�ּ����� ���� 
	}
};

int V, E;
priority_queue<city> pQ; //�ּ��� 
vector<city> map[26];
int ch[26]; //�湮�ߴ��� Ȯ��
int sum; //����� �� 

//���� �˰���: ������ ��忡������ ���� �ּ��� �ڽ�Ʈ�� ������ ������ ������ 
int main() {	
	
	scanf("%d %d", &V, &E);
	
	for(int i=1; i<=E; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);		
		map[a].push_back(city(b,c)); //������ �׷����̹Ƿ� �Ѵ� �־��� 
		map[b].push_back(city(a,c));
	}
	
	pQ.push(city(1,0)); //������ 
	while(!pQ.empty()){
		city tmp = pQ.top(); //***���� ��Ȳ���� ���� �ڽ�Ʈ�� ���� �ְ� ����(�ּ���) ***
		pQ.pop();
		
		int v = tmp.b;
		int cost = tmp.cost;
		
		if(ch[v]==0){ //�湮���� �ʾҴٸ�  =>
			sum+=cost; //�湮�ϱ� 
			ch[v]=1;
			//������ ��� Ž���ϱ� 
			for(int i=0; i<map[v].size(); i++){
				pQ.push(map[v][i]);		
			}
			
		}
		
	}
	
	 

	printf("%d",sum);
	return 0;
}

