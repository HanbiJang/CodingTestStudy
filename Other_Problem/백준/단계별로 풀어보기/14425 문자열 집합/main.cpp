#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	

	int M,N;
	map<string,int> Sarr;
	//set<string> Marr;
	int cnt = 0; 
	
	cin>>N>>M;
	for(int i=0; i<N; i++){
		string str;
		cin>>str;
		Sarr[str]++;
	}
	
	for(int i=0; i<M; i++){
		string str;
		cin>>str;
		//Marr.push_back(str);
		if(Sarr[str]>0){
			cnt++;
		}
	}
	
	//Marr�� �� ��� Sarr�� ���ԵǾ��ִ��� ����϶�
	cout<<cnt;

	return 0;
}

