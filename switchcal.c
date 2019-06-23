//p166
//switch文を利用した電卓プログラム
//演算子の入力に問題があった%sで受け取ればうまく機能した。
//入力待ち状態を作るという作業あまりやってこなかったのでかなり手間取った。

#include <stdio.h>
#include <stdlib.h> //exitのためだけに使う

int main(int argc,char *argv[])
{
    int a,b;
    char op;
    int answer=0;

    printf("put number a\n");
    scanf("%d",&a);    //数値を入力
    printf("put number b\n");
    scanf("%d",&b);    //数値を入力

    printf("put operator\n");
    scanf("%s",&op);       //+-*/を入力

    switch(op){
        case '+':
            answer = a + b;
            break;
        case '-':
            answer = a - b;
            break;
        case '*':
            answer = a * b;
            break;
        case '/':
            if(b == 0){
                printf("can't divide by 0\n");
            } else {
                answer = a/b;
            }
            break;
        default:
            printf("something wrong\n");
            exit(0);
    }
    printf("%d %c %d = %d",a,op,b,answer);
    return 0;
}
