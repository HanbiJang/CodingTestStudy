#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;



int main(){
	
	//앞에서 읽은 수 = 뒤에서 읽은 수를 찾아라	
	int a;
	
	while(1){
		cin>>a;
		if(a==0) {
			//cout<<"yes";
			break;
		}
		
		int a_ = a;
		int tmp=0;
		
		while(a!=0){
			tmp = tmp*10 +(a%10);
			a/=10;
		}
		
		if(tmp==a_) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		
	}

	return 0;
}

