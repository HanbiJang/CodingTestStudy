//#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// ���ڸ� ���� : 
// ���ڿ� ���ڰ� ���� ���ڿ����� ���ڸ� �����ϰ�, �� ��� ������ �����϶�
 
 
int main(int argc, char** argv) {
	char a[100]; //�ִ� ���� 100�ڸ�
	int result = 0, cnt = 0, i;
	
	//���ڿ� �ޱ� 
	scanf("%s", &a);
	
	//a[i] != '\0' �� �ǹ�: ���ڿ��� ���� �˸��� ���� = \0 
	for(i =0; a[i] != '\0';i++){
		//a�� ����ִ� ���� ���ڶ��, 
		if(a[i] >= 48 && a[i] <= 57){ //�ƽ�Ű �ڵ�� 0���� 9������ ���� ���� 
			result = result * 10 + (a[i]-48); 
			//���� ��� ���ڿ��� 0,2,8, �̶�� 0 -> 2 -> 28 ������ �������  
		}
		
	} 
	printf("%d\n", result);
	for(i=1; i<=result; i++){
		if(result%i ==0) cnt++;
	}
	printf("%d\n",cnt);
	
	
	return 0;
}
