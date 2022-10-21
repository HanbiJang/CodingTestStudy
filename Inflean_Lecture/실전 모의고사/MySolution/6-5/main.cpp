#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//float ans; //최소 비용
double ans; 
int map[1001][1001]; //도로 연결 비용 적을 것 
int unf[1001];

double dist(int x1, int y1, int x2, int y2){
	return sqrt( pow(x2-x1,2) + pow(y2-y1,2)  );	
}

struct my{
	int a,b;//연결지점 a,b, 비용 c
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
	vector<pair<int,int> > ho; //호텔
	vector<pair<int,int> > doro; //도로
	
	vector<my> tmp; //길이 
	
	int N,M; //호텔수, 도로수 
	//cin>>N>>M;
	scanf("%d %d",&N,&M);
	
	ho.push_back(make_pair(0,0));
	for(int i=1; i<=N; i++){ //호텔 위치 정보 
		int a,b;
		//cin>>a>>b;
		scanf("%d %d",&a,&b);
		ho.push_back(make_pair(a,b));
	}
	
	doro.push_back(make_pair(0,0));
	for(int i=1; i<=M; i++){ //도로 연결 정보 
		int a,b;
		//cin>>a>>b;
		scanf("%d %d",&a,&b);
		doro.push_back(make_pair(a,b));
		map[a][b]=-1; 
	}
	
	//호텔 별 비용  계산 
	for(int i=1; i<=N; i++){
		for(int j=i+1; j<=N; j++){
			if(map[i][j]==-1) continue;			
			double dis = dist(ho[i].first,ho[i].second,ho[j].first,ho[j].second );
			tmp.push_back(my(i,j,dis));
		}	
	}
	
	//기존 연결 정보 유니온하기
	for(int i=1; i<ho.size(); i++){
		unf[i]=i;
	}
	
	for(int i=1; i<doro.size(); i++){
		int a,b;
		a = doro[i].first;
		b = doro[i].second;
		
		Union(a,b);
	}
	
	//크루스칼
	sort(tmp.begin(), tmp.end()); //정렬 
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

	//셋째자리에서 반올림
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

