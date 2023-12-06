#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;


struct word{
	string str; //�ܾ� 
	int a; //��  
	
	bool operator<(const word& other){
		if(a!=other.a){ //�� - ���� 
			return a>other.a;
		}
		else{ //a==word.a
			//���� - ���� 
			if(str.length()!=other.str.length()) return str.length()>other.str.length();  
			else { //������ 
				return str<other.str;
			}
		}
	}
};

int main(){
	

	//���� �ܾ��� �����
	//���� ������ �ܾ� -> �տ� ��ġ
	//���̰� ����� -> �տ� ��ġ
	//���ĺ� ���� ������ �տ��ִ� �ܾ� -> �տ� ��ġ
	
	//���� M�̻��� �ܾ �̿� 
	
	//���� ������ ������ �ܾ��� ���� N
	//���� ������ �Ǵ� M
	
	int N,M;
	scanf("%d %d", &N, &M);
	
	vector<word> ans;
	map<string,int> mm;
	
	for(int i=0; i<N; i++){
		char cc[11];
		scanf("%s", cc);
		
		string str = cc;
		
		if(str.length()>=M){
			mm[str]++;
		} 	
	}
	
	for(auto m : mm){
		word ww;
		ww.str = m.first;
		ww.a = m.second;
		ans.push_back(ww);
	}
	
	sort(ans.begin(), ans.end());
 	for(auto res : ans){
		printf("%s\n",res.str.c_str()); 
	}

	return 0;
}

