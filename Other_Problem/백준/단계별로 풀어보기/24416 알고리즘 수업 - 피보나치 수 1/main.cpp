#include <iostream>

using namespace std;

//n�� �Ǻ���ġ ���� ���� ��� �ڵ�1 �ڵ�2 ���� Ƚ���� �������

/*
fib(n) {
    if (n = 1 or n = 2)
    then return 1;  //# �ڵ�1
    else return (fib(n - 1) + fib(n - 2));
}

fibonacci(n) {
    f[1] <- f[2] <- 1;
    for i <- 3 to n
        f[i] <- f[i - 1] + f[i - 2];  //# �ڵ�2
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
	
	//�ڵ�1�� ���� Ƚ�� // f(n-1)+ f(n-2) �� ����Ƚ��; 
	cout<< fib(N)<<" ";
	//�ڵ�2�� ���� Ƚ�� 
	cout<< N-2;
	
	return 0;
}

