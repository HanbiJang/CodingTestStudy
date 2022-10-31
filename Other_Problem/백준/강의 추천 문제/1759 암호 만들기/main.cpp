#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void dfs(int n);
bool isRight();

int L,C;
char* tmp;
vector<string> ans;
vector<char> arr;
vector<int> ch;
int cnt;

void dfs(int n){
	
	if(n==L){
		if(isRight()){		
			//string str = tmp;		
			cout<<tmp<<endl;	
			//ans.push_back(str);				
		}
		return; 
		
	}
	else{
		//문자 선택
		for(int i=n; i<arr.size(); i++){
			if(ch[i]==0){
				//선택  
				tmp[n]=arr[i];
				ch[i]=1;
				dfs(n+1);
				
				//비선택  
				ch[i]=0; //초기화 
			}
		}
		
	}
	
}

bool isRight(){
	bool res = true;
	int n=0; //자음 개수
	int nn=0; //모음 개수 
	for(int i=0; tmp[i]!='\0'; i++){
		if(i>0 && tmp[i-1] >=  tmp[i]){
			res = false;
			break;
		}
		if(tmp[i]=='a'|| tmp[i]=='e'|| tmp[i]=='o'||tmp[i]=='u'||tmp[i]=='i'){
			nn++;
		}
		else{
			n++;
		}
	}
	if(nn==0 || n<2) res=false; //모음개수 체크 

	return res;
}

int main(){
	
	//input
	scanf("%d %d", &L, &C);
	tmp = new char[C+1];
	for(int i=0; i<C; i++){
		char c;
		cin >> c;
		arr.push_back(c);
		ch.push_back(0); //초기화 
	}
	
	sort(arr.begin(), arr.end()); //오름차순 정렬 
	
	dfs(0);

	sort(ans.begin(), ans.end());
	
	//output
//	for(int i=0; i<ans.size(); i++){
//		cout<<ans[i]<<endl;		
//	}
	
	return 0;
	
}
