#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	
	long long N,K; //�۾��� ���� , ������ �߻��� �ð� 
	
	cin>>N;
	vector<long long> arr(N+1);
	vector<long long> arr_(N+1); //������ 
	for(long long i=1; i<=N; i++){
		long long n;
		cin>>n;
		arr[i]=n;
		arr_[i]=n;
	}
	cin>>K; 
	
	sort(arr.begin(), arr.end());
	
	//��Ƽ�½�ŷ
	long long i = 1; //���� ���� �׽�Ʈ �ε���
	long long time_ = K; //���� �ð� 	
	long long task = arr.size()-1; //���� �۾�

	while(i<=N){ //�ѹ��� ������ 
		long long tmp = (arr[i] - arr[i-1]) * task;
		
		//��� ����
		if(time_ - tmp < 0) {
			break;
		}
		
		else {
			time_ -= tmp;
			task--;
			
			if(task<=0) {
				cout<<"-1";
				exit(0);
			}				
		}	
		i++;
	}
		
	int cnt=0;
	long long target = time_ % task; //(���)���� �ð� % ���� �۾� (�տ������� target��° �۾����� �����)***

	for(long long j=1; j<=N; j++){ //��ȸ 
		//i :���������� ���� �Ϸ��� �׽�Ʈ �ε���
		if(arr[i]<=arr_[j]){ //���� �׽�ũ�� ���� : �̹� ����� �׽�ũ���� ũ�Ⱑ ũ�ų� ���ƾ� �� 
			if(target==cnt ) {
				cout<<j;
				break;
			}
			cnt++;
		}	
	}
	
	return 0;
}
