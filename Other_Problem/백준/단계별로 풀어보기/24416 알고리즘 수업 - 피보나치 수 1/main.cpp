#include <iostream>

using namespace std;

//n의 피보나치 수를 구할 경우 코드1 코드2 실행 횟수를 출력하자

/*
fib(n) {
    if (n = 1 or n = 2)
    then return 1;  //# 코드1
    else return (fib(n - 1) + fib(n - 2));
}

fibonacci(n) {
    f[1] <- f[2] <- 1;
    for i <- 3 to n
        f[i] <- f[i - 1] + f[i - 2];  //# 코드2
    return f[n];
}
*/

int fib(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}


int main(){
	
	int N;
	cin>>N;
	
	//코드1의 실행 횟수 // f(n-1)+ f(n-2) 의 실행횟수; 
	cout<< fib(N)<<" ";
	//코드2의 실행 횟수 
	cout<< N-2;
	
	return 0;
}

