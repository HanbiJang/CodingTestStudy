#include <iostream>
#include <vector>
#include <map>

using namespace std;

//�������� ���ڿ�(�ܾ�)���� �� ���ڰ� ����������� ��� 

int main() {
	
	map<string, int> m;
	map<string, int>::iterator it;
	 
	char a[30]="abcaa";
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		scanf("%s",&a); //&��� o  
		m[a]++;
		printf("%s %d \n", a ,m[a]);
	}
	
	for(it=m.begin(); it != m.end(); it++){
		//��ȸ
		cout << it->first<< ' ' << it->second << "\n"; //���ڿ����� �ش� ���ڰ� ����������� ��� 
	}

	return 0;
}
