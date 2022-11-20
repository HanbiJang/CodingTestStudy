#include <iostream>
#include <map>
#include <vector>
#include <string>

#pragma warning(disable:4996)

using namespace std;

int main() {
	
	int N, M;
	cin >> N >> M;

	map<string, int> m1;
	map<string, int> m2;

	for (int i = 0; i < N; i++) {
		char* str = new char[21];
		scanf("%s",str);

		m1[str]++;
	}

	for (int i = 0; i < M; i++) {
		char* str = new char[21];
		scanf("%s",str);

		m2[str]++;
	}

	vector<string> arr;
	for (auto i : m1) {
		
		if (m2[i.first] > 0) {
		
			arr.push_back(i.first);
			//printf("%s", i.first);
		}
	}

	cout << arr.size()<<endl;
	for (int i = 0; i < (int)arr.size(); i++) {
		printf("%s\n", arr[i].c_str());
	}

	return 0;
}

