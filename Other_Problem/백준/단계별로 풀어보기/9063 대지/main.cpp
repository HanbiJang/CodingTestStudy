#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	//n���� ���� �ѷ��δ� �ּ� ũ���� ���簢���� ���� 
	int N;
	cin>>N;
	int xmin=10000, xmax=-10000, ymin=10000, ymax=-10000;
	for(int i=0; i<N; i++){
		int x,y;
		cin>>x>>y;
		
		if(xmin>x) xmin = x;
		if(xmax<x) xmax = x;
		if(ymin>y) ymin = y;
		if(ymax<y) ymax = y;		 
	}
	
	if(N==1) cout<<0;
	else cout<<(ymax-ymin)*(xmax-xmin);

	return 0;
}

