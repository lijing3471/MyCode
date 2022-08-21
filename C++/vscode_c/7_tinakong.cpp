// #include <iostream>
// #include<limits>
// using namespace std;
// struct{
//     char a1;
//     char *a2;
//     long a3;
//     char a4;
// } A;
// char str[] = "hello";
// char *p = str;
// int n = 1;
// void fun(void)
// {
//     int LenA = sizeof(A);
//     int LenB = sizeof(str);
//     int LenC = sizeof(p);
//     int LenD = sizeof(n);
//     cout << LenA << endl;
//     cout << LenB << endl;
//     cout << LenC << endl;
//     cout << LenD << endl;
//     return;
// }
// int main()
// {
//     fun();
// }

#include<iostream>

using namespace std;
#define SQR(x) (x*x)
int Fib(int n)

{

    if (n == 1 || n == 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);//这里其实就已经利用了定义的函数进行了循环

}
int main()

{

    // int n;
    // double re;
    // double &res = re;
    // while (cin >> n) {

    //     cout << Fib(n) << endl;

    // }
    // char var[] = "Hello World!";
    // char *p = var;
    int a = 3;
    printf("%d,%d\n", SQR(a+2), SQR((a+2)));
}

