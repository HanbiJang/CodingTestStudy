#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

vector<string> ans;
int cnt = 0;
void Hanoi(int N, int start,int mid, int target){

	if(N==1){ //옮겨야하는 원반 개수 N (1에 있는) 
		string str =  to_string(start) + " " +  to_string(target);
		ans.push_back(str);
		cnt++;
		return;
	}	
	else{
		//큰 원반을 제외한 모든 원반을 [중간 기둥]으로 이동
		//중간 기둥 : 목표하는 기둥 x인 기둥 2 기둥이 아님. 1 2 중에
		//계속 바뀜 ***
		Hanoi(N-1,start,target,mid);
		string str = to_string(start) + " " +  to_string(target);
		ans.push_back(str);
		cnt++;
			
		//Hanoi(1,start,3); //가장 큰 원반을 3으로 이동
		/* 주석처리하는 이유: 
		' cout<<start<<" "<<target<<"\n"; ' 
		위 코드에 [가장 큰 원반을 3으로 이동]이 포함됨 
		*/
		
		//중간 기둥에 있는 모든 원반을 3으로 이동
		Hanoi(N-1,mid,start,target);
		
	}
	 
	
}

int main(){
	
	int N;
	cin>>N;
	
	//아이디어*** 1
	//큰 원반을 제외한 모든 원반을 중간 기둥으로 이동
	//가장 큰 원반을 3으로 이동
	//중간 기둥에 있는 모든 원반을 3으로 이동
	
	Hanoi(N,1,2,3);
	
	cout<<cnt<<"\n";
	
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<"\n";
	}

	return 0;
}

