#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct num{
	int a,b; //��, Ƚ�� 
	num(){
		a=0;
		b=0;
	}
	num(int a, int b){
		this->a = a; 
		this->b = b;
	}
	
	bool operator<(const num& other)const{
		if(b!=other.b) return b<other.b; //Ƚ�� �� 
		else return a<other.a; //�� �� 
	}
};


vector<vector<int> > arr(101, vector<int>(101,0)); //2���� ���� [101][101]

int currow=3; //���� ��� 
int curcul=3; //���� ����  

int cnt=0;


void R(){ //arr�� �࿡ ���� ���� 
	int maxsize = -2147000000;

	for (int i = 1; i <= currow; i++) {
		vector<num> tmp; //���Ŀ� �ӽ� �迭 tmp 
		map<int,int> m;
		map<int, int>::iterator iter;
		
		//� ���� �� �� �������� ī��Ʈ
		for(int j=1; j<= curcul; j++){
			if(arr[i][j]==0) continue; //0 ���� 
			else m[arr[i][j]]++;
		} 
 		//�� ������ Ƚ����� ��Ʈ
		for(iter = m.begin(); iter != m.end(); iter++) {
			tmp.push_back(num(iter->first, iter->second)); //��, Ƚ��		
		}
		sort(tmp.begin(), tmp.end());

		//Ƚ���� ���� ���� ����� ����� 		
		vector<int> tmp2;		
		for(int j = 0; j < tmp.size(); j++) {
			tmp2.push_back(tmp[j].a); //�� 
			tmp2.push_back(tmp[j].b); //Ƚ�� 
		}
		
		//**�� �迭 arr�� tmp2�� (����)�ϱ�**
		//0���� �ʱ�ȭ
		for(int j=1; j<=curcul; j++){
			arr[i][j]=0;
		} 
		for(int j = 0; j<tmp2.size(); j++) {		
			arr[i][j+1] = tmp2[j]; //����
		}
		
		//currow �� curcul�� ũ�� �Ǵ� 
		if(maxsize < (int)tmp2.size()){
			maxsize = tmp2.size();
		}		
	}
	
	//�� ����-> �� ���� ��ȭ 
	curcul = maxsize;
}

void C(){ //arr�� ���� ���� ����
	int maxsize = -2147000000;

	for (int i = 1; i <= curcul; i++) {
		vector<num> tmp; //���Ŀ� �ӽ� �迭 tmp 
		map<int,int> m;
		map<int, int>::iterator iter;
		
		//� ���� �� �� �������� ī��Ʈ
		for(int j=1; j<= currow; j++){
			if(arr[j][i]==0) continue; //0 ���� 
			else m[arr[j][i]]++;
		} 
 		//�� ������ Ƚ����� ��Ʈ
		for(iter = m.begin(); iter != m.end(); iter++) {
			tmp.push_back(num(iter->first, iter->second)); //��, Ƚ��		
		}
		sort(tmp.begin(), tmp.end());

		//Ƚ���� ���� ���� ����� ����� 		
		vector<int> tmp2;		
		for(int j = 0; j < tmp.size(); j++) {
			tmp2.push_back(tmp[j].a); //�� 
			tmp2.push_back(tmp[j].b); //Ƚ�� 
		}
		
		//**�� �迭 arr�� tmp2�� (����)�ϱ�**
		//0���� �ʱ�ȭ
		for(int j=1; j<=currow; j++){
			arr[j][i]=0;
		} 
		for(int j = 0; j<tmp2.size(); j++) {
			arr[j+1][i] = tmp2[j]; //����
		}
		
		//currow �� curcul�� ũ�� �Ǵ� 
		if(maxsize < (int)tmp2.size()){
			maxsize = tmp2.size();
		}		
	}
	
	//�� ����-> �� ���� ��ȭ 
	currow = maxsize;
}

int main(){

	int r,c,k;
	scanf("%d %d %d", &r, &c, &k);
	
	//input
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			int a;
			scanf("%d", &a);
			arr[i][j] = a;
		}
	}
	while(cnt<=100){
		if(arr[r][c]==k){
			printf("%d",cnt);
			exit(0);
		}
		//���� (�ùķ��̼�)
		if(currow>=curcul){
			R(); //R���� 
		}	
		else C(); //C���� 
		cnt++;
	}
	printf("-1");

	return 0;
}

