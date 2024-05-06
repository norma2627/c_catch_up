#inclde<stdio.h>

enum animal {Dog, Cat, Monkey, Invalid};

void dog(void){
	puts("ワンワン");
}

void cat(void){
	puts("にゃーお");
}

void monkey(void){
	puts("キッキッ");
}

enum animal select(void){
	int temp;
	do {
		printf("犬:0, 猫:1, 猿:2, 終了:3・・・");
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void){
	enum animal selected;

	do {
		switch (selected = select()){
			case Dog : dog();
				   break;
			case Cat : cat();
				   break;
			case Monkey : monkey();
				      break;
		}
	} while (selected != Invalid);

	return 0;
}
