#include <iostream>
#include <vector>

using namespace std;

/*
if a <= 0 or b <= 0 or c <= 0, then w(a, b, c) returns:
    1

if a > 20 or b > 20 or c > 20, then w(a, b, c) returns:
    w(20, 20, 20)

if a < b and b < c, then w(a, b, c) returns:
    w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)

otherwise it returns:
    w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
*/

//메모이제이션 - 3차원 배열을 만들어야 함... 음수 좌표를 +50해서 구함 
int visit[101][101][101];
int arr[101][101][101];

int w(int a, int b, int c){
	
	if(visit[a][b][c]==1) return arr[a][b][c];
	
	else{
		visit[a][b][c]=1;	
		
		if(a==0 ||b==0 ||c==0 || a>=51 ||b>=51 ||c>=51){
			return arr[a][b][c]=1;
		}
		
		if(a>20 ||b>20 ||c>20){
			return arr[a][b][c] = w(20,20,20);
		}
		
		if(a < b && b < c){
			return arr[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
		}

		return arr[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
	}
}

int main(){
	
	while(true){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==-1 && b==-1 && c==-1){
			break;
		}
		
		//w(a,b,c) 출력하라 
		int a_=a,b_=b,c_=c;
		if(a<0) a_ = 50 + a*-1;
		if(b<0) b_ = 50 + b*-1;
		if(c<0) c_ = 50 + c*-1;
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a_,b_,c_));
	}
		
	return 0;
}

