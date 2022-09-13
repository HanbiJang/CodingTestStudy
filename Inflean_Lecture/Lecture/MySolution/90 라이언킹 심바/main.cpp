#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int map[26][26], ch[26][26]; //�� ����, �湮 ���� 
int x[4] = {0,-1,0,1};
int y[4] = {-1,0,1,0};

struct target{ 
	int x,y,dis; //��ǥ ��ġ, ���� �ɹٿ��� �Ÿ� 
	target(int x_, int y_,int dis_){
		x=x_;
		y=y_;
		dis=dis_;
	}
	
	bool operator< (const target &other)const{
		if(dis!=other.dis) return dis>other.dis; //ù° ���� : �ɹٿ��� �Ÿ� 
		if(x!=other.x) return x>other.x; //��° ����: �ּ��� ���� ���� 
		return y>other.y; //��°���� : ���� ���� 
	}
};

//�켱���� ť ��� 
int main() {
	int N; //���� ũ�� 
	//===
	int time=0; //�� ī��Ʈ 
	int startx, starty; //�ɹ� ��ġ 
	int body=2; //�ɹ�ũ�� 
	int eat=0; //���� ������  
	int totalEat = 0; //�Ѹ����� 
	int rab=0; //��� �䳢�� 
	
	
	//input
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int a;
			scanf("%d",&a);	
			map[i][j] = a;
			
			if(a==9) { //�ɹ���ġ 
				startx=i;
				starty=j;
				map[i][j]=0;
			}
			else if(a!=0) { //�䳢�� 
				rab++; 
			}
		}
	} 
	
	//bfs => �䳢�� ã�Ƽ� ���̸� ���� ������ ***ť�� �ʱ�ȭ��*** 
	priority_queue< target > q;
	q.push(target(startx,starty,0)); //�ɹ��� ��ġ���� ��ŸƮ 
	
	while(!q.empty()){
		int curx = q.top().x;
		int cury = q.top().y;
		int curdist = q.top().dis;
		q.pop();
		
		//���� �䳢�� �ִ� ��� ó�� (**������ �ɹٰ� �̵�**) 
		if(map[curx][cury]<body && map[curx][cury]>0){
			
			//��ƸԱ�	
			time=curdist; 
			eat++;
			totalEat++;
			map[curx][cury]=0;
			if(eat==body){ //������� 
				body++;
				eat=0;
			}
			
			//��������: �ٸԾ ���� 
			if(totalEat==rab){
				printf("%d",time);
				exit(0);
			}
			
			//��ó�� = �ʱ�ȭ
			while(!q.empty()) q.pop();
			for(int i=1; i<=N;i++)	for(int j=1; j<=N;j++)  ch[i][j]=0;
		
		} 
		
		//(�䳢�� ã��������) ���� ��ġ Ž�� (**������ �ɹٰ� ���� �� �ƴ�**)	
		for(int i=0; i<4; i++){ //�����¿�
			int nextx = curx + x[i];
			int nexty = cury + y[i];
			
			if(nextx<1 || nextx>N || nexty<1 || nexty>N || map[nextx][nexty]>body || ch[nextx][nexty]!=0 ) continue;
			
			q.push(target(nextx, nexty, curdist+1));			
			ch[nextx][nexty]=1;
		} 
		
	}	
	
	//���� (���̻� ���� �� �ִ� �䳢�� ����) 
	printf("%d",time); 
	
	return 0;
}
