#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	//첫째줄에 식이 주어짐
	string str;
	cin>>str;
	
	//이 식의 값이 최소가 되도록 괄호를 쳤을때, 그 최소값 출력 
	// 식은 ‘0’~‘9’,‘+’, 그리고 ‘-’만으로 이루어져 있음(양수만 나옴) 
	//괄호 여러개 쳐도 됨!
	
	// - 사이사이 뒤에 전부 괄호를 치면 최소값이 됨 
	int sum = 0;
	int curNum = 0; 
	int curOp = 1;
	for(int i=0; i<str.length(); i++){
		if(str[i]-'0'>=0 && str[i]-'0'<=9){
			curNum = curNum*10 + (str[i]-'0');
		}
		else{ //중간에 연산 기호가 나왔을 시 				
			sum += curOp * curNum;
			//cout<<sum<<endl;
			curNum = 0; //초기화
			if(str[i]=='+'){
				if(curOp!=-1){ //이전 값이 + 인데 +를 만난 경우 
					curOp = 1;
				}
				//이외에는 변화 없음 
			}
			else if(str[i]=='-'){ 
				//if(curOp==-1){ //이전 값이 -인데 -를 만난 경우
					//curOp = 1;
				//}
				//else 
					curOp = -1; //이전 값이 +인데 -를 만난 경우 
			}
			
		}
	}
	
	sum += curOp * curNum;	
	
	cout<<sum; 
	
	return 0;
}

