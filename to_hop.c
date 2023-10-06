#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int n;
int kt_hoan_vi[100] = {0};
int hoan_vi[100];

void xuat(){
    for (int i = 1; i <= n; i++)
        printf("%d ",hoan_vi[i]);
    printf("\n");
}

void try(int k){
    for (int i = 1; i <= n; i++)
    {
        if(kt_hoan_vi[i] == 0){
            kt_hoan_vi[i] = 1;
            hoan_vi[k] = i;
            if( k == n)
                xuat();
            else
                try(k +1);
            kt_hoan_vi[i] = 0;
        }
    }
}

int main(void){
    printf("Nhap vao n: ");
    scanf("%d", &n);
    try(1);
    return 0;
}