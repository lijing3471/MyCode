#include<iostream>
using namespace std;

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t c = PTHREAD_COND_INITIALIZER;
void thr_exit(){
    pthread_mutex_lock(&m);
    pthread_cond_signal(&c);
    pthread_mutex_unlock(&m);
}
void thr_join(){
    pthread_mutex_lock(&m);
    pthread_cond_wait(&c,&m);
    pthread_mutex_unlock(&m);
}
void *child(void*arg){
    printf("child");
    thr_exit();
    return NULL;
}
int main(int argc,char *argv[]){
    printf("parent:begin\n");
    pthread_t p;
    pthread_create(&p, NULL, child, NULL);
    thr_join();
    printf("parent:end\n");
    return 0;
    // int x = 1;
    // int x2 = 1;
    // static int *p1 = &x;
    // int *p2 = &x2;
    // cout << "x ind:"<< p1 << "----value="<< *p1 <<endl;
    // // p1 = &x2;
    // cout << "x2 ind:"<< p2 << "----value="<< *p2 <<endl;
}