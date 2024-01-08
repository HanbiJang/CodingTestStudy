#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int n; //���� ��
	cin>>n;
	
	vector<vector<int> > arr;
	arr.push_back({0,0,0});
	for(int i=0; i<n; i++){

		/*  <�� ���� �����ķ� ĥ�ϴ� ���>
		a : �������� ĥ�� ���� ���
		b : �ʷ����� ĥ�� ���� ��� 
		c : �Ķ����� ĥ�� ���� ��� 
		*/
		int a,b,c; 	 
		cin>>a>>b>>c; //1000���� �ڿ��� 
		
		arr.push_back({a,b,c});
	}
	
	int minAns = 0;
	for(int i=1; i<=n; i++){	//�� 
		for(int j=0; j<3; j++){	//��
			int minOne = 2147000000;
			for(int k=0; k<3; k++){ //���� ��� �� 
				//���� ��(���� ���̸� �ȵ�)�� ���Ͽ� ���� ������� ������	
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

