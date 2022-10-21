#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//float ans; //�ּ� ���
double ans; 
int map[1001][1001]; //���� ���� ��� ���� �� 
int unf[1001];

double dist(int x1, int y1, int x2, int y2){
	return sqrt( pow(x2-x1,2) + pow(y2-y1,2)  );	
}

struct my{
	int a,b;//�������� a,b, ��� c
	double c;
	my(int a,int b,double c){
		this->a=a;
		this->b=b;
		this->c=c;	
	}
	
	bool operator<(const my& other)const{
		return c<other.c;
	} 
	
};

int Find(int a){
	if(unf[a]==a){
		return a;
	}
	else{
		return unf[a] = Find(unf[a]);
	}
}

void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	
	if(a<b){
		unf[a]=b;
	}
	else if(a>b){
		unf[b]=a;
	}
}

int main() {
	vector<pair<int,int> > ho; //ȣ��
	vector<pair<int,int> > doro; //����
	
	vector<my> tmp; //���� 
	
	int N,M; //ȣ�ڼ�, ���μ� 
	//cin>>N>>M;
	scanf("%d %d",&N,&M);
	
	ho.push_back(make_pair(0,0));
	for(int i=1; i<=N; i++){ //ȣ�� ��ġ ���� 
		int a,b;
		//cin>>a>>b;
		scanf("%d %d",&a,&b);
		ho.push_back(make_pair(a,b));
	}
	
	doro.push_back(make_pair(0,0));
	for(int i=1; i<=M; i++){ //���� ���� ���� 
		int a,b;
		//cin>>a>>b;
		scanf("%d %d",&a,&b);
		doro.push_back(make_pair(a,b));
		map[a][b]=-1; 
	}
	
	//ȣ�� �� ���  ��� 
	for(int i=1; i<=N; i++){
		for(int j=i+1; j<=N; j++){
			if(map[i][j]==-1) continue;			
			double dis = dist(ho[i].first,ho[i].second,ho[j].first,ho[j].second );
			tmp.push_back(my(i,j,dis));
		}	
	}
	
	//���� ���� ���� ���Ͽ��ϱ�
	for(int i=1; i<ho.size(); i++){
		unf[i]=i;
	}
	
	for(int i=1; i<doro.size(); i++){
		int a,b;
		a = doro[i].first;
		b = doro[i].second;
		
		Union(a,b);
	}
	
	//ũ�罺Į
	sort(tmp.begin(), tmp.end()); //���� 
	for(int i=0; i<tmp.size(); i++){
		
		//Union(tmp[i].a, tmp[i].b);
		int a = Find(tmp[i].a);
		int b = Find(tmp[i].b);
		if(a!=b){
			if(a<b){
				unf[a]=b;
			}
			else if(a>b){
				unf[b]=a;
			}
			
			ans += tmp[i].c;
		}
				
	}	
	
	//cout<<ans<<endl;
	//printf("%f\n",ans);

	//��°�ڸ����� �ݿø�
	printf("%0.2f",ans);
//	if( ((int)(ans*1000))%10 >=5 ){
//		//cout<< (float)((int)(ans*1000)/10 + 1)/100;
//		
//	}
//	else{
//		cout<< (float)((int)(ans*1000)/10)/100;
//	}

	return 0;
}

