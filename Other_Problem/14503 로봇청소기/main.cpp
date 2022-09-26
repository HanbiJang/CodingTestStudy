#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[52][52]; //���� ���� 
int ch[52][52]; //û�� ���� 

//int ro[4] = {0,3,2,1};
int xx[4]={-1,0,1,0};
int yy[4]={0,1,0,-1}; //�׿����� ����

int main(){
	
	int N,M; //����ũ��, ����ũ�� 
	scanf("%d %d", &N, &M);
	int x,y,r;
	scanf("%d %d %d", &x, &y, &r);
	
	for(int i=0 ; i<N; i++){
		for(int j=0; j<M; j++){
			int c;
			scanf("%d",&c);
			map[i][j] = c;
		}
	}
	
	//�ùķ��̼�
	int cnt=0; //û���� ����
	int curro=r; //ȸ�� ����
	 
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	ch[x][y]=1;
	cnt=1;
	
	while(!q.empty()){
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		
		while(!q.empty()) q.pop(); //ť û�� 
		 
		for(int i=0; i<4; i++){ //2. ���� ���� ���� ���� ����~Ž��
			int nextro;
			nextro = curro == 0? 3 : curro-1;
			
			int nextx = curx+xx[nextro];
			int nexty = cury+yy[nextro];
					
			if(ch[nextx][nexty]==0 && map[nextx][nexty]==0){
				curro = nextro; //�� �������� ȸ��
				q.push(make_pair(nextx, nexty)); //��ĭ ����				
				ch[nextx][nexty]=++cnt; //û�� 			
				break;
			} 
			else{
				curro = nextro; //�� �������� ȸ��
				if(i!=3){				
					continue; //���� ���� Ž�� 	
				}
					
				else{ //�׹��� ��� ���� ���� 
					//��ĭ ����		
					int nextx=curx + xx[curro]*-1;
					int nexty=cury + yy[curro]*-1;		
			
					if(map[nextx][nexty]== 1){ //�׸��� 
						printf("%d", cnt);
						exit(0);
					}
					q.push(make_pair(nextx, nexty));
				}
						
			}
		}
	}
	
	
	printf("%d",cnt);
	 
	return 0;
}
