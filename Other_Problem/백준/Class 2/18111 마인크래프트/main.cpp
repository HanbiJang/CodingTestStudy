#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[501][501];
int N,M,B; //����,����,�������� 

pair<bool,int> count(int mid){ //���� ���� 
 	bool res = true;
	int cnt1 = 0;
	int cnt2 = 0;
	int item = B; //�������ִ� �� �� 
	
	//�� �̱� 
	for(int i=1; i<=N; i++){	
		for(int j=1; j<=M; j++){
			if(map[i][j]>mid){
				item += map[i][j]-mid;
				cnt1 += 2*(map[i][j]-mid);
			}
		}
	}
	
	//�� �Ųٱ�
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			
			if(map[i][j]<mid){ //�Ųٱ�
				if(item>= mid-map[i][j]){ //������ �� 
					item -= mid-map[i][j];
					cnt2 += mid-map[i][j];
				}
				else{ //������ ���� 
					res = false;
					break; 
				}
			}
		}
		
		if(!res) break;
		
	}
	//���ɿ��� & �ּ� �ð� 	
	return make_pair(res ,cnt1 + cnt2);
}

int main(){
	
	cin>>N>>M>>B;
	int mmax=0;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			int a;
			cin>>a;	 //���� 
			map[i][j] = a;
			
			if(mmax<a) mmax=a;
		}
	}
	
	//������ �ּ� �ð� + �� ����� ���� ������ �ִ밪
	
	int ans=0; //���� ���� 
	int mintime = 2147000000; //�ּ� �ð�
	
	for(int i=0; i<=mmax; i++){ //���� ��
		
		pair<bool,int> cnt = count(i); //���� ���� & �ð� ��� 
		
		if(cnt.first && mintime >= cnt.second) { //���߿��� �ּ� �ð� ���ϱ� 
			mintime = cnt.second;
			ans = i;
		}
	}
	
	cout<<mintime<<" "<<ans;
	
	return 0;
}

