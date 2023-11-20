#include <iostream>
//#include <vector> //***vector�� ���� erase, insert�Լ����� �ð��ʰ��� ����. 
#include <deque>

using namespace std;

//vector<int> deck;
deque<int> deck;

void Func1(int x){ //���� X�� ���� �տ� �ִ´� 
	//deck.insert(deck.begin(), x);
	deck.push_front(x);
}

void Func2(int x){ //���� X�� ���� �ڿ� �ִ´�
	deck.push_back(x);
}

void Func3(){ //�� ���� ������ ����(=�����ϰ�) ����Ѵ�.
	if(deck.size()>0){
		printf("%d\n",deck.front());
		//deck.erase(deck.begin());
		deck.pop_front();
	}
	else{
		printf("-1\n");
	}
}

void Func4(){ //�� ���� ������ ����(=�����ϰ�) ����Ѵ�
	if(deck.size()>0){
		printf("%d\n",deck.back());
		deck.pop_back();
	}
	else{
		printf("-1\n");
	}
}

void Func5(){
	printf("%d\n",deck.size());
}

void Func6(){
	if(deck.size()>0){
		printf("0\n");
	}
	else{
		printf("1\n");
	}	
}

void Func7(){
	if(deck.size()>0){
		printf("%d\n",deck[0]);
	}
	else{
		printf("-1\n");
	}
}

void Func8(){
	if(deck.size()>0){
		printf("%d\n",deck[deck.size()-1]);
	}
	else{
		printf("-1\n");
	}
}

int main(){
	
	//���� �����϶�
	//����� �� N
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		int a;
		int x;
		scanf("%d",&a);
		
		switch(a){
			case 1:				
				scanf("%d",&x);
				Func1(x);	
				break;
			case 2:
				scanf("%d",&x);
				Func2(x);
				break;
			case 3:
				Func3();
				break;
			case 4:
				Func4();
				break;
			case 5:
				Func5();
				break;
			case 6:
				Func6();
				break;
			case 7:
				Func7();
				break;
			case 8:
				Func8();
				break;
			default:
            	break;				
		}
	} 

			
	return 0;
}

