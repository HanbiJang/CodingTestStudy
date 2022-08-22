#include <iostream>
#include <stack>

using namespace std;
int main() {
	// 16진법: ... 10,11,12,13,14,15 = ... A,B,C,D,E,F 
	int N,K; // 10진법 수, 변환 진법 (2,5,8,16) 
	stack<char> tmp;
	
	// input 
	char str[31];
	scanf("%s", &str);
	
	for(int i=0; str[i]!='\0'; i++){
		
		if( str[i] == '(' ){
			tmp.push(str[i]);
		}
		else if ( str[i] == ')'){

			if( tmp.size() == 0 ){
				printf("NO");
				exit(0);
			}
			else tmp.pop();
		}
		
	}
	
	if( tmp.size() != 0 ) printf("NO");
	else printf("YES");


	return 0;
}

