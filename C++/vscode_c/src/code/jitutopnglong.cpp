//使用 getchar()语句，必须调用 cstdio 库
#include <bits/stdc++.h> //使用 cin,cout,必须使用 iostream 库
using namespace std;
int main()
{
    int n, m;
    int res, tmp;
    vector<int> q;
    // vector<int> q(10,1);//初始化长度为5，初始值为1,其中q的cap为10，元素个数也为10
    //int a[10] = {.....}
    //vector<int> q(a,a+6)//用数组来初始化
    //vector<int> q(a.begin(),a.begin()+6)//用已存在的vector初始化
    // cout << q.capacity() << ' ' << q.size() << endl;
    //strlen()获取字符数组的长度
    string a = "dsfsfadfsasfdaf";
    for(char it:a) cout<<it<<' ';
    //char b[20];
    //strcpy(b,a.c_str());//将字符串复制到数组
    
    const char *p;
    p=a.c_str();

    exit(0);
    while (cin.peek() != '\n')//peek()查看当前字符
    {
        cin >> tmp;
        q.push_back(tmp);
        cout << q.capacity() << ' ' << q.size() << endl;
    }
    sort(q.rbegin(), q.rend());
    
    // q.insert(q.begin() + 3, 666);
    cout << q.capacity() << ' ' << q.size() << endl;
    
    // reverse(q.begin(),q.end());
    for (auto it = q.begin(); it != q.end(); it++)
    {
        cout << *it << ' ';
    }
    cout <<endl;
    cout << q.capacity() << ' ' << q.size() << endl;
 
    return 0;
}
