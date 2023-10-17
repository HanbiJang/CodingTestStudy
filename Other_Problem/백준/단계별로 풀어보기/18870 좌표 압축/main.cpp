#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	//��ǥ ���� : 
	//������ ���� N���� ��ǥ X1~Xn�鿡 ���ؼ� 
	//��ǥ ������ ����� X1~Xn�� ���ؼ� > Xj�� �����ϴ� Xj�� ����
	
	//��, ���� �迭 arr �ȿ��� Xi���� ���� ���� ������ ���ϸ� �� 
	 
	int N;
	vector<int> arr;
	
	cin>>N;
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		arr.push_back(a); //X1~Xn
	}
	
	//�ߺ����� ���ĵ� 
	vector<int> arr2 = arr;
	sort(arr2.begin(), arr2.end());
	arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());
	
	for(int i=0; i<N; i++){
		//auto iter = find(arr2.begin(),arr2.end(),arr[i]);
		//find �Լ� - ��� ��ҿ� �����Ͽ� O(n)
		//lower_bound �Լ� - Ư�� Ÿ�ٰ� �̻��� ���� �ε����� ã���� - ����Ž���Ͽ� O(log n)
		//��� : �� ���� lower_bound �Լ��� ��� �� 
		
		printf("%d ",lower_bound(arr2.begin(), arr2.end(), arr[i]) - arr2.begin() );
		
		//���� ���
		//printf("%d ", iter - arr2.begin()); //���� �迭�̶� iterator���� ��Ģ���� ���� ***
	}
	
	return 0;
}

