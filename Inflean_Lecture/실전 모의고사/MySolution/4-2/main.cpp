#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

int main() {	
	unordered_map<char,int> uM; //�ߺ�Ȯ�� + *** ���Ŀ� ���� ���� str[i]�� ���� 
	unordered_map<char, int> ch; //�̿� Ȯ�� 
	
	string ans; //�� 
	string str;
	cin>>str;
	
	for(int i=0; i<str.size(); i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]); //���ڿ��� �빮�ڷ� ����
		}		
		uM[str[i]]++; 
		ch[str[i]];
	}
	
	//===========================================================
	//����ó�� Ǯ�� 

	for(int i=0; i<str.size(); i++){ 
		
		if(ans.empty()){
			uM[str[i]]--;
			ans+=str[i];
			ch[str[i]]=1;
			continue;
		}
		
		
		if(ch[str[i]]==0){ //���ڸ� ��� �� �� 
		
			while(!ans.empty() && ans.back() >= str[i] && uM[ans.back()]>0 ){ //ans �� ��� ���� 
				ch[ans.back()]=0; //������� 
				ans.pop_back();	
			}
			
			//���� 
			uM[str[i]]--; //��� 
			ch[str[i]]=1;
			ans+=str[i];
					
		}
		else{ //���ڸ� ������ ����� 					
			uM[str[i]]--; 
			continue; //������ ������ 
		}
	}	

	
	cout<<ans;
	
	return 0;
}

