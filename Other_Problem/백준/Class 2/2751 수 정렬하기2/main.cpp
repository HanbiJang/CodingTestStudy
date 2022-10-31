#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
//	ios::sync_with_stdio(false); //이렇게 해도 시간초과 남 
//	cin.tie(NULL); 
//	cout.tie(NULL);

	vector<int> arr;
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		int a;
		//cin>>a; 
		scanf("%d",&a); //***입출력 시간을 줄여야 통과가 된다 
		
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<N; i++){
		//cout<<arr[i]<<endl;
		printf("%d\n", arr[i]);
	}

	return 0;
}

