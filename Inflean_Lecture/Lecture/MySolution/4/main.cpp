#include <iostream>
using namespace std;
//최대 나이차이를 출력하라 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//input.txt 파일에서 input 값 가져오기
	//[파일]을 읽어와서[rt] stdin(표준입력에 대한 포인터)으로 전달한다. *채점할때는 지워야함* 
	//freopen("input.txt","rt",stdin); 
	 
	//int 가장 작은 수 : - 2의 31제곱 = -2147000000 <=> 가장 큰수 : 2의 31제곱 
	int n,i,a,max=-2147000000,min = 2147000000;
	cin>>n; 
	for(i=1; i<=n; i++){
		cin>>a; //cin : enter 치거나 space로 구분하거나 같음  
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}
	cout<<max - min;
	
	
	return 0;
}
