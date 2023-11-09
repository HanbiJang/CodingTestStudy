#include <iostream>
#include <vector> 
using namespace std;

//��Ŭ���� ȣ����
//a�� b�� ��ü�ϰ� b�� a��b�� �������� ��ü�� 
int GetAGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GetAGcd(b, a % b);
}

int main(){
	
	//��� ������ ������ ������ ���� �ɾ�� �ϴ� ���μ��� �ּҼ��� ���϶�
	//��� ���� ���� ���ݵ��� gcd�� ���ؼ� [�� ���� �� -1] ���� ���� ���ϸ� �� 
		
	int N; //�̹� �ɾ����ִ� ���μ��� ��
	int res = 0;
	vector<int> arr; //�޸� ���� ���� 128MB ���� 
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int a;
		scanf("%d", &a);
		arr.push_back(a);
	}
	
	vector<int> tmp; //���� �� ���ϱ� 
	for(int i=0; i<arr.size()-1; i++){
		tmp.push_back(arr[i+1] - arr[i]);
	}
	
	//���ݰ� tmp�迭�� gcd ���ϱ� 
	int gcd = tmp[0];
	for(int i=1; i<tmp.size(); i++){
		gcd = GetAGcd(gcd, tmp[i]);
	}
	
	/* //�ð��ʰ� 
	for(int i=0; i<tmp.size()-1; i++){
		for(int j=min(tmp[i], tmp[i+1]); j>=2; --j){
			if(tmp[i+1]%j==0 && tmp[i]%j==0){
				if(gcd>j) gcd = j;					
				break;
			}
		}		
	}
	*/	
	
	for(int i=0; i<tmp.size(); i++){
		res += ( (tmp[i]/gcd)==0?0:tmp[i]/gcd-1 );
		//res += ( tmp[i]/gcd-1 ); 
	}
	printf("%d", res);
	
	return 0;
}

