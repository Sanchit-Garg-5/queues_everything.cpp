#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max_len 1000
class queue1{
    public:
    ll arr[max_len]; ll front=0,back=0;
    bool full1(){
        if(back>=max_len){return true;} return false;
    }
    bool empty1(){
        if(front==back){return true;} return false;
    }
    int front1(){
        if(empty1()){return -1;}
        return arr[front];
    }
    int back1(){
        if(empty1()){return -1;}
        return arr[back-1];
    }
    void push1(ll data){
        if(full1()){cout<<"overlfow\n"; return;}
        arr[back++]=data;
    }
    void pop1(){
        if(empty1()){cout<<"underfow\n"; return;}
        front++;
    }
    ll size1(){
        return back-front;
    }
};
int main(){
    queue1 aqueue;
}
