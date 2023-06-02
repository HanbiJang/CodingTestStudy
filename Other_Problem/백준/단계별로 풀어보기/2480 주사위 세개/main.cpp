#include <iostream>
#include <string>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int n1, n2, n3;
	int res = 0;
	cin>>n1>>n2>>n3;
	
	if(n1==n2 && n2==n3){
		res = 10000 + (n1)*1000;
	}	
	else if(n1==n2 || n1==n3){
		res = 1000 + (n1)*100;
	}
	else if(n2==n3){
		res = 1000 + (n2)*100;
	}	
	else{
		if(n1>=n2){			
			if(n1>=n3){
				res = (n1)*100;
			}
			else{
				res = (n3)*100;
			}
		}
		else{
			if(n2>=n3){
				res = (n2)*100;
			}
			else{
				res = (n3)*100;
			}		
		}		
	}
	
	cout<<res;
		
	return 0;
}

