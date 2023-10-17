#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	//좌표 압축 : 
	//수직선 위의 N개의 좌표 X1~Xn들에 대해서 
	//좌표 압축한 결과는 X1~Xn에 대해서 > Xj를 만족하는 Xj의 개수
	
	//즉, 같은 배열 arr 안에서 Xi보다 작은 수의 갯수를 구하면 됨 
	 
	int N;
	vector<int> arr;
	
	cin>>N;
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		arr.push_back(a); //X1~Xn
	}
	
	//중복빼고 정렬됨 
	vector<int> arr2 = arr;
	sort(arr2.begin(), arr2.end());
	arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());
	
	for(int i=0; i<N; i++){
		//auto iter = find(arr2.begin(),arr2.end(),arr[i]);
		//find 함수 - 모든 요소에 접근하여 O(n)
		//lower_bound 함수 - 특정 타겟값 이상의 수의 인덱스를 찾아줌 - 이진탐색하여 O(log n)
		//결론 : 더 빠른 lower_bound 함수를 써야 함 
		
		printf("%d ",lower_bound(arr2.begin(), arr2.end(), arr[i]) - arr2.begin() );
		
		//순서 출력
		//printf("%d ", iter - arr2.begin()); //벡터 배열이라 iterator간의 사칙연산 가능 ***
	}
	
	return 0;
}

