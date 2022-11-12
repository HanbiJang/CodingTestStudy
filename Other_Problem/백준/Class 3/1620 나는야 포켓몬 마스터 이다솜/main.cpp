#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> 

using namespace std;


int main(){
	
	int N,M; //������ ���ϸ� ����, �������� 
	cin>>N>>M;
	
//	vector<string> arr;
	unordered_map<int, string> Mnum;
	unordered_map<string, int> Mname;
	
	for(int i=1; i<=N; i++){
		char str_[21];
		scanf("%s", str_);
		string str = str_;
		
		//map
		Mnum[i]=str;
		Mname[str]=i;
		
	}
	
	for(int i=1; i<=M; i++){
		//������ ���ĺ��̸� ���ϸ� ��ȣ 
		//������ ���ڸ� ���ϸ� ��ȣ�� �ش��ϴ� ���� ��� 
		char str_[21];
		scanf("%s", str_);
		string str = str_;
		
		//����, ���� ���� 
		if(str_[0]-'0'>=0 && str_[0]-'0'<=9){ //num
			printf("%s\n",Mnum[stoi(str)].c_str());
		}
		else{ //name
			printf("%d\n",Mname[str]); 
		}
		
	}
	
		
	return 0;
}

