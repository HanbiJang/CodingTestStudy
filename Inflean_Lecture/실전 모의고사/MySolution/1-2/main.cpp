#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	
	int W,H,T,S; //가로, 세로, 오렌지나무개수, 영지 크기 

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
	
	//오렌지 나무의 최대 개수 구하기
	//***오렌지 나무가 있는 부분만 확인하기***
	for(int i=0; i<y.size(); i++){ //오렌지 나무 행에 대해서 반복 
		
		for(int j=0; j<x.size(); j++){ //오렌지 나무 열에 대해서 반복
			int startw = x[j];
			int starth = y[i];
			int endw = startw+S; //영지 가로 끝(열) 
			int endh = starth+S; //영지 세로 끝(행) 
			int cnt=0;
			//내부에 있는 오렌지 나무 갯수 확인하기 (범위 확인) 
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
 
