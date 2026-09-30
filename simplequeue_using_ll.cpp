#include<bits/stdc++.h>
using namespace std;
#define max_len 10000
typedef long long ll;
class node{
    public:
    ll data; node* next;
    node(ll data1, node* next1):data(data1), next(next1){}
    node(ll data1): data(data1),next(nullptr){}
    node(): data(0), next(nullptr){}
};
class queue1{
    public:
    ll size=0; node* front=nullptr; node* back=nullptr;
    bool empty1(){
        if(size<=0){return true;} return false;
    }
    ll size1(){
        return size;
    }
    void push1(ll data1){
        node* temp=new node(data1);
        if(empty1()){back=temp; front=temp; }
        else{back->next=temp; back=temp;}
        size++;
    }
    ll back1(){
        if(empty1()){cout<<"underflow\n"; return -1; }
        return back->data;
    }
    ll front1(){
        if(empty1()){cout<<"underflow\n"; return -1; }
        return front->data;
    }
    void pop1(){
        if(empty1()){cout<<"underflow\n"; return;}
        node* temp=front->next; 
        delete front;
        front=temp; size--;
        if(size==0){back=nullptr;}
    }
};
int main(){
    queue1 aqueue1;
}
