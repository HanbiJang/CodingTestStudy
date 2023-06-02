#include <iostream>
#include <string>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	int h,m,n;
	scanf("%d %d %d",&h, &m, &n);	
	
	m = m+n;
	if(m>59){
		h+= m/60; //½Ã°£ 
		m= m%60; //ºÐ 
	}
	if(h>23){
		h = h%24;
	}
	
	cout<<h<<" "<<m;

	return 0;
}

