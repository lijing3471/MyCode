#include<bits/stdc++.h>

using namespace std;
void pro(const char*str,const char*indx){
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<' '<<indx[i]<<endl;
    }
    return;
}
int main()
{
   int t;
   cin >>t;
   for(int i=0;i<t;i++){
    int n,m;
    string str,indx;
    cin>>n>>m;
    cin >> str;
    cin >> indx;
    const char *p = NULL;
    const char *p1 = NULL;
    p = str.c_str();
    p1 = indx.c_str();
    pro(p,p1);
   }
    return 0;
}