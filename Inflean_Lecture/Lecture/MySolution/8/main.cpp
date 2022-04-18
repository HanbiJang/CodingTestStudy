#include <iostream>

//올바른 괄호
//괄호가 입력되는데, 올바르면 YES, 올바르지 않으면 NO 출력
//여는 괄호가 있는데 닫는 괄호가 없으면 올바르지 않은 것임 
// [스택 미사용 방법]

// 괄호 당 1 로 값을 할당하고, 닫는 괄호는 -1 음수로 할당한다 => 최종 값이 0 이 아니면 거짓!  

int main(int argc, char** argv) {
	char a[101];
	int i, cnt = 0;
	
	scanf("%s", &a);
	
	for(i =0; a[i] != '\0'; i++){
		if(a[i]=='('){
			cnt += 1;
		}
		else if(a[i]==')'){
			cnt -= 1;
		}
		
		if(cnt <0) break; //중간에 음수가 나오는 경우는 닫는 괄호가 더 많은 경우이므로 무조건 거짓!
		 
	}
	
	if(cnt == 0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
