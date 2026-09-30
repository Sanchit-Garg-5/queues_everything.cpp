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
class cqueue1{
    public:
    ll size=0; node* temp=nullptr;
    bool empty1(){
        if(size<=0){return true;} return false;
    }
    ll size1(){
        return size;
    }
    void push1(ll data1){
        node* newnode=new node(data1);
        if(empty1()){newnode->next=newnode; temp=newnode;}
        else{
            newnode->next=temp->next; temp->next=newnode; 
            temp=newnode;
        }
        size++;
    }
    ll back1(){
        if(empty1()){cout<<"underflow\n"; return -1; }
        return temp->data;
    }
    ll front1(){
        if(empty1()){cout<<"underflow\n"; return -1; }
        return temp->next->data;
    }
    void pop1(){
        if(empty1()){cout<<"underflow\n"; return;}
        if(size==1){delete temp; temp=nullptr; size--; return;}
        node* save=temp->next;
        temp->next=temp->next->next;
        delete save;
        
    }
};
int main(){
    cqueue1 acqueue1;
}
