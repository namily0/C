//return char���ł��Ȃ��Ƃ���ň�U�I��.
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

    printf("���ɂ������g���܂������H\n");
    scanf("%s",str);

    return str;
}

int HowMuch()
{
    int amount = 0;
    printf("�����炨�����g���܂������H\n");
    scanf("%d",&amount);

    return amount;
}

int main()
{
    FILE *f = fopen("data.txt", "a");
    NullCheck(f);
    
    int howmuch = HowMuch(); // how much money did you spend?
    printf("���Ȃ��̎g�������z�� ");
    printf("%d",howmuch);
    printf("�~�ł��B\n");

    char str[256];
    str = Payee();
    printf("���Ȃ��� ");
    printf("%s",str);
    printf(" �ɂ������g���܂����B");

    fclose(f);

    return 0;
}
