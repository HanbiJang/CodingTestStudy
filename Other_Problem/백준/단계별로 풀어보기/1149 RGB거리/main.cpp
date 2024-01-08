#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int n; //집의 수
	cin>>n;
	
	vector<vector<int> > arr;
	arr.push_back({0,0,0});
	for(int i=0; i<n; i++){

		/*  <각 집을 빨초파로 칠하는 비용>
		a : 빨강으로 칠할 때의 비용
		b : 초록으로 칠할 때의 비용 
		c : 파랑으로 칠할 때의 비용 
		*/
		int a,b,c; 	 
		cin>>a>>b>>c; //1000이하 자연수 
		
		arr.push_back({a,b,c});
	}
	
	int minAns = 0;
	for(int i=1; i<=n; i++){	//행 
		for(int j=0; j<3; j++){	//열
			int minOne = 2147000000;
			for(int k=0; k<3; k++){ //이전 행과 비교 
				//전의 행(같은 열이면 안됨)과 비교하여 작은 비용합을 누적함	
				if(k==j) continue;
				minOne = min(minOne, arr[i-1][k]);
			}
			arr[i][j] += minOne;
			//cout<<arr[i][j]<<" ";	
		}	
		//cout<<endl;
	}
	
	minAns = *min_element(arr[n].begin(), arr[n].end());
	cout<<minAns;
	
	return 0;
}

