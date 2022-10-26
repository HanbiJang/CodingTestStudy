#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime> 

using namespace std;

//***정의되어 있음*** 
//struct tm {
//   int tm_sec;         // 초,  range 0 to 59
//   int tm_min;         // 분, range 0 to 59
//   int tm_hour;        // 시간, range 0 to 23
//   int tm_mday;        // 일, range 1 to 31
//   int tm_mon;         // 월, range 0 to 11
//   int tm_year;        // 1900년 부터의 년
//   int tm_wday;        // 요일, range 일(0) to 토(6)
//   int tm_yday;        // 1년 중 경과 일, range 0 to 365
//   int tm_isdst;       // 섬머타임 실시 여부 (양수, 0, 음수)
//};

int main(){
	
	//서울의 오늘 날짜 출력
	time_t timer = time(NULL);
	tm* t = localtime(&timer);
	//tm* t = gmtime(&timer); // UTC+0(세계 표준시)	
	
	cout.width(2);
	cout.fill('0');
	cout<< t->tm_year+1900<<"-";
	
	cout.width(2);
	cout.fill('0');
	cout<< t->tm_mon+1<<"-";
	
	cout.width(2);
	cout.fill('0');
	cout<< t->tm_mday;


	return 0;
}

