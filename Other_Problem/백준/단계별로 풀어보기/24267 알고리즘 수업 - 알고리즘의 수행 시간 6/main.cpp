#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
	
	
	/*
	(n-2) + (n-3) + ... + (1) = 1부터 n-2의 합 = (n-2)(n-1)/2
	(n-3) + (n-4) + ... + (1) = 1부터 n-3의 합 = (n-3)(n-2)/2
	(n-4) + (n-5) + ... + (1) = 1부터 n-4의 합 = (n-4)(n-3)/2
	...
	(1) = 1부터 1의 합 = 1
	
	위 식들의 합 =  (n-2)(n-1)/2 + (n-3)(n-2)/2 + (n-4)(n-3)/2 + ... + 1
	즉, 시그마 i(i+1)/2 . i=1 ~ n-2
	=> 시그마의 합 공식으로 정리하면
	
	( n^3 - 3n^2 + 2n ) / 6 
	즉, 최고차항의 차수는 3 이고 실행횟수는 ( n^3 - 3n^2 + 2n ) / 6	
	
	*/
		
	//코드1의 수행횟수
	cout<<( n*n*n - 3*n*n + 2*n ) / 6<<endl;
	//코드1의 수행횟수의 다항식의  최고차항 
	cout<<3;
	
	
	return 0;
}

