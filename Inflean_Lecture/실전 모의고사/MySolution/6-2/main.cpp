#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> 

using namespace std;

int main() {
	int N;
	int ans=0;
	cin>>N;
	vector<int> v1(N+1);
	vector<int> v2(N+1);
	vector<int> v3(N+1);
	
	for(int i=1; i<=N; i++){
		cin>>v1[i];
	}
	for(int i=1; i<=N; i++){
		cin>>v2[i];
	}
	for(int i=1; i<=N; i++){
		cin>>v3[i];
	}
	
	//공통 원소 중 가장 큰 값을 출력 
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	
	int lt1 = v1[1], rt1 = v1[N];
	int lt2 = v2[1], rt2 = v2[N];
	int lt3 = v3[1], rt3 = v3[N];
	
	int lt = max(lt1,lt2);
	lt = max(lt,lt3);
	int rt = min(rt1,rt2);
	rt = min(rt,rt3);
	
	int p1 = 1;
	int p2 = N;
	while(lt < v1[p1]){
		p1++;
	}
	while(rt > v1[p2]){
		p2--;
	}
	

	for(int i=p2; i>=p1; i--){
		if( find(v2.begin(), v2.end(),v1[i]) != v2.end() && find(v3.begin(), v3.end(),v1[i]) != v3.end() )
		{
			//cout<<v1[i]<< " / "<<i;
			ans=v1[i];
			break;
		}
	}
	
	//output
	if(ans==0){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
	
	return 0;
}

