#include <iostream>
#include <vector>
#include <map>

using namespace std;

//�ϳ��� ���ڿ����� �� ���ڰ� ����������� ��� 

int main() {
	
	map<char, int> m;
	map<char, int>::iterator it;
	
	//char a[5]={'a','b','c','a','a'}; //***�̷��� �ʱ�ȭ�ϸ� �ȵ� 
	char a[6]="abcaa";
	
	for(int i=0; a[i]!='\0'; i++){
		m[a[i]]++;
		//printf("%c %d \n", a[i] ,m[a[i]]);
	}
	
	for(it=m.begin(); it != m.end(); it++){
		//��ȸ
		cout << it->first<< ' ' << it->second << "\n"; //���ڿ����� �ش� ���ڰ� ����������� ��� 
	}

	return 0;
}
