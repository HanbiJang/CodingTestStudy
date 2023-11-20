#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main(){
	
	int N;
	cin>>N;
	
	queue<pair<int,int>> q; //�ε���, ǳ������ 
	
	for(int i=1; i<=N; i++){
		int a;
		cin>>a;
		q.push(make_pair(i,a));
	}
	
	while(!q.empty()){
		pair<int,int> nextThing = q.front();
		q.pop(); //ǳ�� ���� 
		cout<<nextThing.first<<" ";
		
		if(q.empty()) break;
		
		int nextNum = nextThing.second;
				
		if(nextNum>=0){ //����� ��
			nextNum = (nextNum)%q.size()==0? nextNum: (nextNum)%q.size();
			//�����, 0�� ������ ��, �ٷ� ���� ���� �ƴ϶� 1ĭ ���� ����
			//�׷��Ƿ� nextNum�� �������� ���ƾ� ��		
			
			for(int i=0; i<nextNum-1; i++){ //�������� �����ִ� �۾� 
				q.push(q.front()); //���� 
				q.pop(); 
			}
		}
		else{ //������ ��
			nextNum = (nextNum*-1)%q.size();
			
			//������, 0�� ������ ��, �ٷ� ���� ���� 
			//�׷��Ƿ� 0�� �������� ���ƾ� ��
			
			nextNum = (q.size()+1)- nextNum;
			for(int i=0; i<nextNum-1; i++){ //�������� �����ִ� �۾� 
				q.push(q.front()); //���� 
				q.pop(); 
			}
		}
	}			
	return 0;
}

