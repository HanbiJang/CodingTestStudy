#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	
	//push +, pop -
	vector<char> ans;
	vector<int> arr;
	
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int a;
		scanf("%d",&a);
		arr.push_back(a);
	}
	
	stack<int> s;
	s.push(arr[0]);
	
	int j=1;
	int cnt=0;
	for(int i=0; i<arr.size(); i++){
		
		while(arr[i]>=j){
			ans.push_back('+');
			s.push(j);
			++j;
		}
		
		if(s.top()==arr[i]){
			ans.push_back('-');
			s.pop();
			cnt++; //정답 수열 만든 갯수 
		}
	}
	if(cnt==n){
		for(int i=0; i<ans.size(); i++){
			printf("%c\n",ans[i]);
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}

