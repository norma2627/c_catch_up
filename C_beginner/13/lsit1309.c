#include<ctype.h>
#include<stdio.h>

int main (void){

    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名: ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "rb")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        int n;
        unsigned long count = 0;
        unsigned char buf[16];

        while ((n = fread(buf, 1, 16, fp)) > 0){
            printf("%08lX ", count);

            for (int i = 0; i < n; i++){
                print("%02X ", (unsigned)buf[i]);
            }

            if (n < 16){
                for (int i = n; i < 16; i++){
                    printf("   ");
                }
            }

            for (int i = 0; i < n; i++){
                putchar(isprint(buf[i] ? buf[i] : '.'));
            }
            putchar('\n');
        }
        fclose(fp);
    }

    return 0;
}