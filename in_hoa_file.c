#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void CharReadWrite(FILE *fin, FILE *fout){
    int c;
    while ((c=fgetc(fin)) != EOF){
        if islower(c) c=toupper(c);
        //else if isupper(c) c=tolower(c);
        fputc(c, fout);
        putchar(c);
}
}

int main(){
    FILE *fp1 ,*fp2;
    fp1 = fopen("lab1.txt", "r");
    if(fp1 == NULL){
        printf("Khong the mo file");
        exit(1);
    }

    fp2 = fopen("lab1upper.txt", "w");
    if(fp2 == NULL){
        printf("Khong the mo file");
        exit(1);
    }
    CharReadWrite(fp1,fp2);

    return 0;
}