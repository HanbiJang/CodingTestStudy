#include <iostream>

using namespace std;

/*
MenOfPassion(A[], n) 
{
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] �� A[j]; # �ڵ�1
    return sum;
}

*/
int main(){
	
	ios_base::sync_with_stdio(false);

	long long n;
	cin>>n;
	
	long long sum = 0;
	
	
	//�ڵ�1�� ����Ƚ��
	cout<<n*(n+1)/2 - n<<endl;
	
/*
����:
i : 1~n-1

�ڵ�1�� ���� Ƚ�� = n-i 

if) �ڵ�1�� ����Ƚ�� 
i = 1 -> n-1
i = 2 -> n-2
i = 3 -> n-3
...
i = n-1 -> 1

���� ���� �� ����Ƚ���̹Ƿ� n(n+1)/2 - n
*/
	//�ڵ�1�� ����Ƚ���� ���׽���  �ְ����� 
	cout<<2;
	
	
	return 0;
}

