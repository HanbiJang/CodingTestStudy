#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int as=0, bs=0; // A�� B�� ���ھ�
	int card_a[10], card_b[10];
	int lastMatchIdx;
	char* result;
	
int main(int argc, char** argv) {	
	// ���� �ޱ� 
	for(int i=0; i<10; i++){
		scanf("%d", &card_a[i]);
	}
	
	for(int i=0; i<10; i++){
		scanf("%d",&card_b[i]);
	}
	
	// ���� ���ϱ�
	for(int i=0; i<10; i++){
		if(card_a[i] > card_b[i]){
			as += 3;
			lastMatchIdx = i;
		}
		else{
			if(card_a[i]==card_b[i]) {
				as += 1;
				bs += 1;
			}
			else{
				bs += 3;
				lastMatchIdx = i;
			}
		}
	} 
	
	if(as==bs){
		if(card_a[lastMatchIdx] > card_b[lastMatchIdx]){
			result = "A";
		}
		else if (card_a[lastMatchIdx] < card_b[lastMatchIdx]){
			result = "B";
		}
		else result = "D";
	}
	else if(as > bs){
		result = "A";
	}
	else result = "B";
	
	printf("%d %d\n%s", as, bs, result);
			
	return 0;
}
