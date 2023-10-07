#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
		
	//코드1의 수행횟수
	cout<<n*n*n<<endl;
	//코드1의 수행횟수의 다항식의  최고차항 
	cout<<3;
	
	
	return 0;
}

