// #include<iostream>
// using namespace std;
// int count(int lef){
//     if(lef == 2) return 1;
//     if(lef<2) return 0;
//     return lef/3 + count(lef%3 + lef/3);
// }
// int main() {
//    int test_data;
//    int data[10] = {};
// //    while(cin >> test_data){
// //       if(test_data==0) break;
// //       cout << count(test_data) << endl;
// //    }
//     for(int arr:data){
//         cout << arr << endl;
//     }
// }

#include<iostream>
using namespace std;
int conmom(int data[], int rand,int n){
    int falg = 0;
    for(int i=0;i<=n;i++){
       if(data[i]==rand){
           falg =1;
           break;
       }
    }
    return falg;
}

int main(){
    int n,rand,falg;
    cin >> n;
    int data[n];
    int dat[] = {1,2,1};
    int (&p)[n] = data;
    for(int i=0;i<n;i++){
       cin >> rand;
       falg = conmom(data, rand, i); 
       if(falg==1){
           continue;
       }else{
           data[i] = rand;
       }
    }
    int max =0;
    int tmp;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(data[j]< data[j-1]){
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            }
      }
    }
    for(int arr:data){
        if(arr==0) continue;
        cout << arr <<endl;
    } 
    
}