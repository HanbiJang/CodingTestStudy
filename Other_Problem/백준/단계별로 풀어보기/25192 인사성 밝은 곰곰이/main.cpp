#include <iostream>
#include <string>
#include <map>

using namespace std;


int main(){
	
	//����Ƽ���� ���� Ƚ���� ���϶� 
	
	//ENTER : ���ο� ����� ����
	//�׿� : �г��� 
	//����Ƽ�� -> ���ο� ����� ������ ���� ó�� ä���� �Է��ϴ� ����� �ݵ�� ����Ƽ������ �λ�
	
	int cnt = 0;
	int N;
	scanf("%d",&N); //ä�ù��� ��ϼ�
	
	map<string,int> mm;
	
	for(int i=0; i<N; i++){
		char c[21];
		scanf("%s", c);
	
		string str = c;
		
		if(str=="ENTER"){
			mm.clear();
		}
		else{
			if(mm[str]==0){
				mm[str]++;
				cnt++;
			}						
		}
		
	} 
	

	cout<<cnt;
	
		
	return 0;
}

