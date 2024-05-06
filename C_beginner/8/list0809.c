#include<stdio.h>

int main(void){

	int ch;
	int cnt[10] = {0};

	while ((ch = getchar()) != EOF){
		switch (ch){
			case '0':
				cnt[0]++;
				break;

		}
	}

	return 0;
}
