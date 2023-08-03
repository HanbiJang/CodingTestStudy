#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int arr[3];
	while(1){
		
		int a,b,c;
		cin>>a>>b>>c;
		
		arr[0]=a;
		arr[1]=b;
		arr[2]=c;
		
		if(a==0 && b==0 && c==0){
			break;
		}
		
		int max = 0;
		for(int i=0; i<3; i++){
			if(max<arr[i]){
				max=arr[i];
			}
		}
		
		if(max>=a+b+c-max){
			cout<<"Invalid"<<endl;
		}
		
		else if(a==b && b==c && a==c){
			cout<<"Equilateral"<<endl;
		}
		
		else if(a!=b && b!=c && a!=c){
			cout<<"Scalene"<<endl;
		}
		
		else if((a==b&&b!=c) || (b==c&&c!=a) || (a==c&&a!=b) ){
			cout<<"Isosceles"<<endl;
		}		
			
	}
	
		
	return 0;
}

