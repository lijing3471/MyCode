#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int data[n][2];
//     int st_max;
//     for (int i = 0; i < n;i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         data[i][0] = x;
//         data[i][1] = y;
//     }
//     for (int j = 0; j < n;j++)
//     {
//         if(data[j][0]>k)
//             continue;
//     }
// }
#define MAX_V(a,b) (a)>(b)?(a):(b)
#define MIN_V(a,b) (a)<(b)?(a):(b)
int main(){
    int a = 2, b = 1, ret = 0;
    ret = MAX_V(a, b) + 3;
    printf("%d\n", ret);
    ret = MIN_V(b, a) + 3;
    printf("%d\n", ret);
    return 0;
}