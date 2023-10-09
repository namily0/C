#include <stdio.h>
#include <time.h>

void NullCheck(FILE *Fchecker)
{
    if (Fchecker == NULL)
        printf("File is not exist\n");
    else
        printf("File is exist\n");
}

void Today(FILE *f)
{
    time_t t = time(NULL);
    struct tm *local = localtime(&t);

    fprintf(f,"%04d/%02d/%02d ",local->tm_year + 1900,local->tm_mon + 1,local->tm_mday);
}

void HowMuch(FILE *f)
{
    int amount = 0;
    printf("いくらお金を使いましたか？\n");
    scanf("%d",&amount);
    printf("あなたの使った金額は ");
    printf("%d",amount);
    printf("円です。\n");

    fprintf(f,"%d,",amount);
}

void Payee(FILE *f)
{
    char str[256];

    printf("何にお金を使いましたか？\n");
    scanf("%s",str);   
    printf("あなたは ");
    printf("%s",str);
    printf(" にお金を使いました。\n");

    fprintf(f,str);
    fprintf(f,"\n");
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
        Today(f);
        HowMuch(f);
        Payee(f);
    }while(EndCheck());

    return 0;
}
