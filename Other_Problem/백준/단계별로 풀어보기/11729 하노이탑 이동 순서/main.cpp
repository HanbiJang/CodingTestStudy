#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

vector<string> ans;
int cnt = 0;
void Hanoi(int N, int start,int mid, int target){

	if(N==1){ //�Űܾ��ϴ� ���� ���� N (1�� �ִ�) 
		string str =  to_string(start) + " " +  to_string(target);
		ans.push_back(str);
		cnt++;
		return;
	}	
	else{
		//ū ������ ������ ��� ������ [�߰� ���]���� �̵�
		//�߰� ��� : ��ǥ�ϴ� ��� x�� ��� 2 ����� �ƴ�. 1 2 �߿�
		//��� �ٲ� ***
		Hanoi(N-1,start,target,mid);
		string str = to_string(start) + " " +  to_string(target);
		ans.push_back(str);
		cnt++;
			
		//Hanoi(1,start,3); //���� ū ������ 3���� �̵�
		/* �ּ�ó���ϴ� ����: 
		' cout<<start<<" "<<target<<"\n"; ' 
		�� �ڵ忡 [���� ū ������ 3���� �̵�]�� ���Ե� 
		*/
		
		//�߰� ��տ� �ִ� ��� ������ 3���� �̵�
		Hanoi(N-1,mid,start,target);
		
	}
	 
	
}

int main(){
	
	int N;
	cin>>N;
	
	//���̵��*** 1
	//ū ������ ������ ��� ������ �߰� ������� �̵�
	//���� ū ������ 3���� �̵�
	//�߰� ��տ� �ִ� ��� ������ 3���� �̵�
	
	Hanoi(N,1,2,3);
	
	cout<<cnt<<"\n";
	
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<"\n";
	}

	return 0;
}

