#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	//ù°�ٿ� ���� �־���
	string str;
	cin>>str;
	
	//�� ���� ���� �ּҰ� �ǵ��� ��ȣ�� ������, �� �ּҰ� ��� 
	// ���� ��0��~��9��,��+��, �׸��� ��-�������� �̷���� ����(����� ����) 
	//��ȣ ������ �ĵ� ��!
	
	// - ���̻��� �ڿ� ���� ��ȣ�� ġ�� �ּҰ��� �� 
	int sum = 0;
	int curNum = 0; 
	int curOp = 1;
	for(int i=0; i<str.length(); i++){
		if(str[i]-'0'>=0 && str[i]-'0'<=9){
			curNum = curNum*10 + (str[i]-'0');
		}
		else{ //�߰��� ���� ��ȣ�� ������ �� 				
			sum += curOp * curNum;
			//cout<<sum<<endl;
			curNum = 0; //�ʱ�ȭ
			if(str[i]=='+'){
				if(curOp!=-1){ //���� ���� + �ε� +�� ���� ��� 
					curOp = 1;
				}
				//�̿ܿ��� ��ȭ ���� 
			}
			else if(str[i]=='-'){ 
				//if(curOp==-1){ //���� ���� -�ε� -�� ���� ���
					//curOp = 1;
				//}
				//else 
					curOp = -1; //���� ���� +�ε� -�� ���� ��� 
			}
			
		}
	}
	
	sum += curOp * curNum;	
	
	cout<<sum; 
	
	return 0;
}

