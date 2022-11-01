#include <iostream>
#include <queue>

using namespace std;

struct myStack{ //�������� ť ���� 
	queue<int> q1;
	queue<int> q2;
	
	void push(int ele){
		q1.push(ele); 
	}
	
	//������ ��Ұ� ���� ������ ���������� �ٸ� ť�� �ű�� 
	void pop(){ 
		
		while(q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		if(!q1.empty()){
			cout<<q1.front()<<endl;
			q1.pop();
		}
		
		//�������ֱ�
		queue<int> tmp = q1;
		q1 = q2;
		q2 = tmp;
	}
	
};

int main(){

	myStack q;
		
	q.push(1);
	q.push(2);
	q.push(3);
	
	q.pop(); //3
	q.pop(); //2
	q.pop(); //1
			
	return 0;
}

