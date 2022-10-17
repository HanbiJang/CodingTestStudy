#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
	int N;
	char C;
	cin>>N>>C;
	vector<string> arr;
	for(int i=0; i<N; i++){
		string s;
		cin>>s;
		arr.push_back(s);
	}
	
	for(int i=0; i<N; i++){
		if(arr[i].find(tolower(C))!=string::npos || arr[i].find(toupper(C))!=string::npos){
			
			//유니크한 문자로 만들기			
			string res;
						
			for(int j=0; j<arr[i].size(); j++){
				if(islower(arr[i][j])){
					arr[i][j] = toupper(arr[i][j]);
				}
			}
			
			map<char,int> m;
			for(int j=0; j<arr[i].size(); j++){
				m[arr[i][j]]++;
				if(m[arr[i][j]]>1) continue;
				else cout<<arr[i][j];
			}
		
			cout<<endl;
		}
	}
	
	return 0;
}

