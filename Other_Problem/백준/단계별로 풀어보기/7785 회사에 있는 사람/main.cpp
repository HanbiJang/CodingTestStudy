#include <iostream>
#include <string>
#include <set>

using namespace std;

struct myStr{
	string name;
	myStr(string name_){name = name_;}
	bool operator<(const myStr& b)const{
		return name > b.name; //역순 
	}
	
}; 

int main(){
	
	ios_base::sync_with_stdio(false);
	set<myStr> mymy;
	int n=0; // 출입 기록의 수
	cin>>n;
	cin.ignore(); // 입력 버퍼 비우기
	/*
	getline 함수는 입력 스트림에서 개행 문자('\n')를 만날 때까지 문자들을 읽어와서 문자열로 저장합니다.
	cin 객체는 입력을 받을 때 개행 문자('\n')를 입력 버퍼에 남겨둡니다. 
	그리고 getline 함수는 개행 문자를 만날 때까지 문자들을 읽어오기 때문에, getline 함수가 호출되면 입력 버퍼에 남아있는 개행 문자가 바로 읽혀지게 됩니다. 
	이로 인해 getline 함수는 빈 문자열을 반환하게 됩니다.
	*/
	
	for(int i=0; i<n; ++i){
		string str="";	
		getline(cin,str); //띄어쓰기 포함 받아짐
		//받은 이름
		string name= str.substr(0,str.size()-6);
		
		if(str[str.size()-5] == 'e'){ //출근 
			mymy.insert(myStr(name));
		}
		else{
			mymy.erase(name); //퇴근 
		}
	}
	
	//enter이라고 쓰여진 사람의 이름을 사전순의 역순으로 출력하라
	for(const auto& ele : mymy){
		printf("%s \n", ele.name.c_str());
	}

		
	return 0;
}

