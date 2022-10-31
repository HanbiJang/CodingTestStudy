#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	
	int N;
	scanf("%d",&N);
	for (int i = 0; i < N; i++) {		
		char str[52];
		scanf("%s", &str);
		
		bool res = true;
		stack<char> s;

		for (int i = 0; str[i]!='\0'; i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!s.empty())
					s.pop();
				else {
					res = false;
					break;
				}				
			}
		}

		if (!s.empty()) res = false;
		(res == false) ? printf("NO\n") : printf("YES\n");
	}

	return 0;
}
