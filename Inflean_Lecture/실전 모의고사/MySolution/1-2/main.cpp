#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	
	int W,H,T,S; //����, ����, ��������������, ���� ũ�� 

	vector<int> x;
	vector<int> y;
	
	int max_= 0;
	
	//input
	scanf("%d %d %d %d", &W,&H,&T,&S);

	for(int i=0; i<T; i++){
		int xx,yy;
		scanf("%d %d", &xx, &yy);
		x.push_back(xx);
		y.push_back(yy);
	}
	
	//������ ������ �ִ� ���� ���ϱ�
	//***������ ������ �ִ� �κи� Ȯ���ϱ�***
	for(int i=0; i<y.size(); i++){ //������ ���� �࿡ ���ؼ� �ݺ� 
		
		for(int j=0; j<x.size(); j++){ //������ ���� ���� ���ؼ� �ݺ�
			int startw = x[j];
			int starth = y[i];
			int endw = startw+S; //���� ���� ��(��) 
			int endh = starth+S; //���� ���� ��(��) 
			int cnt=0;
			//���ο� �ִ� ������ ���� ���� Ȯ���ϱ� (���� Ȯ��) 
			for(int k=0; k<x.size(); k++){
				if(x[k]<=endw && x[k]>=startw && y[k]<=endh && y[k]>=starth){
					cnt++;
				}
				if(max_ < cnt) max_ = cnt;
			} 
			
		}
				
	}

	//output
	cout<<max_;
	

	return 0;
}
 
