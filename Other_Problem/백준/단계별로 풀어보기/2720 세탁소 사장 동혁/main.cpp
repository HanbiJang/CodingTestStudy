#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	//����, ����, ����, ���
	int arr[] = {25, 10, 5, 1};
	
	int T;
	cin>>T;
	
	for(int i=0; i<T; i++){
		int mo = 0;
		cin>>mo;
		
		int c = mo;
		
		int ans[] = {0,0,0,0};
		
		for(int j=0; j<4; j++){ //ū�ͺ��� ������ 
			ans[j] = (c/arr[j]);
			c%=arr[j];
		}
		
		for(int j=0; j<4; j++){
			cout<<ans[j]<<" ";
		}
		cout<<endl;
	} 
		
	return 0;
}

