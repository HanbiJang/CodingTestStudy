#include <iostream>
#include <vector>

using namespace std;

int a[10]; //result
int ch[10]; //각각 다른수가 쓰여야 하므로 check함(0~9까지의 수) 
 
int send(){
	int num;
	return num = a[0]*1000 + a[1]*100 + a[2]*10 + a[3]*1;
}

int more(){
	int num;
	return num = a[4]*1000 + a[5]*100 + a[6]*10 + a[1]*1;
}

int money(){
	int num;
	return num = a[4]*10000 + a[5]*1000 + a[2]*100 + a[1]*10 + a[7]*1;
}

void re(int r){
	if(r >= 8){
		if( send()+more() ==money() && a[0]!=0 && a[4]!=0 ){
	    
		    printf("  %d %d %d %d \n", a[0], a[1], a[2], a[3]); //send
		    printf("+ %d %d %d %d \n", a[4], a[5], a[6], a[2]); //more
		    printf("---------     \n");
		    printf(" %d %d %d %d %d \n",a[4], a[5], a[2], a[1], a[7]); //money
		}	
		
		return;
	}

	else{
		//순열 
		for(int i=0; i<=9; i++){
			if(ch[i]==0){
				ch[i]=1;
				a[r]=i;
				re(r+1);
				
				ch[i]=0;
				a[r]=0;
			} 
		}	
		
	}
	
}


// SEND MOR.....Y => res[0~7]

int main() {
	
	re(0);
	return 0;
}
