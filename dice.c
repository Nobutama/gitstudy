//サイコロプログラム
//getcharを使い単純な対話プログラムを作る

#include <stdio.h>
#include <stdlib.h> //srand(),rand()
#include <time.h>   //time()

int main(int argc,char *argv[])
{
    int c;

    srand(time(NULL)); //プログラムを実行する度にtime(NULL)でシステム時間を取得し乱数発生の種を再取得

    do {
        printf("%d\n",rand() % 6 +1);   //6-1までのランダムな数値を得る
        c = getchar();
    } while (c != 'q');
    return 0;
}
