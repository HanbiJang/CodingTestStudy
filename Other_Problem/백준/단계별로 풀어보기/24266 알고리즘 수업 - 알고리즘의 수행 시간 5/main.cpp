#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] �� A[j] �� A[k]; # �ڵ�1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
		
	//�ڵ�1�� ����Ƚ��
	cout<<n*n*n<<endl;
	//�ڵ�1�� ����Ƚ���� ���׽���  �ְ����� 
	cout<<3;
	
	
	return 0;
}

