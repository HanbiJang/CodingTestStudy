#include <iostream>
#include <string>
#include <vector>

using namespace std;

//완전수 판단하기 (진약수의 합과 같다면 완전수) 
int main(){
	
	ios_base::sync_with_stdio(false);
	
	while(1){
		int num=0;
		int sum=0;
		vector<int> arr;
		cin>>num;
		
		if(num==-1){
			break;
		}
		
		for(int i=1; i<num; i++){
			if(num%i==0){
				sum+=i;
				arr.push_back(i);
			}
		}
		if(sum!=num){
			cout<<num<<" is NOT perfect."<<endl;
		}
		else{
			cout<<num<<" =";
			for(int i=0; i<arr.size(); i++){
				cout<<" "<<arr[i];
				if(i!=arr.size()-1){
					cout<<" +";
				}
			}
			cout<<endl;
		}
		

	}

	return 0;
}

