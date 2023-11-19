#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

int mystrcmp(const char* str1, const char* str2)
{
    if (strlen(str1) == strlen(str2))
    {
        return 0;
    }
    else if (strlen(str1) > strlen(str2))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int StringToNumber(char* str)
{
    int res = atoi(str);
    return res;
}

char* NumberToString(int number, char* str)
{
    sprintf(str, "%d", number);
    return str;
}

char* UpperCase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = toupper(str1[i]);
    }
    return str1;
}

char* LowerCase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    return str1;
}

void mystrrev(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - i - 1]);
    }
}

int main()
{
    char str1[20] = { "Hello, world!" };
    char str2[20] = { "Hello, world!" };
    cout << mystrcmp(str1, str2) << endl;

    char str[] = { "11" };
    cout << StringToNumber(str) << endl;

    int number = 9;
    char NumToStr[30];
    cout << NumberToString(number, NumToStr) << endl;

    char strr[] = { "Test String" };
    cout << UpperCase(strr) << endl;

    char STR[] = { "Test String" };
    cout << LowerCase(STR) << endl;

    char oldStr[] = { "Hello, World!" };
    mystrrev(oldStr);
    cout << oldStr << endl;

    return 0;
}