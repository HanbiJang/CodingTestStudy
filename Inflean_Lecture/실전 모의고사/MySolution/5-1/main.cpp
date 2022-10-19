#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	
	string str;
	cin>>str;
	
	int N;
	cin>>N;
	
	int min_=2147000000;
	unordered_map<char,int> uM;
	for(int i=0; i<str.size(); i++){
		uM[str[i]]++;
	}
	
	for(auto &i : uM){
		if( min_ > i.second ) min_ = i.second;
	}
	
	//패턴 찾기 
	int i= str.size()/min_;
	int j= str.size()/(min_-1);
	while(i<j-1){
		
		for(int k=0; k<i; k++){
			if( k+i<str.size() && str[k]!=str[k+i]){
				break;
			}
			else{
				if(k==i-1){ //같을때 
					//합 구하기 
					int sum=0;
					
					for (int k=0; k<i; k++){
						sum+=str[k]-'0';
					}
					
					sum = sum * (N/i);
					
							
					for(int k=0; k< N%i ; k++){
						sum += str[k] - '0';
					}
					cout<<sum;
					exit(0);
					//break;
				}
			}
		}
		i++;
	}
	

	
	return 0;
}

