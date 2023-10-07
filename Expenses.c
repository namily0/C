//return charができないところで一旦終了.
#include <stdio.h>

void NullCheck(FILE *Fchecker)
{
    if (Fchecker == NULL)
        printf("File is not exist\n");
    else
        printf("File is exist\n");
}

char Payee()
{
    char str[256];

    printf("何にお金を使いましたか？\n");
    scanf("%s",str);

    return str;
}

int HowMuch()
{
    int amount = 0;
    printf("いくらお金を使いましたか？\n");
    scanf("%d",&amount);

    return amount;
}

int main()
{
    FILE *f = fopen("data.txt", "a");
    NullCheck(f);
    
    int howmuch = HowMuch(); // how much money did you spend?
    printf("あなたの使った金額は ");
    printf("%d",howmuch);
    printf("円です。\n");

    char str[256];
    str = Payee();
    printf("あなたは ");
    printf("%s",str);
    printf(" にお金を使いました。");

    fclose(f);

    return 0;
}
