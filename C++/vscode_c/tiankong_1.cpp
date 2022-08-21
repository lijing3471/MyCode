#include <iostream>
#include<limits>
int my_atoi(char *s)
{
    int i = 0;
    res = 0;
    bool is_negative = false;
    size_t len = sizeof(s);
    while((i<len) && *(s+1)=' ')
        i++;
    if(i==len)
    {
        return 0;
    }
    if(*(s+i)=='-')
    {
        is_negative = true;
        i++;
    }
    else if(*(s+i)=='+'){
        i++;
    }
    while((i<len) && (isdigit(*(s+i))))
    {
        int number = *(s + i) -‘0’;
        if((res*10+number)>INT_MAX)
        {
            return is_negative ? INT_MIN : INT_MAX;
        }
        res = res * 10 + number;
        i++;
    }
    return is_negative ? res : -res;
}

int main(void)
{
    int res = 0;
    char mystr[10] = " 367+hd";
    res = my_atoi(mystr);
    printf("My change string:%s to intgeger:%d\n", mystr, res);
    return 0;
}