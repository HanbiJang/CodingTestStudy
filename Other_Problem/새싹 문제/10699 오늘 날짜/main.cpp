#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime> 

using namespace std;

//***���ǵǾ� ����*** 
//struct tm {
//   int tm_sec;         // ��,  range 0 to 59
//   int tm_min;         // ��, range 0 to 59
//   int tm_hour;        // �ð�, range 0 to 23
//   int tm_mday;        // ��, range 1 to 31
//   int tm_mon;         // ��, range 0 to 11
//   int tm_year;        // 1900�� ������ ��
//   int tm_wday;        // ����, range ��(0) to ��(6)
//   int tm_yday;        // 1�� �� ��� ��, range 0 to 365
//   int tm_isdst;       // ����Ÿ�� �ǽ� ���� (���, 0, ����)
//};

int main(){
	
	//������ ���� ��¥ ���
	time_t timer = time(NULL);
	tm* t = localtime(&timer);
	//tm* t = gmtime(&timer); // UTC+0(���� ǥ�ؽ�)	
	
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

