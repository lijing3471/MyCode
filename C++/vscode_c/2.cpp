#include <string>
#include <vector>
#include <iostream>
using namespace std;
////分割字符串，8个分一次，不够补0
void dive(string &st, int beg,int end)
{
    string ch;
    int ind;
    if(end - beg < 7){
        for(int i= beg;i <= beg + 7;i++){
            if(i>end) ch += '0';
            else ch += st[i];
        }
        cout << ch <<endl;
    }else{
        for(int i = beg;i <= beg + 7; i++){
            ch += st[i];
            ind = i;
        }
        cout << ch <<endl;
        dive(st,ind+1,end);
    }
}
int main() {
    string inp,st;
    inp = "";
    string &str = inp;
    // cin >> str;
    str = "12345678";

    dive(str, 0, inp.length()-1);
}