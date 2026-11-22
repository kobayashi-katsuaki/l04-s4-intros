#include <stdio.h>

int main(void)
{
    char name[20];
    int age; //ユーザの年齢

    //名前と年齢の入力
    printf("名前と年齢を入力してください");
    scanf("%s %d", name, &age);

    //結果の表示
    printf("%s さんは %d 歳です。\n", name ,age);

    return 0;
}

