#include<bits/stdc++.h>
using namespace std;
#define max_len 10000
typedef long long ll;
class dequeue{
    public:
    ll arr[max_len]; ll front=0,back=0; int size=0;
    void push_front1(ll data){
        if(full1()){cout<<"overlfow\n"; return;}
        front=[(front-1+max_len)%max_len];
        arr[front]=data; size++;
    }
    void push_back1(ll data){
        if(full1()){cout<<"overlfow\n"return;}
        arr[back]=data;
        back=(back+1)%max_len;
        size++;
    }
    bool full1(){
        if(size>=max_len){return true;} return false;
    }
    bool empty1(){
        if(size<=0){return true;} return false;
    }
    ll front1(){
        if(empty1()){cout<<"underflow\n"; return -1;}
        return arr[front];
    }
    ll back1(){
        if(empty1()){cout<<"underflow\n"; return -1;}
        return arr[(back-1+max_len)%max_len];
    }
    void pop_back1(){
        if(empty1()){cout<<"underflow\n"; return;} 
        back=(back-1+max_len)%max_len;  size--; return;
    }
    void pop_front1(){
        if(empty1()){cout<<"underflow\n"; return;}
        front=(front+1)%max_len; size--; return;
    }
};
int main(){
    dequeue adequeue;
}
