//return char���ł��Ȃ��Ƃ���ň�U�I��.
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

    printf("���ɂ������g���܂������H\n");
    scanf("%s",str);   
    printf("���Ȃ��� ");
    printf("%s",str);
    printf(" �ɂ������g���܂����B\n");
}

void HowMuch()
{
    int amount = 0;
    printf("�����炨�����g���܂������H\n");
    scanf("%d",&amount);
    printf("���Ȃ��̎g�������z�� ");
    printf("%d",amount);
    printf("�~�ł��B\n");
}

int EndCheck()
{
    int endcheck = 0;
    printf("�������͈ȏ�ł����H\n���͂��I���������Ȃ� 0 ����͂��Ă��������B�����łȂ��̂Ȃ�0�ȊO�̐�������͂��Ă��������B");
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
