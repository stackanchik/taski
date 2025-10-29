#include<stdio.h>

void main()
{   
    long long int num;
    int A[20], i = 0, j = 0, flag = 1;
    scanf("%lld", &num);
    while(num > 9){
        A[i] = num % 10;
        i++;
        num = num / 10;
    }
    A[i] = num;
    while ((j < i/2) &&(flag == 1)){
        if(A[j] != A[i-j]){
            flag = 0;
        }
        else {
            j++;
        }
    }
    if (flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }

}