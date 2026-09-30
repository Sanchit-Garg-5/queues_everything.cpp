#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max_len 1000
class cqueue1{
    public:
    ll arr[max_len]; ll front=0,back=0,size=0;
    bool full1(){
        if(size>=max_len){return true;} return false;
    }
    bool empty1(){
        if(size<=0){return true;} return false;
    }
    int front1(){
        if(empty1()){return -1;}
        return arr[front];
    }
    int back1(){
        if(empty1()){return -1;}
        return arr[(back-1+max_len)%max_len];
    }
    void push1(ll data){
        if(full1()){cout<<"overlfow\n"; return;}
        arr[back]=data; size++; back=(back+1)%max_len;
    }
    void pop1(){
        if(empty1()){cout<<"underfow\n"; return;}
        size--; front=(front+1)%max_len;
    }
    ll size1(){
        return size;
    }
};
int main(){
    cqueue1 acqueue;
}
