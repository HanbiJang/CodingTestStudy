#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//n!에서 처음 0이 아닌 숫자가 나올때까지 0의 개수를 구하라
	int N;
	cin>>N;
	int cnt=0;
	
	int n2=0;
	int n5=0;
	
	//2와 5의 수를 센다 => 10으로 조합되면 뒤에 0의 수로 된다 
	for(int i=2; i<=N; i++){
		int tmp2=i;
		int tmp5=i;
		int tmpn2=0;
		while(1){
			if(tmp2%2==0) n2++;
			else break;
			tmp2/=2;
		}
		n2+=tmpn2;
		
		int tmpn5=0;
		while(1){
			if(tmp5%5==0) n5++;
			else break;
			tmp5/=5;
		}
		n5+=tmpn5;
					
	}
	
	cout<<min(n2,n5);
	
	return 0;
}

