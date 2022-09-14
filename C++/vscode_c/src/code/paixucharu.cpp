#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int inf = 1e9;
        int minprice = inf, maxprofit = 0;
        for (int price: prices) {
            maxprofit = max(maxprofit, price - minprice);
            minprice = min(price, minprice);
        }
        return maxprofit;
    }
};

int main()
{
   int a,b,n,sum,day;
   cin>>a>>b>>n;
   day=0;
   sum = 0;
   int week = 0;
   while(sum<n){
      if(week<=4) sum += a;
      else if(week>4 && week<=7) sum += b;
      if(week==7) week = 0;
      
      week ++;
      day ++;
      cout << sum <<' '<< day<<' '<<week<<endl;
   }
   cout << day;
}
 