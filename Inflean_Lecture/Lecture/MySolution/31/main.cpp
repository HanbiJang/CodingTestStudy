#include <iostream>

using namespace std;

int main() {
	char str[9];	
	int cnt = 0;
	int k=0;
	
	// C = 12, H = 1
	// ���� �ޱ�
	scanf("%s", &str);
	
	for(int i=0; str[i]!='\0'; i++){
		
		if(str[i]!='C'){
			if(str[i]=='H') 
			{
				if(k==0) cnt += 12; // C�� 1 
				else {
					cnt += k * 12;
					k=0;
				}
				
				if(str[i+1] == '\0') cnt += 1; // H�� 1 
			}			
			else{ // ���� ���� ��� 
				k = k*10 + ((int)str[i]-'0');
				if(str[i+1]=='\0') cnt += k; // H�� 
			}
		}
		
	}
	
	printf("%d",cnt);
	
	return 0;
}

