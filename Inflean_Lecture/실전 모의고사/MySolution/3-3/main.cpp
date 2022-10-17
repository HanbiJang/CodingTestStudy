#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> //****
#include <algorithm>

using namespace std; 

struct my{
	int a,b;
	char c;
	my(int a, int b, char c){
		this->a=a; //idx
		this->b=b; // ���ݷ� 
		this->c=c; // �� 
	}
	
	bool operator< (const my& other)const{
		return b<other.b;
	}
};

int main() {	
	ios_base::sync_with_stdio(false);
	
	int N; //�л��� 
	cin>>N;
	
	vector< my > arr; //��,�� 
	arr.push_back(my(0,0,0));
	
	for(int i=1; i<=N; i++){
		int a;
		char b;
		cin>>b>>a;
		
		arr.push_back(my(i,a,b));
	}
	
	vector<int> res(N+1); //���
	unordered_map<char, int> uM; //***�ؽø�*** : ���� ���ݷ� ���� 
	// ������ �������� ���ݷ��� ����Ǿ� ���� (������ ���ݷ� ���� �뵵) 
	
	sort(arr.begin(), arr.end()); //�������� ���� 
	
	int sum = 0; //��ü ��
	int j=1; //���� ���ݷ� ���� �л�(������) ó�� *** 
	
	for(int i=1; i<=N; i++){
				
		while(j<i){ //���� ���ݷ� ���� �л� ó�� *** 
			if(arr[i].b > arr[j].b){ //���� �� ���� 
				sum+=arr[j].b;
				uM[arr[j].c] += arr[j].b;
			}
			else{ //���� ���� => j ���� ���� (���԰� ��=>��ȭ�� �� �Ұ�) 
				break;
			}

			j++;
		}
		 
		res[arr[i].a] = sum - uM[arr[i].c];
	}
	
	
	//output 
	for(int i=1; i<=N; i++){
		cout<<res[i]<<endl;
	} 	
	
	return 0;
}

