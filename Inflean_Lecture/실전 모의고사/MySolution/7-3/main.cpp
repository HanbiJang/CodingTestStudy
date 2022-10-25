#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M; //�� ����,  
int N; // �л� �� 

int count(int n, vector<int> &arr){ 
	
	//�� ������
	int s=0;
	int cnt=0; //������ ���� ���� 
	for(int i=1; i<=N; i++){
		if(arr[i]<=n){		
			if(s+arr[i] <= n) s+=arr[i];
			else{
				s=arr[i];
				cnt++;
			}
		}
		else{
			return M+1; //�Ұ� 
		}
	}
	//������ ó��
	if(s<=n) cnt++; 
	
	return cnt;

}

vector<int> sumcount(int n, vector<int> &arr){ 
	vector<int> sums;
	//�հ� ���� 
	int s=0;
	for(int i=1; i<=N; i++){
		if(arr[i]<=n){		
			if(s+arr[i] <= n) s+=arr[i];
			else{
				sums.push_back(s);
				s=arr[i];
			}
		}
	}	
	//������ ó��
	if(s<=n) sums.push_back(s);
	
//	cout<<endl;
//	for(int i=0; i<sums.size(); i++){
//		cout<<sums[i]<<" ";
//	}
//	cout<<"//";

	
	return sums;

}

int main() {

	int ans = 2147000000;
	int sum=0;	 
	cin>>N>>M;	
	vector<int> arr(N+1);
	for(int i=1; i<=N; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	//�� ���� ������ ���� �ִ밪�� �ּҰ� �ǵ��� M���� ������ �� �ִ�
	int lt = arr[0] , rt = sum; 
	int mid; //���� ũ�� 
	
	while(lt<=rt){
		
		mid =(lt+rt)/2;
		
		int cnt = count(mid,arr);
		if(cnt==-1 || cnt > M){ //ŭ->������ ���� ũ�� 
			lt = mid+1;			
		}
		else if(cnt == M){ //����->������ ���� �۰� 
			vector<int> sums = sumcount(mid,arr);
			int max_ = *max_element(sums.begin(), sums.end());
			if(ans > max_) ans = max_;
			rt = mid - 1; 
		}
		else { //���� -> ������ ���� �۰� 
			rt = mid-1;
		}
		
		//cout<<mid<<" "<<cnt<<" / " <<ans<<endl;
		//cout<<ans<<endl;
	}
	
	cout<<ans;
	
	return 0;
}

