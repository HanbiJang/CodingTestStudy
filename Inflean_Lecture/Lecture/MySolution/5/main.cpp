//#include <iostream>
#include <stdio.h>
//�ֹ� ��� ��ȣ�� ���̸� ����ؼ� ����϶� 
//���ڸ� ù�� 2,4 ���� 1,3 ����  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//scanf ��  printf�� ��뷮 ����¿� ������ (cin cout����)
	char a[20];
	int age, year;
	
	scanf("%s",&a); //�ֹ� ��ȣ�� ���ڿ� ���·� �޾�����
	
	//[1] ���� ����ϱ� 
	//1)19xx��� �϶� 2)20xx��� �϶�  
	//** �ƽ�Ű�ڵ� 48 = '0' ** 
	if(a[7]=='1' || a[7]=='2') year = 1900 + (a[0]-48)*10 + (a[1]-48);
	else year =  2000 + (a[0]-48)*10 + (a[1]-48);
	
	age = 2019 -year+1; //���� ���� 2019
	
	printf ("%d", age);
	
	//[2] ���� �����ϱ� 
	if(a[7]=='1'|| a[7] == '3') printf("M\n");
	else printf("W\n");
	
	
	return 0;
}
