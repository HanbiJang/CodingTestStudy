#include <iostream>
#include <vector>

using namespace std;

struct node{
	int a;
	int b;
	int cost;
	
	node(int a_, int b_, int cost_){
		a = a_;
		b = b_;
		cost = cost_;
	}
	
};


//���� ���� �˰��� => ��� �����鿡 ���� ���� Ƚ���� �÷����� ���� ���� ���� 
//���� ����Ŭ�� ���ٴ� ����. 1ȸ ~ n-1Ƚ�� ���� (�� �̻��� ����Ŭ ����)
 
vector<int> ch(101, 2147000000);
vector< node > map;
int main() {	
	
	int N,M;
	scanf("%d %d", &N, &M);
	map.push_back(node(0,0,0));
	for(int i=1; i<=M; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		map.push_back(node(a,b,c));
	}
	
	int start, end;
	scanf("%d %d", &start, &end);
	
	ch[start] = 0;
	
	for(int i=1; i<=N-1; i++){ //���� ���� 
		
		for(int j=1; j<=M;j++){ //***��� �����鿡 ���� ���� 
			
			int next = map[j].b;
			int nextCost = ch[map[j].a] + map[j].cost;
			if(ch[next] > nextCost){ //���� ���� 
				ch[next] = nextCost;
			} 			
		}
					
	}
	
	//����Ŭ Ȯ�� 
	//N��°�� ������ ���� ���� 
	for(int j=1; j<=M;j++){ //***��� �����鿡 ���� ���� 
		
		int next = map[j].b;
		int nextCost = ch[map[j].a] + map[j].cost;
		if(ch[next] > nextCost){ //���� ���� 
			ch[next] = nextCost;
		} 			
	}
	
	printf("%d", ch[end] );
	
	return 0;
}
