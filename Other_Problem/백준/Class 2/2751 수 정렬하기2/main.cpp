#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
//	ios::sync_with_stdio(false); //�̷��� �ص� �ð��ʰ� �� 
//	cin.tie(NULL); 
//	cout.tie(NULL);

	vector<int> arr;
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		int a;
		//cin>>a; 
		scanf("%d",&a); //***����� �ð��� �ٿ��� ����� �ȴ� 
		
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<N; i++){
		//cout<<arr[i]<<endl;
		printf("%d\n", arr[i]);
	}

	return 0;
}

