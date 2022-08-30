#include<iostream>
using namespace std;


int length(char s[])
{
    int c = 0;
    while(s[c] != '\0')
        c++;
    return c;
}

void toUpper(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        i++;
    }
}

void toLower(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        i++;
    }
}

void reverse(char s[])
{
    int l = length(s);
    for (int i = 0; i < l/2; i++)
    {
        char temp = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = temp;
    }
}

int main()
{
    char s[10] = "Pranav";
    toUpper(s);
    for(int i = 0; i<7; i++)
        cout<<s[i];
    cout<<endl<<length(s);
}