#include<iostream>
#include<limits>
#include<vector>
#include<stack>
#include<queue>
#include<vector>//动态数组
#include<array>//固定数组

using namespace std;

class Crame
{
    public:///公共修饰可以直接用Crame.name访问
        int age;
        Crame(int ag);
       
        ~Crame();
        double get_s(void);
        void set(int ag);
};
Crame::Crame(int ag)
{
    age = ag;
}
Crame::~Crame(void)
{
    cout << "delet object \n";
}
double Crame::get_s(void)
{
    return age;
}
void Crame::set(int ag)
{
   
    age = ag;
  
}

int main()
{
    Crame crame1(11);
    Crame crame2(2);
    // const char* ch_1 = "xiaoming";
    // const char* ch_2 = "daxiong";
    // cout << ch_1 ;
 
    // crame1(11);
    string ch1("it is init");
    cout << ch1<<"\n";

    cout << "crame name " << crame1.age << "\n";
    crame2.set(12);
    cout << "crame2 score " << crame2.get_s() << "\n";
}