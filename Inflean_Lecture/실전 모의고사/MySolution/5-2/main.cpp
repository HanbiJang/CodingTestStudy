#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	string ans;
	string str;
	cin>>str;
	
	string tmp; 
	int ntmp=0; //���� 
	for(int i=0; i<str.size(); i++){
		
		if( str[i]=='(' && i==0 || i>=1 && str[i]=='(' && str[i-1]==')'){ //1�� �ݺ� 
			ntmp=1;
		}
		
		if(str[i]-'0'>=0 && str[i]-'0'<=9){//���� 
			ntmp = ntmp*10 + str[i]-'0';
		}
		else{ //���� 
			if(str[i]=='(') continue;
			else if(str[i]==')'){ //�ݺ� ���� 
				for(int i=1; i<=ntmp; i++){
					ans+=tmp;
				}
				tmp.clear(); //�ʱ�ȭ	
				ntmp=0; 						
			}
			else{ //�Ϲ� ���� 
				tmp+=str[i];
				//cout<<tmp<<endl;
			}			
		}
	}
	
	cout<<ans;
	
	return 0;
}

