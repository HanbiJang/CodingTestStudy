#include <iostream>
#include <vector>
#include <map>

using namespace std;

//하나의 문자열에서 각 문자가 몇번쓰였는지 출력 

int main() {
	
	map<char, int> m;
	map<char, int>::iterator it;
	
	//char a[5]={'a','b','c','a','a'}; //***이렇게 초기화하면 안됨 
	char a[6]="abcaa";
	
	for(int i=0; a[i]!='\0'; i++){
		m[a[i]]++;
		//printf("%c %d \n", a[i] ,m[a[i]]);
	}
	
	for(it=m.begin(); it != m.end(); it++){
		//순회
		cout << it->first<< ' ' << it->second << "\n"; //문자열에서 해당 문자가 몇번쓰였는지 출력 
	}

	return 0;
}
