#include <iostream>


//���� �ܾ� ���� 
// ���ڿ��� ������ �����ϰ�, �ҹ��ڷ� ������� ����϶�
	//bE    au   T   I fu   L => beautiful �� �ٲ㼭 ���! 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[101], b[101];
	int i, pos=0;
	
	//* �߿� �Լ� ! *
	gets(a); //����, �����̽� ������� ���� �о���� 
	
	for(i =0; a[i] != '\0'; i++){
		if(a[i] != ' '){ //[1] ������ �ƴ� �� 
			if(a[i] >= 65 && a[i] <= 90){
				b[pos++] = a[i] + 32;
				//�ƽ�Ű�ڵ� �� �빮�ڿ��� �ҹ��ڷ� ���ϱ� +32�� �ϸ� �ҹ��ڷ� ���� 
			} 
			else b[pos++] = a[i]; 
		}
	} 
	b[pos] = '\0';
	printf("%s\n",b);
	
	return 0;
}
