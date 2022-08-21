#include<iostream>
#include<vector>//动态数组
#include<set>//集合
#include<map>//关联容器
#include<string>//字符串
#include<sstream>
#include<utility>//pair固定结构体
#include<list>//链表


using namespace std;

vector<string> split(string &inp,char ch)
{
    vector<string> res;
    string tmp;
    istringstream iss(inp);
    while(getline(iss,tmp, ch)){
        if(tmp.empty())
           continue;
        res.push_back(move(tmp));//move()将一个左值强制转化为右值引用
    }
    return move(res);
}

int main(){
  
    map<string, int> data;
    string inp;
    const char d= ' ';
    string find_name;
    string &st = inp;
    
    for (int i = 0; i < 4;i++){
        
        getline(cin, inp);
        // cin >> inp;
        int op_, num_;

        vector<string> res = split(st, d);

        op_ = stoi(res[0]);
        if(op_ == 1){
  
            num_ = stoi(res.back());//string->int
            if(data.find(res[1]) == data.end()) data.insert(pair<string,int> (res[1], num_));
            else data[res[1]] += num_;
        }
        else if(op_ == 2){
            find_name = res.back(); //当用cin输入完后 然后再用getline()的话就会直接结束没办法在输入了
            if (data.find(find_name) == data.end())
                cout << "no find" << endl;
            else
                cout << find_name << ": " << data[find_name] << endl;
        }
        
        // cout << data[res[1]];find_name
        // cout << typeid(op_).name() << " " << op_ <<"  "<< typeid(num_).name() << " " << num_ << endl;
        // for (auto it = res.begin(); it != res.end();it++){
        //     cout << *it <<" ";
        // }
    }
}