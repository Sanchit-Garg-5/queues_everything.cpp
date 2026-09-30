#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class queue1{
    public:
    stack<ll>me; ll front=0;
    bool empty1(){
        if(me.empty()){return true;} return false;
    }
    ll size1(){
        return me.size();
    }
    ll front1(){
        if(me.empty()){cout<<"underflow\n";return -1;}
        return front;
    }
    ll back1(){
        if(me.empty()){cout<<"underflow\n";return -1;}
        return me.top();
    }
    void push1(ll data){
        me.push(data); 
        if(me.size()==1){front=me.top();}
    }
    void pop1(){
        if(me.empty()){cout<<"underflow\n";return;}
        stack<ll>me1;
        while(!me.empty()){
            me1.push(me.top()); me.pop();
        }
        me1.pop();
        if(!me1.empty()){front=me1.top();}
        while(!me1.empty()){
            me.push(me1.top()); me1.pop();
        }
    }
};
int main(){
    queue1 aqueue;
}
