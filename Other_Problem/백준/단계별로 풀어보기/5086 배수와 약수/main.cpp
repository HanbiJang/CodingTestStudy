#include <iostream>
#include <string>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	while(1){
		int a,b;
		cin>>a>>b;
		if(a==0 && b==0){ //Á¾·á 
			return 0;
		}
		
		bool c1,c2 ;
		c1=false;
		c2=false;
		
		if(b%a==0){
			c1=true;
		}
		
		else if(a%b==0){
			c2=true;
		}
		
		
		if(c1==true){
			cout<<"factor"<<endl;
		}
		else{
			if(c2==true){
				cout<<"multiple"<<endl;
			}
			else{
				cout<<"neither"<<endl;
			}
		}
	}
		
	return 0;
}

