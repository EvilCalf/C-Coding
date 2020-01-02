/* 本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。*/
#include <math.h>
#include <stdio.h>

int main()
{
    int letter, blank, digit, other;
    char ch;
    letter = blank = digit = other = 0;
    for (int i = 1; i <= 10; i++)
    {
        ch = getchar();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letter++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch == ' ' || ch == '\n')
        {
            blank++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    return 0;
}
