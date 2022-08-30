#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//���� ���� ���� 
struct city{
	int a,b,c;
	city(int a_,int b_, int c_){
		a=a_; //���ᵵ��1 
		b=b_; //����� ����2 
		c=c_; //�ڽ�Ʈ 
	}
	bool operator<(city &other){ //cost������ �� 
		return c<other.c;
	}
};

int unf[26]; //���Ͽ� ���ε�� �迭 

//���� �������� Ȯ�� 
int F(int n){
	if(unf[n]==n) return n;
	else return unf[n] = F(unf[n]);
}

void U(int a, int b){
	a = F(a);
	b = F(b);
	
	if(a<b){
		unf[a]=b;
	}
	else{
		unf[b]=a;
	}
	
}

int V,E;
vector<city> map; //��ü ������ �� 
int sum;

int main() {	
	
	scanf("%d %d", &V, &E);

	//��ü������ �� & �ڽ�Ʈ ���� 
	for(int i=0; i<E; i++){
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		map.push_back(city(a,b,c));
	}
	
	sort(map.begin(), map.end()); //�ڽ�Ʈ �� ���� �������� ����  
	
	//���Ͽ� ���ε�� �迭 �ʱ�ȭ 
	for(int i=1;i<=V;i++){
		unf[i]=i;
	}
	
	//�ݺ����� ���� ((���θ��� ����)) Union �����ϱ� + sum ���� 
	for(int i=0; i<E; i++){	
		int a = F(map[i].a);
		int b = F(map[i].b);		
		
		if(a!=b){
			U(map[i].a,map[i].b);
			sum+=map[i].c;
		}
				
	}
	printf("%d",sum);

	return 0;
}

