#include <iostream>
#include <map>
#include <unordered_set>

using namespace std;


int main(){
		
	int N; //����̰� ������ �ִ� ���� ī�� ����
	
	//map<int,int> mymap;
	unordered_set<int> myun;
	
	cin>>N;
	//���� ī�忡 �����ִ� ����  
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		//mymap[a]++;
		myun.insert(a);
	}
	
	int M; //����̰� �������ִ� ����ī������ �ƴ����� ���ϴ� M���� ����
	cin>>M;
	for(int i=0; i<M; i++){
		int a;
		scanf("%d",&a);
		
		//������ �ִ��� �ƴ��� ����ϱ�
		int res = 0;
		//if(mymap[a]>0){
		//	res=1;
		//}
		res = myun.count(a);
		
		printf("%d ",res);
	} 

	return 0;
}

