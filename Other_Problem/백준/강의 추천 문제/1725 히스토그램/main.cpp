#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int arr[100001];
int main() {

	
	int N;
	int max_ = 0;
	stack<int> s;

	cin>>N;


	//input
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	//stack
	s.push(0);

	for (int i = 1; i <= N+1; i++) { //N번째는 arr[N]==0 
		int h = 0;
		int w = 0;
		int size = 0;

		while (!s.empty() && arr[i] < arr[s.top()] ) { //top이 arr[i]보다 크면 계속 pop 
			h = arr[s.top()];
			s.pop();
			w = i - s.top() - 1;	
			
			size = w * h;
			if (size > max_) { max_ = size; }
		}	
		s.push(i);
	}

	printf("%d", max_);

	return 0;
}

