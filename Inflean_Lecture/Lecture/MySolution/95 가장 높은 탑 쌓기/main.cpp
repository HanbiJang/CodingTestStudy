#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct thing{
	int a,b,c; //밑면넓이, 높이, 무게
	thing(int a_, int b_, int c_){
		a=a_;
		b=b_;
		c=c_;
	} 
	
	bool operator< (const thing &other)const{
		if(a!=other.a) return a>other.a; //내림차순
		return c>other.c;
	}
	
};

int main() {
	
	int N;
	
	//input
	scanf("%d", &N);
	vector<thing> arr;
	vector<int> ans(N);
	
	for(int i=0; i<N; i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		arr.push_back(thing(a,b,c));
	}
	
	//bottom-up
	sort(arr.begin(), arr.end());
	ans[0]=arr[0].b;
	for(int i=1; i<N; i++){
		int max_=0;
		for(int j=0; j<i; j++){
			//무게만 확인 + 높이 값 확인  
			if(arr[j].c>=arr[i].c && ans[j]>max_ ){
				max_=ans[j];
			}			
		}
		ans[i]=max_+arr[i].b;
	}
	
	
	//output
	printf("\n%d", *max_element(ans.begin(), ans.end()));
	
	return 0;
}
