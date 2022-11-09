#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main(){
	
	
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		
		int a,b; //������ ����, �ñ��� ���� �ε��� 
		cin>>a>>b; 
		
		queue< pair<int,int> > q;
		priority_queue<int> pQ;
		int ans=1;
		
		for(int i=0; i<a; i++){
			int c; //�߿䵵 
			cin>>c;
			
			q.push(make_pair(i,c)); //�ε���, �߿䵵 
			pQ.push(c);
		}
		
		while(!q.empty()){
			if(pQ.top()==q.front().second){
				
				if(b == q.front().first){ //���
					cout<<ans<<endl;
					break;
				}
				q.pop();
				ans++;
				pQ.pop(); //���� �߿䵵 ������Ʈ 
			}
			else{
				//�ǵڷ�
				q.push(make_pair(q.front().first, q.front().second));
				q.pop(); 
			}
		}
		
	}

	return 0;
}

