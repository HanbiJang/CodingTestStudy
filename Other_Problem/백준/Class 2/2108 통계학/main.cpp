#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

long long ans1;
int ans2,ans3,ans4;

int main(){
	
	int N;
	cin>>N; //1~500,000
	
	//������	
	//�߾Ӱ�	
	//�ֺ�
	//���� 
	
	vector<int> arr;
	map<int,int> m;
	
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a); //4000�� ���� �ʴ� ���� 
		
		arr.push_back(a);
		ans1 += (a);
		
		m[a]++;
	}
	//������	
	ans1 = round((double)ans1/N);
	//�߾Ӱ�		
	sort(arr.begin(),arr.end());
	ans2 = arr[N/2];
	
	//�ֺ� �� �ι�°�� ���� ��	
	int mmax=-214700000;
	for(auto i : m){
		if(i.second > mmax) {
			mmax = i.second;
			ans3=i.first;
		}  
	}
	//ù��°�� ���� ���� ����
	m[ans3]=0;
	for(auto i : m){
		if(i.second == mmax) {
			ans3=i.first;
			break;
		}  
	}
		
	//���� 	
	ans4 = abs(arr[N-1] - arr[0]);
	
	printf("%ld\n%d\n%d\n%d\n", ans1,ans2,ans3,ans4);
	
	return 0;
}

