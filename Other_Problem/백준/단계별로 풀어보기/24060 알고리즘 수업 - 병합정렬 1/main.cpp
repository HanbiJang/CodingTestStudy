#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &A, int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = 1;
    int tmp[r - p + 1];

    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    while (i <= q)
        tmp[t++] = A[i++];
    
    while (j <= r)
        tmp[t++] = A[j++];

    i = p;
    t = 1;

    while (i <= r)
        A[i++] = tmp[t++];
}

void merge_sort(vector<int> &A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
		
		for(auto i : A){
			cout<<i<<" ";			
		}
		cout<<"\n";
				
        merge_sort(A, q + 1, r);
		
		for(auto i : A){
			cout<<i<<" ";			
		}
		cout<<"\n";
						
        merge(A, p, q, r);
		
		for(auto i : A){
			cout<<i<<" ";			
		}
		cout<<"\n";
				         
    }
}



int main(){
	
	//배열 A의 크기 N
	int N;
	cin>>N;
	
	//저장횟수 K
	int K;
	cin>>K; 
	
	vector<int> arr;
	
	for(int i=0; i<N; i++){
		int a;
		cin>>a;
		
		arr.push_back(a);
	} 
	
	//배열 A에 K번째 저장되는 수를 출력하라
	//저장회수가 K보다 작으면 -1 출력하라
	merge_sort(arr,0,arr.size()-1);
		
	return 0;
}

