#include <iostream>
#include <vector>
#include <map>

using namespace std;

//여러개의 문자열(단어)에서 각 문자가 몇번쓰였는지 출력 

int main() {
	
	map<string, int> m;
	map<string, int>::iterator it;
	 
	char a[30]="abcaa";
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		scanf("%s",&a); //&없어도 o  
		m[a]++;
		printf("%s %d \n", a ,m[a]);
	}
	
	for(it=m.begin(); it != m.end(); it++){
		//순회
		cout << it->first<< ' ' << it->second << "\n"; //문자열에서 해당 문자가 몇번쓰였는지 출력 
	}

	return 0;
}
