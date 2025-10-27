# include <stdio.h>

void main(){
    long long int i = 2, num;
    int count;
    scanf("%lld", &num);
    while (i * i <= num){
        if (num % i == 0){
            printf("%lld ", i);
            num = num / i;

        }
        else{
            i++;
        }
    }
    if (num > 1){
        printf("%lld", num);
    }
}