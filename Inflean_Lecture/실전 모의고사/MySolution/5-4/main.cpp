#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n1,n2,n3;
string str1,str2;
int arr[3001][3001]; //dp 

int main() {

	cin>>n1>>n2>>n3;	
	cin>>str1>>str2;
	
	str1.insert(str1.begin(),' ');
	str2.insert(str2.begin(),' ');
	
	//[1] ���� ��� n1
	//[2] �ϳ��� ���� n2
	//[3] ���� �ٸ� ��� n3
	
	//�Ǿտ� ������ �� �� ����
	for(int i=1; i<str1.size();i++) arr[i][0]= i*n2;
	for(int i=1; i<str2.size();i++) arr[0][i]= i*n2;
	
	for(int i=1; i<str1.size(); i++){
		for(int j=1; j<str2.size(); j++){
			if(str1[i]==str2[j]){
				arr[i][j]=arr[i-1][j-1]	+ n1;
			}
			else{
				//4���� ����߿� �ϳ�
				int a,b,c,d;
				
				a  = arr[i-1][j-1]+n2*2;
				b  = arr[i-1][j-1]+n3;
				c  = arr[i][j-1] + n2;
				d  = arr[i-1][j] + n2;
				
				arr[i][j]=max(a,b);
				arr[i][j]=max(arr[i][j],c);
				arr[i][j]=max(arr[i][j],d);
			}
			//cout<<arr[i][j]<<" ";
		}
		//cout<<endl;
	}
	 
	cout<<arr[str1.size()-1][str2.size()-1];
	
	return 0 ;
}

