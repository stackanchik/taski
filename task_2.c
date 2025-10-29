#include <stdio.h>

void main(){
    long int num, answer;
    int flag, i, B[10] = {0};

    scanf("%ld",&num);
    while(flag != 0 ){
        flag = 0;
        i = 0;
        num ++;
        answer = num;
        for (int k = 0; k < 10; k++){
            B[k] = 0;
        }
        while(answer > 0){            
            B[answer % 10]++;
            answer = answer / 10;
            i++;
        }
        for (int j = 0; j < 10; j++){
            if(B[j] > 1){
                flag ++;
            }
        } 
    }
    printf("%ld", num);
}