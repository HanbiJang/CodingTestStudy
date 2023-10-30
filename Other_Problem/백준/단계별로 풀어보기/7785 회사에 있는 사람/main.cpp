#include <iostream>
#include <string>
#include <set>

using namespace std;

struct myStr{
	string name;
	myStr(string name_){name = name_;}
	bool operator<(const myStr& b)const{
		return name > b.name; //���� 
	}
	
}; 

int main(){
	
	ios_base::sync_with_stdio(false);
	set<myStr> mymy;
	int n=0; // ���� ����� ��
	cin>>n;
	cin.ignore(); // �Է� ���� ����
	/*
	getline �Լ��� �Է� ��Ʈ������ ���� ����('\n')�� ���� ������ ���ڵ��� �о�ͼ� ���ڿ��� �����մϴ�.
	cin ��ü�� �Է��� ���� �� ���� ����('\n')�� �Է� ���ۿ� ���ܵӴϴ�. 
	�׸��� getline �Լ��� ���� ���ڸ� ���� ������ ���ڵ��� �о���� ������, getline �Լ��� ȣ��Ǹ� �Է� ���ۿ� �����ִ� ���� ���ڰ� �ٷ� �������� �˴ϴ�. 
	�̷� ���� getline �Լ��� �� ���ڿ��� ��ȯ�ϰ� �˴ϴ�.
	*/
	
	for(int i=0; i<n; ++i){
		string str="";	
		getline(cin,str); //���� ���� �޾���
		//���� �̸�
		string name= str.substr(0,str.size()-6);
		
		if(str[str.size()-5] == 'e'){ //��� 
			mymy.insert(myStr(name));
		}
		else{
			mymy.erase(name); //��� 
		}
	}
	
	//enter�̶�� ������ ����� �̸��� �������� �������� ����϶�
	for(const auto& ele : mymy){
		printf("%s \n", ele.name.c_str());
	}

		
	return 0;
}

