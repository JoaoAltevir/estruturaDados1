#include <stdio.h>

int fatorial(int num){
    if(num <= 1){
        return 1;
    }else{
        return num * fatorial(num - 1);
    }
}

int main(){
    int num = 5, res;
    res = fatorial(num);
    printf("%d\n", res);
    system("pause");
    return 0;
}
