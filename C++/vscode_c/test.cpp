#include<iostream>
#include<limits>
#include<vector>
#include<stack>
#include<queue>
#include<vector>//动态数组
#include<array>//固定数组

using namespace std;
void addd(int &x, int &y)
{
    vector<int> myvector;
    int c;
    static int all;
    c = x;
    x = y;
    y = c;
    all = x + y;
    cout << "all:" << all << "\n";
}
class Crame
{
    public:///公共修饰可以直接用Crame.name访问
        char name;
        int age;
        double score;
        double get_s(voide);
        void set(char na, int ag, double scor);
};
double Crame::get_s(void)
{
    return score;
}
void Crame::set(char na, int ag,double scor)
{
    name = na;
    age = ag;
    score = scor;
}

int main()
{
    // int a = 2;
    stack<int> mystack;
    queue<int> myqueue;
    vector<int> myvector;

    cout << "myqueue is :" << myqueue.empty() << "\n";
    cout << "mystack is :" << mystack.empty() << "\n";
    for (int i = 0; i < 10;i++)
    {
        mystack.push(i);
        cout << "mystack front is :" << mystack.top() << "\n";
    }
    for (int j = 0; j < 10;j++)
    {
        myqueue.push(j);
        cout << "myqueue front is :" << myqueue.front() << "\n";
    }
    for (int i1 = 0; i1 < 10;i1++)
    {
        myvector.push_back(i1);
    }
    for (vector<int>::iterator iter = myvector.begin(); iter != myvector.end(); iter++)
    {
        cout << "*iter is:" << *iter << "\n";
        // cout << "iter is:" << (*iter). << "\n";
    }

    cout << "size of myvector is :" << myvector.size() << "\n";
    cout << "mystack is :" << mystack.empty() << "\n";
    mystack.pop();
    myqueue.pop();
    if (!myqueue.empty()){
        cout << "size of myqueue is :" << myqueue.size() << "\n";
        cout << "myqueue front   is :" << myqueue.front() << "\n";
        cout << "myqueue back    is :" << myqueue.back() << "\n";
    }
    if (!mystack.empty()){
        cout << "size of mystack is :" << mystack.size() << "\n";
    }
    // int a = 2;
    // int b = 3;
    // cout << a << " " << b << endl;
    // const char *str = "name\n";
    // cout << sizeof(str)<<"\n";
    // addd(a, b);
    // cout << a << " " << b;

}