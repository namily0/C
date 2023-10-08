//return charができないところで一旦終了.
#include <stdio.h>

void NullCheck(FILE *Fchecker)
{
    if (Fchecker == NULL)
        printf("File is not exist\n");
    else
        printf("File is exist\n");
}

void Payee()
{
    char str[256];

    printf("何にお金を使いましたか？\n");
    scanf("%s",str);   
    printf("あなたは ");
    printf("%s",str);
    printf(" にお金を使いました。\n");
}

void HowMuch()
{
    int amount = 0;
    printf("いくらお金を使いましたか？\n");
    scanf("%d",&amount);
    printf("あなたの使った金額は ");
    printf("%d",amount);
    printf("円です。\n");
}

int EndCheck()
{
    int endcheck = 0;
    printf("買い物は以上ですか？\n入力を終了したいなら 0 を入力してください。そうでないのなら0以外の整数を入力してください。");
    scanf("%d",&endcheck);
    return endcheck;
}

int main()
{

    FILE *f = fopen("data.txt", "a");
    NullCheck(f);
    do
    {
        HowMuch();
        Payee();
    }while(EndCheck());

    
    fclose(f);

    return 0;
}
