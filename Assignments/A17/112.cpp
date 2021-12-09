#include <stdio.h>

int answer;


int solution(int sum, int t, char *c){
	int flag = 0, ph, neg;
	while(*c == ' ' || *c == '\n')
		*c = getchar();
	if(*c == '('){
		ph = 0, flag = 0, neg = 1;
		while(*c = getchar()){
			if(*c >= '0' && *c <= '9')
				ph = ph*10 + *c - '0', flag = 1;
			else {
				if(*c == '-'){neg = -1;}
				else{break;}
			} 
		}
		ph *= neg;
		while(*c == ' ' || *c == '\n')
			*c = getchar();
		if(flag == 0){
			return 0;
		}
		int left = solution(sum+ph, t, c);
		while((*c = getchar()) != '(');
		int right = solution(sum+ph, t, c);
		while((*c = getchar()) != ')');
		if(left == 0 && right == 0){
			if(sum+ph == t){answer = 1;}
		}
		return 1;
	}
}


int main(){
	int t;
	char c;
	while(scanf("%d", &t) != EOF){
		answer = 0;
		c = getchar();
		solution(0, t, &c);
		if(answer == 1)
			printf("yes");
		else
			printf("no");
	}
    return 0;
}