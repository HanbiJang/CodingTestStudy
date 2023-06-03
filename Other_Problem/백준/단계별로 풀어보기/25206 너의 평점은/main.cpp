#include <iostream>
#include <string>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);

	//(학점 * 과목평점)의 합 / 학점의 총합 
	
	float score[] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
	string name[] = {"A+", "A0", "B+", "B0", "C+","C0", "D+","D0", "F"};
	
	float scoreSum = 0;
	float timeSum = 0;
	
	for(int i=0; i<20; i++){
		string myName;
		float time;
		string myScore;
		
		cin>>myName>>time>>myScore;
				
		for(int j=0; j<9; j++){
			if(name[j].compare(myScore)==0){
				scoreSum+= (time*score[j]);
				timeSum+=time;
			}
		}
	}
	
	printf("%f",scoreSum/timeSum);

	return 0;
}

