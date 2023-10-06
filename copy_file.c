#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f1 , *f2;
    char a;

    f1 = fopen("lab1.txt", "r");
    if (f1 == NULL){
        printf("khong the mo file lab1.txt");
        exit(1);
    }

    f2 = fopen("lab1w.txt", "w");
    if (f2 == NULL){
        printf("khong the mo file lab1w.txt");
        exit(1);
    }

    while (a != EOF){
        a = fgetc(f1);
        if (a != EOF){
            fputc(a ,f2);
        }
    }
    printf("Sao chep noi dung file slab1.txt\n");
    printf("vao file lab1w.txt thanh cong!");
    
   return(0);
    }