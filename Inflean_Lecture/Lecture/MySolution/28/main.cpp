#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	int cnt = 0;	
	// ���� �ޱ�
	scanf("%d", &N);
	vector<int> prr(N+1,0);
	
	// ���μ����� 
	for(int i=2; i<=N; i++){
		int tmp = i;
		int j=2;
		while(tmp != 1){
			if(tmp%j==0){
				tmp/=j;
				prr[j]++;
			}
			else {
				j++;
			}
		}
	}

	// 2�� 5���� ����
	if(prr[2] > prr[5]) cnt = prr[5];
	else cnt = prr[2];

	
	printf("%d",cnt);
	return 0;
}

