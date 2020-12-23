#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void Task1()
{
    printf("������� 1\n");
    int a1,b1,c1,a2,b2,c2,k1,k2;
    printf("������� ���� �������� ������� ��������(��� ����� ����): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    k1=c1+b1*100+a1*10000;
    printf("������� ���� �������� ������� ��������(��� ����� ����): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    k2=c2+b2*100+a2*10000;
    char*s1="������ ������",*s2="������ ������",*s3="������ ��������";
    if(k1<k2)printf("%s\n",s1);
    else if(k2<k1)printf("%s\n",s2);
    else printf("%s\n",s3);
}

void Task2()
{
    printf("������� 2\n");
    double x,y;
    printf("������� ���������� �����(x y): ");
    scanf("%lf %lf",&x,&y);
    if(fabs(x)<=2&&fabs(y)<=2&&(x<=0||y<=0)&&sqrt(x*x+y*y)>=2)printf("����� ����������� ������ ������. ");
    else printf("����� �� ����������� ������ ������. ");
    x=fabs(x);
    y=fabs(y);
    if(x<=2&&y<=2&&y>=(-x+2))printf("����� ����������� ������ ������.\n");
    else printf("����� �� ����������� ������ ������.\n");
}

void Task3()
{
    printf("������� 3\n");
    double x;
    int f;
    printf("������� ������������ x: ");
    scanf("%lf",&x);
    if(x<0)f=0;
    else
    {
        if(((int)x)%2==0)f=1;
        else f=-1;
    }
    printf("f(%lf)=%d",x,f);
}

void swap(int*a,int*b)
{
    int t=*b;
    *b=*a;
    *a=t;
}

void Task4()
{
    printf("������� 4\n");
    int a1,b1,c1,a2,b2,c2;
    printf("������� ����� ������ ������� ������������(a b c): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    printf("������� ����� ������ ������� ������������(a b c): ");
    scanf("%d %d %d",&a2,&b2,&c2);
    if(a1>=b1&&a1>=c1)
    {
        if(b1<c1)swap(&b1,&c1);
    }
    else
    {
        if(b1>=a1&&b1>=c1)
        {
            swap(&a1,&b1);
            if(b1<c1)swap(&b1,&c1);
        }
        else
        {
            swap(&a1,&c1);
            if(b1<c1)swap(&b1,&c1);
        }
    }
    printf("%d %d %d\n",a1,b1,c1);
    if(a2>=b2&&a2>=c2)
    {
        if(b2<c2)swap(&b2,&c2);
    }
    else
    {
        if(b2>=a2&&b2>=c2)
        {
            swap(&a2,&b2);
            if(b2<c2)swap(&b2,&c2);
        }
        else
        {
            swap(&a2,&c2);
            if(b2<c2)swap(&b2,&c2);
        }
    }
    printf("%d %d %d\n",a2,b2,c2);
    if((double)a1/a2==(double)b1/b2&&(double)a1/a2==(double)c1/c2&&(double)c1/c2==(double)b1/b2)printf("������������ �������\n");
    else printf("������������ �� �������\n");
}

void Task5()
{
    printf("������� 5\n");
    int x,f;
    printf("������� ����� ����: ");
    scanf("%d",&x);
    if(x%4==0&&(x%100!=0||x%400==0))f=1;
    else f=0;
    printf("� %d ���� %d ����\n",x,365+f);
}

void Task6()
{
    printf("������� 6-1\n");
    int n;
    printf("������� ����� 20-69: ");
    scanf("%d",&n);
    switch(n)
    {
    case 20:
        printf("�������� ���");
        break;
    case 21:
        printf("�������� ���� ���");
        break;
    case 22:
        printf("�������� ��� ����");
        break;
    case 23:
        printf("�������� ��� ����");
        break;
    case 24:
        printf("�������� ������ ����");
        break;
    case 25:
        printf("�������� ���� ���");
        break;
    case 26:
        printf("�������� ����� ���");
        break;
    case 27:
        printf("�������� ���� ���");
        break;
    case 28:
        printf("�������� ������ ���");
        break;
    case 29:
        printf("�������� ������ ���");
        break;
    case 30:
        printf("�������� ���");
        break;
    case 31:
        printf("�������� ���� ���");
        break;
    case 32:
        printf("�������� ��� ����");
        break;
    case 33:
        printf("�������� ��� ����");
        break;
    case 34:
        printf("�������� ������ ����");
        break;
    case 35:
        printf("�������� ���� ���");
        break;
    case 36:
        printf("�������� ����� ���");
        break;
    case 37:
        printf("�������� ���� ���");
        break;
    case 38:
        printf("�������� ������ ���");
        break;
    case 39:
        printf("�������� ������ ���");
        break;
    case 40:
        printf("����� ���");
        break;
    case 41:
        printf("����� ���� ���");
        break;
    case 42:
        printf("����� ��� ����");
        break;
    case 43:
        printf("����� ��� ����");
        break;
    case 44:
        printf("����� ������ ����");
        break;
    case 45:
        printf("����� ���� ���");
        break;
    case 46:
        printf("����� ����� ���");
        break;
    case 47:
        printf("����� ���� ���");
        break;
    case 48:
        printf("����� ������ ���");
        break;
    case 49:
        printf("����� ������ ���");
        break;
    case 50:
        printf("��������� ���");
        break;
    case 51:
        printf("��������� ���� ���");
        break;
    case 52:
        printf("��������� ��� ����");
        break;
    case 53:
        printf("��������� ��� ����");
        break;
    case 54:
        printf("��������� ������ ����");
        break;
    case 55:
        printf("��������� ���� ���");
        break;
    case 56:
        printf("��������� ����� ���");
        break;
    case 57:
        printf("��������� ���� ���");
        break;
    case 58:
        printf("��������� ������ ���");
        break;
    case 59:
        printf("��������� ������ ���");
        break;
    case 60:
        printf("���������� ���");
        break;
    case 61:
        printf("���������� ���� ���");
        break;
    case 62:
        printf("���������� ��� ����");
        break;
    case 63:
        printf("���������� ��� ����");
        break;
    case 64:
        printf("���������� ������ ����");
        break;
    case 65:
        printf("���������� ���� ���");
        break;
    case 66:
        printf("���������� ����� ���");
        break;
    case 67:
        printf("���������� ���� ���");
        break;
    case 68:
        printf("���������� ������ ���");
        break;
    case 69:
        printf("���������� ������ ���");
        break;
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    printf("Task 1\n");
    int task;
    do
    {
        printf("������� ����� �������(0-�����,1-6)\n");
        scanf("%d",&task);
        switch(task)
        {
        case 0:
            break;
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        case 3:
            Task3();
            break;
        case 4:
            Task4();
            break;
        case 5:
            Task5();
            break;
        case 6:
            Task6();
            break;
        default:
            printf("������ ������� �� ���������");
            break;
        }
        printf("\n");
    }while(task!=0);
    return 0;
}
