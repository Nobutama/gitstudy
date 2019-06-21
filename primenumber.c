//for 文を利用して1-100までの素数を抽出する。
#include <stdio.h>

int main(int argc,char *argv[])
{
    int i,j,end;
    int flag;

    end = 100;

    for(i = 1;i < end;i++){     //iが素数かどうか判定する
        for(j = 2;j < i;j++){   //jが割る数、1とi以外の数で割り切れたら弾く
            if(i%j == 0){
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
        if(flag == 1){
            printf("%d is a prime number\n",i);
        }
    }
    return 0;
}
