#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {	
	int ans =0;
	int N;
	cin>>N;
	
	vector<int> arr(N);
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());
	
	//�ع�: �Ʒ� 2���� ��� �߿� �� ���� ���� ���� 
	//[1] ���� ���� ���� 2���� �̵��ϸ�  �ű�
	//[2] ���� ���� 1���� �̵��ϸ� �ű�
	
	sort(arr.begin(), arr.end());
	int rest = arr.size();
	int p = arr.size()-1;
	while(p>=3){
		int tmp1=0;
		int tmp2=0;
		//[1]
		tmp1 = arr[1] + arr[1] + arr[p] + arr[0];  
		//[2]
		tmp2 = arr[0] + arr[0] + arr[p-1] + arr[p];
		
		ans += min(tmp1, tmp2);
		rest-=2;
		p-=2;
	}
	
	if(rest==3){
		ans+=arr[2]+arr[0]+arr[1];
	}
	else{ //rest : 2
		//�׳� Ÿ�� ����
		ans+=arr[1]; 
	} 

	cout<<ans;
	
	
	return 0;
}

