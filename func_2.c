//簡単な関数
//関数を呼び出せば引数二つを＋して返す。
//関数を横断する変数の動きをテスト

#include <stdio.h>

int sub(int ,int);

int sub(int a,int b)
{
    a-=b;
    a+=7775;s
    return a;
}

int main(int argc,char *argv[])
{
    int a=2;
    int answer;

    printf("before sub() a = %d\n",a);

    answer= sub(a,1);
    //関数を呼んで変数を使うということは、呼び出し元とはまったく違うメモリ領域に変数が確保されることになる。
    //名前が同じでも値を別の関数で書き換えて一切影響なし。
    printf("after sub() a = %d\n",a);
    printf("answer = %d\n",answer);

    return 0;
}
