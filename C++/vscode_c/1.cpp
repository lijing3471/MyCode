#include <iostream>
#include<limits>

#define COUNT 10;
using namespace std;//标准命名空间
namespace stdo
{
   int print = 2;
   int abc = 3;
   int ADD(int print, int abc){
      return print + abc;
      
   }
}
using stdo::abc;//引入命名空间中的某个变量
using namespace stdo;//引入整个命名空间
int x = 5;
extern int x, y, z;
extern bool test_fag, oen_fag;
void func(int a=0)
{
   cout <<"func_result"<< a << endl;
}
int& add_num(int a, int b)
{
   static int c;//引用做函数返回值是，函数中定义的变量要加static
   c = a + b;
   return c;
}
void testPTR(int* p){ 
   
   int a = 12;
   p = &a;
   cout << p << " " << *p << endl;
}
int main()
{
   int a = 10;
   // const double& ra = a;
   //  cout << "type: \t\t" << "************size**************"<< endl;  
   //  cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
   //  cout << "\t最大值：" << (numeric_limits<bool>::max)();  
   //  cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    int & ans = add_num(2, 3);
   //  add_num(5,6);
    cout << ans << endl;
    int* p = &a;
    cout << p << " " << *p << endl;
 
    testPTR(p);  //将指针作为参数传入的时候，只是传入了一个实参的拷贝，不对原来的实参产生影响
    cout << p << " " << *p << endl;
    if(p==NULL)
       cout << "p is null" << endl;
   //  cout << p << "" << *p << endl;
    //  enum color
    //  {
    //     red,
    //     buld=5,//枚举，标识对应的数值只能是整数型
    //  } c;
    //  c = buld;

    //  cout << c << endl;
    //  char arr[10] = { 0 };
    //  char d[] = "hello world";
    // //  cin >> arr;//控制台输入，会分隔空格
    //  double b = 2.1;
    //  float c = 2.11;
    //  int a = 1;
    //  int b = 2;
    //  int &c2 = a;

    // //  cout << b << endl;
    // // //  cout << c << endl;
    //  cout << c2 << endl;
    //  int &c2 = b;
    //  cout << c2 << endl;
    //  cout << arr <<endl << endl;
    //  cout << d << endl;
    //     func();
}