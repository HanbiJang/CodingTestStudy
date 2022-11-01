#include <iostream>
#include <stack>

using namespace std;

struct myQueue{ //�������� ť ���� 
	stack<int> instack;
	stack<int> outstack;
	
	void push(int ele){
		instack.push(ele);
	}
	
	void pop(){
		//instack�� �ִ� ���빰�� outstack���� ��� �Űܼ� ����� 
		while(!instack.empty()){
			outstack.push(instack.top());
			instack.pop();
		}
	
		cout<<outstack.top()<<endl;
		outstack.pop();
	}
	
};

int main(){

	myQueue q;
		
	q.push(1);
	q.push(2);
	q.push(3);
	
	q.pop(); //1
	q.pop(); //2
	q.pop(); //3
			
	return 0;
}

