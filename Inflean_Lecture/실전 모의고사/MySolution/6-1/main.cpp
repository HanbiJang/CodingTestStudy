#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int main() {
	char map[101][101];
	int R,C;
	cin>>R>>C;
	
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			cin>>map[i][j];
		}
	}
	
	//queue<pair<int,int> > q;
	int cnt=0;
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			if(map[i][j]=='#'){
				map[i][j]='.';
				//q.push(make_pair(i,j));
				
				for(int k=0; k<4; k++){
					int nextr = i+x[k];
					int nextc = j+y[k]; 
					
					if(nextr<1||nextc<1||nextr>R||nextc>C) continue;
					
					if(map[nextr][nextc]=='#'){
						map[nextr][nextc] = '.';
						//cout<<nextr<<" "<<nextc<<endl;
						break;
					}				
				}
				cnt++;
				
//				{
//					cout<<endl;
//					for(int i=1; i<=R; i++){
//					for(int j=1; j<=C; j++){
//						cout<<map[i][j]<<" ";
//				}
//				cout<<endl;
//				}
//				}
			}
		}
	}
	
	cout<<cnt;
	
	return 0;
}

