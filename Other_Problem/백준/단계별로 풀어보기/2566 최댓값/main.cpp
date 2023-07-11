#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	int max = -1;
	int maxR= 0;
	int maxC= 0;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			int tmp;
			cin>>tmp;
			
			if(max<tmp){
				maxR = i;
				maxC = j;
				max = tmp;
			}
		}
	}
	
	cout<<max<<endl<<maxR+1<<" "<<maxC+1;

	
	return 0;
}

