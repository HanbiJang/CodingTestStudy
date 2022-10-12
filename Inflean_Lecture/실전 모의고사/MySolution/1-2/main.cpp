#include <iostream>
#include <vector>
#include <string>

using namespace std;

int map_[1001][1001]; 
int tmp[1001][1001]; //������ ���� ���� ǥ�ÿ� 

int main() {
	
	int W,H,T,S; //����, ����, ��������������, ���� ũ�� 
	//vector<pair<int,int> > arr; //������ ���� ��ġ 
	int max_= 0;
	
	//input
	scanf("%d %d %d %d", &W,&H,&T,&S);

	for(int i=0; i<T; i++){
		int x,y;
		scanf("%d %d", &x, &y);
		//arr.push_back(make_pair(x,y));
		map_[y][x]=1;
	}
	
	//������ ������ �ִ� ���� ���ϱ�
	//DP
	for(int i=1; i<=H; i++){
		for(int j=1; j<=W+1; j++){
			tmp[i][j] = tmp[i-1][j] + tmp[i][j-1] -tmp[i-1][j-1];
			if(map_[i][j]==1) tmp[i][j]++; 
		}
	} 	
	
	for(int i=S; i<=H; i++){
		for(int j=S; j<=W+1; j++){
			int cnt = tmp[i][j] - tmp[i][j-S] - tmp[i-S][j];
			cout<<cnt<<endl;
			if(cnt>max_) max_=cnt;	
		}		
	}	
	
		for(int i=1; i<=H; i++){
		for(int j=1; j<=W; j++){
			cout<<tmp[i][j]<<" ";
		}
		cout<<endl;
		
		}
		
	cout<<"==="<<endl;
	for(int i=1; i<=H; i++){
		for(int j=1; j<=W; j++){
			cout<<map_[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
	//output
	cout<<max_;
	

	return 0;
}

