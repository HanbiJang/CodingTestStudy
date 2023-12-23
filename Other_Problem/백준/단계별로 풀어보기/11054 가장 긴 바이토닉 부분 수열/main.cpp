#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		arr[i]=a;
	}
	
	vector<int> tmp_inc(n,0); //���� 
	vector<int> tmp_dec(n,0); //���� 

	// ���� �� �����ϴ� �κ� ���� ��� (�� ����) 
	for (int i = 0; i < n; ++i) { //�� 
		int maxVal = 1;
        for (int j = 0; j < i; ++j) { //�� 
			if(arr[j] < arr[i] && maxVal < tmp_inc[j]+1){
				maxVal = tmp_inc[j]+1;
			}
		}
		tmp_inc[i]=maxVal;
		
    }  
	// ���� �� �����ϴ� �κ� ���� ��� (�� ����) 
	for (int i = n-1; i >= 0; --i) { //�� 
		int maxVal = 1;
        for (int j = i+1; j < n; ++j) { //�� 
        		//���� �� Ŀ���� 
				if(arr[j] < arr[i] && maxVal < tmp_dec[j]+1){
				maxVal = tmp_dec[j]+1;
			}
		}
		tmp_dec[i]=maxVal;		 
    }

    
	// ���� �� ������� �κ� ���� ���� ���
	int res = 1; 
	for (int i = 0; i < n; ++i) {
		if(tmp_inc[i]+tmp_dec[i]-1>res)
			res = tmp_inc[i]+tmp_dec[i]-1;
    }	
	
	cout<<res;

	return 0;
}

