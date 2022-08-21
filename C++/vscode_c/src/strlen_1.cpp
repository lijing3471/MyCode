#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

#define MAX 1001;
int main()
{
    // char str[MAX];
    //char只能存放单个字符，而String则是存放多个字符(字符串)。

    int c;
    cin >> c;

    // string str;
    // char s;  
    // getline(cin, str);
    // cin >> s;
    // int len = str.length();
    // int count_n = 0;
    // // int len = strlen(str);
    cout << typeid(c).name() << endl;
    // if(s>='A' && s<='Z'){
    //     s = s + 32;
    //     // cout << s;

    // }
    // for(int i = 0; i < len; i++)
    // {
    //     char st = 'a';
    //     if(str[i]>='A' && str[i]<='Z'){
    //         st = str[i] + 32;
    //     }
    //     else{
    //         st = str[i];
    //     }

    //     if(st==s){
    //         count_n++;
    //     }       
    // }
    // cout << count_n << "\n";
    // return 0;
}


