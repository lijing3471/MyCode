#include<iostream>

using namespace std;

// bool seachArry(int [][] array,int y,int x, int target){
//     for (int i = 0;i<y;i++){
//         for (int j = 0; i < x;j++){
//             if (array[j][i] == target)
//                 return true;
//         }
//     }
//     return false;
// }

int main(){
    int list[8];
    
    for (int i = 0; i < 8;i++){
        list[i] = i;
    }
    int first = 3;

    list[first++] = 100;
    cout << first << endl;
    for(int str:list){
        cout << str << ' ';
    }
        
}

