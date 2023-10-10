#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] �� A[j] �� A[k]; # �ڵ�1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
	
	
	/*
	(n-2) + (n-3) + ... + (1) = 1���� n-2�� �� = (n-2)(n-1)/2
	(n-3) + (n-4) + ... + (1) = 1���� n-3�� �� = (n-3)(n-2)/2
	(n-4) + (n-5) + ... + (1) = 1���� n-4�� �� = (n-4)(n-3)/2
	...
	(1) = 1���� 1�� �� = 1
	
	�� �ĵ��� �� =  (n-2)(n-1)/2 + (n-3)(n-2)/2 + (n-4)(n-3)/2 + ... + 1
	��, �ñ׸� i(i+1)/2 . i=1 ~ n-2
	=> �ñ׸��� �� �������� �����ϸ�
	
	( n^3 - 3n^2 + 2n ) / 6 
	��, �ְ������� ������ 3 �̰� ����Ƚ���� ( n^3 - 3n^2 + 2n ) / 6	
	
	*/
		
	//�ڵ�1�� ����Ƚ��
	cout<<( n*n*n - 3*n*n + 2*n ) / 6<<endl;
	//�ڵ�1�� ����Ƚ���� ���׽���  �ְ����� 
	cout<<3;
	
	
	return 0;
}

