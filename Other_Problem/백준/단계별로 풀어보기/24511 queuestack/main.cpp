#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
	
	//���� ���� : https://anwltjdzheldsbql.tistory.com/30
	//�ð��ʰ� ����
	 
	//�Է� 1: �ڷᱸ�� ����!! 
	int N;
	scanf("%d",&N);
	
	vector<int> qs; //�ڷᱸ�� ���� 
	deque<int> dq;
	
	//�Է� 2: ��� �ڷᱸ���� ���� �������� (push �� pop��) 
	//0 : ť, 1: ����
	//������ �۵� ��, �����ص� ��
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		
		qs.push_back(a);		
	}
	
	//�Է� 3: ����ִ� �ʱ� ���� 
	for(int i=0; i<N; i++){
		int c;
		scanf("%d",&c);
		
		if(qs[i]==0){ //ť�� �Ű澴�� 
			dq.push_back(c);	
		}
	}

	//�Է� 3: ������ ���� ����
	int X;
	scanf("%d",&X);
	
	//���� ���� 
	for(int i=0; i<X; i++){
		int b;
		scanf("%d",&b);
		
		
		if(!dq.empty()){
			printf("%d ",dq.back());
			dq.pop_back();
			dq.push_front(b);
		}
		
		else{ //���ø� �ִ� ��� 
			printf("%d ",b);
		} 
		
	}

	return 0;
}

