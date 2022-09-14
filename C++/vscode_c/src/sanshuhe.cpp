#include<bits/stdc++.h>
using namespace std;
void pro(vector<int> &num){
    vector<vector<int>> ans;
    sort(num.begin(),num.end());
    int len = num.size();
    if(len<3) return;
    for(int i=len-1;i>-1;i--){
        int mid = num[i];
        for(int j =0;j<len;j++){
           if( j > 0 && num[j] == num[j-1]) continue;
           int left = 0;
           int right = len-1;
           while(left < right){
            if(num[left] + num[right] + num[i] > mid) right--;
            else if(num[left] + num[right]+ num[i] < mid) left++;
            else{
                cout << "YES"<<endl;
                return;
            }
           } 
        }
    }
    cout << "NO"<<endl;
    return;
}
int main(){
	int n,m;
    cin >>n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector<int> num;
        for(int j=0;j<m;j++){
            int tmp;
            cin >> tmp;
            num.push_back(tmp);
        }
        pro(num);
    }
    return 0;
}