//return char���ł��Ȃ��Ƃ���ň�U�I��.
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
    printf("�����炨�����g���܂������H\n");
    scanf("%d",&amount);
    printf("���Ȃ��̎g�������z�� ");
    printf("%d",amount);
    printf("�~�ł��B\n");

    fprintf(f,"%d,",amount);
}

void Payee(FILE *f)
{
    char str[256];

    printf("���ɂ������g���܂������H\n");
    scanf("%s",str);   
    printf("���Ȃ��� ");
    printf("%s",str);
    printf(" �ɂ������g���܂����B\n");

    fprintf(f,str);
    fprintf(f,"\n");
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
        Today(f);
        HowMuch(f);
        Payee(f);
    }while(EndCheck());

    return 0;
}
