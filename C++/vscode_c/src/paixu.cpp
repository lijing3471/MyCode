#include<iostream>
#include<vector>

using namespace std;
void maopao(vector<int> list_1)
{
    int len = list_1.size();
    for (int i = 0; i<len; i++){
        for (int j = 0; j < len - 1 - i;j++)
        {
            if(list_1[j] > list_1[j+1]){
                swap(list_1[j], list_1[j + 1]);
            } 
        }
    }
   
    for (int i = 0; i<len; i++){
        cout << list_1[i] <<" ";
    }
}
void in_set(vector<int> list_1)
{
    int len = list_1.size();
    for(int i = 1; i < len;i++)
    {
        if(list_1[i]<list_1[i-1])//后者小于前者
        {
            int x = list_1[i];
            list_1[i] = list_1[i - 1];
            int j = i - 1;
            while(j>0 && list_1[j-1]>x)
            {
                list_1[j] = list_1[j - 1];
                j--;
            }
            list_1[j] = x;
        }
    }
    for (int i = 0; i<len; i++){
        cout << list_1[i] <<" ";
    }
}
void select(vector<int> list)
{
    int len = list.size();
    int min_index;
    for(int i = 0; i < len;i++)
    {
        min_index = i;
        for (int j = i+1; j < len; j++)
        {
            if(list[j] < list[min_index])
            {
                min_index = j;
            }
         }
         swap(list[i], list[min_index]);
    }
    for (int i = 0; i<len; i++){

        cout << list[i] <<" ";
    }
}
void quick(vector<int> &list_1,int low,int high)
{
    int first = low;//定义前哨兵
    int mind_v = list_1[low];//定义标杆
    int last = high;//定义后哨兵
    if(low>=high)
        return;
    while(first<last)//条件，前后哨兵没有相遇
    {
        while(first<last && list_1[last] > mind_v)//后哨兵从后往前寻找小于标杆的数
            last--;//后哨兵的索引减小
        ///后哨兵发现比标杆小的数，站在了这个位置
        if(first<last)//两哨兵没有相遇
            list_1[first++] = list_1[last];
        //如果找到，就把元素换到first的位置，前哨兵的位置往后移[first++],先赋值给first索引位置，再first++
        while(first<last && list_1[first]<=mind_v)//前哨兵从前往后开始寻找比标杆还要大的数
            first++;
        if(first<last)
            list_1[last--]=list_1[first];
       //如果找到，就把元素换到last的位置，后哨兵的位置往前移last--
    }
    list_1[first] = mind_v;//前后哨兵相遇，把这个位置的数和标杆交换
    // swap(list_1[first], )

    // int len = list_1.size();
 
    cout <<"\n";
    quick(list_1, low, first - 1);
    quick(list_1, first + 1, high);
}
void xier(vector<int> &list)
{
    int len = list.size();
    for (int gap = len / 2; gap > 0;gap /= 2)
    {
        for (int i = gap; i < len; i++)
        {
            int inserted = list[i];
            int j;
            for (j = i - gap; j >= 0 && inserted < list[j]; j -= gap)
            {
                list[j + gap] = list[j];
                list[j] = inserted;
            }
            
        }
    }
}
int main()
{
    vector<int> list_1 = {5,8,55,32,232,33,2,12,32, 22,32,7};

    int ind = 0;
    // list_1[ind++] = 100;
    // cout << list_1[0] << " - "<<list_1[1];
    cout << ind << "\n";
    // maopao(list_1);
    // select(list_1);
    // in_set(list_1);
    vector<int> &list = list_1;
    // int len = list.size();
    xier(list);
    for (auto a : list){

        cout << a <<" ";
    }
    // quick(list, 0, len-1);

    return 0;
}