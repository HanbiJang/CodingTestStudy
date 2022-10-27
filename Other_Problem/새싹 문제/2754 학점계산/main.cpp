#include <iostream>
#include <string>

using namespace std;


int main(){
	
	string str;
	cin>>str;
	
	float score=0;
	
	switch(str[0]){
		case 'A':
			score=4;
			break;
		case 'B':
			score=3;
			break;
		case 'C':
			score=2;
			break;
		case 'D':
			score=1;
			break;
		case 'F':
			score=0;
			break;
	}
	
	if(str.size()==2){
		switch(str[1]){
			case '+':
				score+=0.3;
				break;

			case '-':
				score-=0.3;
				break;
		}
	}
	
	printf("%.1f",score);
	
	return 0;
}


