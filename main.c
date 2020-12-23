#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void Task1()
{
    printf("Задание 1\n");
    int a1,b1,c1,a2,b2,c2,k1,k2;
    printf("Введите дату рождения первого человека(год месяц день): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    k1=c1+b1*100+a1*10000;
    printf("Введите дату рождения второго человека(год месяц день): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    k2=c2+b2*100+a2*10000;
    char*s1="Первый старше",*s2="Второй старше",*s3="Одного возраста";
    if(k1<k2)printf("%s\n",s1);
    else if(k2<k1)printf("%s\n",s2);
    else printf("%s\n",s3);
}

void Task2()
{
    printf("Задание 2\n");
    double x,y;
    printf("Введите координаты точки(x y): ");
    scanf("%lf %lf",&x,&y);
    if(fabs(x)<=2&&fabs(y)<=2&&(x<=0||y<=0)&&sqrt(x*x+y*y)>=2)printf("Точка принадлежит второй фигуре. ");
    else printf("Точка не принадлежит второй фигуре. ");
    x=fabs(x);
    y=fabs(y);
    if(x<=2&&y<=2&&y>=(-x+2))printf("Точка принадлежит первой фигуре.\n");
    else printf("Точка не принадлежит первой фигуре.\n");
}

void Task3()
{
    printf("Задание 3\n");
    double x;
    int f;
    printf("Введите вещественный x: ");
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
    printf("Задание 4\n");
    int a1,b1,c1,a2,b2,c2;
    printf("Введите длины сторон первого треугольника(a b c): ");
    scanf("%d %d %d",&a1,&b1,&c1);
    printf("Введите длины сторон второго треугольника(a b c): ");
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
    if((double)a1/a2==(double)b1/b2&&(double)a1/a2==(double)c1/c2&&(double)c1/c2==(double)b1/b2)printf("Треугольники подобны\n");
    else printf("Треугольники не подобны\n");
}

void Task5()
{
    printf("Задание 5\n");
    int x,f;
    printf("Введите номер года: ");
    scanf("%d",&x);
    if(x%4==0&&(x%100!=0||x%400==0))f=1;
    else f=0;
    printf("В %d году %d дней\n",x,365+f);
}

void Task6()
{
    printf("Задание 6-1\n");
    int n;
    printf("Введите число 20-69: ");
    scanf("%d",&n);
    switch(n)
    {
    case 20:
        printf("Двадцать лет");
        break;
    case 21:
        printf("Двадцать один год");
        break;
    case 22:
        printf("Двадцать два года");
        break;
    case 23:
        printf("Двадцать три года");
        break;
    case 24:
        printf("Двадцать четыре года");
        break;
    case 25:
        printf("Двадцать пять лет");
        break;
    case 26:
        printf("Двадцать шесть лет");
        break;
    case 27:
        printf("Двадцать семь лет");
        break;
    case 28:
        printf("Двадцать восемь лет");
        break;
    case 29:
        printf("Двадцать девять лет");
        break;
    case 30:
        printf("Тридцать лет");
        break;
    case 31:
        printf("Тридцать один год");
        break;
    case 32:
        printf("Тридцать два года");
        break;
    case 33:
        printf("Тридцать три года");
        break;
    case 34:
        printf("Тридцать четыре года");
        break;
    case 35:
        printf("Тридцать пять лет");
        break;
    case 36:
        printf("Тридцать шесть лет");
        break;
    case 37:
        printf("Тридцать семь лет");
        break;
    case 38:
        printf("Тридцать восемь лет");
        break;
    case 39:
        printf("Тридцать девять лет");
        break;
    case 40:
        printf("Сорок лет");
        break;
    case 41:
        printf("Сорок один год");
        break;
    case 42:
        printf("Сорок два года");
        break;
    case 43:
        printf("Сорок три года");
        break;
    case 44:
        printf("Сорок четыре года");
        break;
    case 45:
        printf("Сорок пять лет");
        break;
    case 46:
        printf("Сорок шесть лет");
        break;
    case 47:
        printf("Сорок семь лет");
        break;
    case 48:
        printf("Сорок восемь лет");
        break;
    case 49:
        printf("Сорок девять лет");
        break;
    case 50:
        printf("Пятьдесят лет");
        break;
    case 51:
        printf("Пятьдесят один год");
        break;
    case 52:
        printf("Пятьдесят два года");
        break;
    case 53:
        printf("Пятьдесят три года");
        break;
    case 54:
        printf("Пятьдесят четыре года");
        break;
    case 55:
        printf("Пятьдесят пять лет");
        break;
    case 56:
        printf("Пятьдесят шесть лет");
        break;
    case 57:
        printf("Пятьдесят семь лет");
        break;
    case 58:
        printf("Пятьдесят восемь лет");
        break;
    case 59:
        printf("Пятьдесят девять лет");
        break;
    case 60:
        printf("Шестьдесят лет");
        break;
    case 61:
        printf("Шестьдесят один год");
        break;
    case 62:
        printf("Шестьдесят два года");
        break;
    case 63:
        printf("Шестьдесят три года");
        break;
    case 64:
        printf("Шестьдесят четыре года");
        break;
    case 65:
        printf("Шестьдесят пять лет");
        break;
    case 66:
        printf("Шестьдесят шесть лет");
        break;
    case 67:
        printf("Шестьдесят семь лет");
        break;
    case 68:
        printf("Шестьдесят восемь лет");
        break;
    case 69:
        printf("Шестьдесят девять лет");
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
        printf("Введите номер задания(0-выход,1-6)\n");
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
            printf("Данное задание не выполнено");
            break;
        }
        printf("\n");
    }while(task!=0);
    return 0;
}
