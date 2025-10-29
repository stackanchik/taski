#include <stdio.h>

void main() {    
    int num, count = 0;
    scanf("%d",&num);
    while (num > 9){
        count = count + num % 10;
        num = num / 10;
        if (num < 10){
            num = num + count;
            count = 0;
        }
    }
    count = count + num;
    printf("%d",count);
}