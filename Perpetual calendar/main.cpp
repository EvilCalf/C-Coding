#include <iostream>
using namespace std;

class Calendar
{
public:
    Calendar()
    {
        TotalDays = 0;
        MonthDays = 0;
        system("clear");
    };

    void Get_time();
    void Total_days();

    void Week_days();

    void Month_days();

    void print();

private:
    int Year;
    int Month;
    int TotalDays;
    int WeekDays;
    int MonthDays;
};

void Calendar::Get_time() //获取时间
{
    printf("请输入您要查询的年份和月份\n");
    scanf("%d", &Year);
    scanf("%d", &Month);
    cout << endl;
}

void Calendar::Total_days() //计算总天数
{
    int year, month;
    for (year = 1900; year < Year; year++)
    {
        if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
        {
            TotalDays += 366;
        }
        else
        {
            TotalDays += 365;
        }
    }

    for (month = 1; month < Month; month++)
    {
        if (month == 2)
        {
            if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
            {
                month += 29;
            }
            else
            {
                month += 28;
            }
        }
        else
        {
            if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
            {
                month += 30;
            }
            else
            {
                month += 31;
            }
        }
    }
    TotalDays += month;
}

void Calendar::Week_days() //计算所查询月份的第一天是星期几
{
    TotalDays += 1;
    WeekDays = TotalDays % 7;
}

void Calendar::Month_days() //计算所查询月份的总天数
{
    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
    {
        MonthDays = 29;
    }
    else
    {
        if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
        {
            MonthDays = 30;
        }
        else
        {
            MonthDays = 31;
        }
    }
}

void Calendar::print() //打印日历
{
    Total_days();
    Week_days();
    Month_days();
    int i;
    printf(" 日 一 二 三 四 五 六\n");
    for (i = 0; i < WeekDays; i++)
    {
        printf("   ");
    }

    for (i = 1; i < MonthDays; i++)
    {
        if ((WeekDays + i) % 7 == 0)
        {
            printf("%3d\n");
            continue;
        }
        printf("%3d", i);
    }
    cout << endl;
}

int main()
{
    int Year, Month;
    Calendar cal;
    cal.Get_time();
    cal.print();
    return 0;
}
