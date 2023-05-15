#include <stdio.h>
//打印9*9乘法表
int main() {
    for(int i = 1; i<=9 ;i++){
        for(int j = 1;j<=9;j++){
            if(j<=i){
                int res = i*j;
                printf("%d*%d=%d\t",j,i,res);
            }

        }
        printf("\n");
    }
    return 0;
}
