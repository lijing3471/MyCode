#include<iostream>
#include<vector>

using namespace std;


void quest()
{
    int n, c;
    cin >> n >> c;

    int box[n][n];
    int cls, ind;
    int ti;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> box[i][j];
        }
    }

    for (int k = 0; k < c;k++)
    {
        cin >> cls >> ind;
        ind--;
        if(cls == 1){
            ti = box[ind][n - 1];
            for (int h=n-1; h >=1;h--){
                box[ind][h] = box[ind][h-1];
            }
            box[ind][0] = ti;
        }
        if(cls == 2){
            ti = box[0][ind];
            for (int h = 0; h <n-1;h++){
                box[h][ind] = box[h+1][ind];
            }
            box[n-1][ind] = ti;
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n-1;j++)
        {
            cout << box[i][j] << " ";
        }
        cout << box[i][n - 1];
        cout << endl;
    }
}

int works(string in, string out)
{
    int timeofin = 0, timeofout = 0;
    int index1 = 3, index2 = 4;
    int temp = 0;
    for (int i = index1; i <= in.size(); i++)
    {
    if (i == 5)
    {
    timeofin += temp * 3600;
    temp = 0;
    continue;
    }
    else if (i == 8)
    {
    timeofin += temp * 60;
    temp = 0;
    continue;
    }
    else if (i == in.size())
    {
    timeofin += temp;
    temp = 0;
    break;
    }
    temp = temp * 10 + (in[i] - '0');
    }
    for (int i = index2; i <= out.size(); i++)
    {
    if (i == 6)
    {
    timeofout += temp * 3600;
    temp = 0;
    continue;
    }
    else if (i == 9)
    {
    timeofout += temp * 60;
    temp = 0;
    continue;
    }
    else if (i == out.size())
    {
    timeofout += temp;
    temp = 0;
    break;
    }
    temp = temp * 10 + (out[i] - '0');
    }
    return timeofout - timeofin;
    }
    int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<string> times(n);
    cin.get();
    for (int i = 0; i < n; i++)
    {
    string temp;
    getline(cin, temp);
    times[i] = temp;
    }
    for (int i = 0; i < n; i += 2)
    {
    ans += works(times[i] , times[i + 1]);
    }
    
    string res;
    string hours;
    string min;
    string sec;
    hours = to_string(ans / 3600);
    ans = ans % 3600;
    min += to_string(ans / 60);
    ans = ans % 60;
    sec += to_string(ans);
    if (hours.size() == 1) hours = '0' + hours;
    if (min.size() == 1) min = '0' + min;
    if (sec.size() == 1) min = '0' + min;
    res = hours + ':' + min + ':' + sec;
    cout << res << endl;
    system("pause");
    return 0;
}