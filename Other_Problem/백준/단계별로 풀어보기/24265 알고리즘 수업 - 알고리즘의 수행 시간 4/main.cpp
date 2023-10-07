#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) 
{
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
	
	long long sum = 0;
	
	
	//코드1의 수행횟수
	cout<<n*(n+1)/2 - n<<endl;
	
/*
이유:
i : 1~n-1

코드1의 수행 횟수 = n-i 

if) 코드1의 수행횟수 
i = 1 -> n-1
i = 2 -> n-2
i = 3 -> n-3
...
i = n-1 -> 1

위의 합이 총 실행횟수이므로 n(n+1)/2 - n
*/
	//코드1의 수행횟수의 다항식의  최고차항 
	cout<<2;
	
	
	return 0;
}

