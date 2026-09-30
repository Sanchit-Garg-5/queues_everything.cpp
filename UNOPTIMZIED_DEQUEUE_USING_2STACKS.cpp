//here tc of push_back,back,front,pop_back is o(1)
//but o(n) for pop_front,push_front

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class dequeue1 {
public:
    stack<ll> me; 
    ll front = 0; 
    bool empty1() {
        return me.empty();
    }
    ll size1() {
        return me.size();
    }
    ll front1() {
        if (empty1()) {
            cout << "underflow\n";
            return -1;
        }
        return front; 
    }
    ll back1() {
        if (empty1()) {
            cout << "underflow\n";
            return -1;
        }
        return me.top();
    }
    void push_back1(ll data) {
        me.push(data);
        if (me.size() == 1) {
            front = data; 
        }
    }
    void pop_back1(){
        if (empty1()) {
            cout << "underflow\n";
            return;
        }
        me.pop();
    }
    void pop_front1() {
        if (empty1()) {
            cout << "underflow\n";
            return;
        } stack<ll> me1;
        while (!me.empty()) {
            me1.push(me.top());
            me.pop();
        }
        me1.pop();
        if (!me1.empty()) {
            front = me1.top();
        }
        while (!me1.empty()) {
            me.push(me1.top());
            me1.pop();
        }
    }
    void push_front1(ll data){
       front=data; stack<ll> me1;
       while(!me.empty()){me1.push(me.top()); me.pop();}
       me.push(data);
       while(!me1.empty()){me.push(me1.top()); me1.pop();}
    }
};
int main() {
    dequeue1 aqueue;
}
