// we will sort it without extra space at all(not even another queue)(no recursion).
// we will apply selection sort.
//also remember popping and pushing whole queue, doesnt change its order.
//so if i have to find the minimum element: i will pop and push the whole queue to get the first minimum element
//then place it at back, while not changing the rest order.
// then among the n-1 elements ,  i will find the minimum guy(while keeping my earlier min at where i had placed it)
//again place this new minimum at back of the previous minium, while not changing the rest order.
//for ex: given 3,1,2,4. find first mini=1 and its index=2. now pop and push all the elements, excpet for index=2 whom we only pop right now, and later push it. so we get 3,2,4,1.
//now among <=n-2+1 elements find the minimum. we get min=2 and its index =2. right now queue is 3,2,4,1. now pop and push all,excpet at index=2 whom we only pop right now and later push it.
// so we get 3,4,1,2. and repeat such iterations 4 times.

//tc is o(n^2)
int main(){
    queue<ll>me;
    me.push(3); me.push(1); me.push(2); me.push(4); 
    int n=4;//let this have all n elements
    for(int i=1;i<n+1;i++){
        ll mini=LLONG_MAX; ll minidx=-1;
        for(int j=1;j<n+1;j++){
            if(mini>me.front() && j<=n-i+1){minidx=j; mini=me.front();}
            ll temp=me.front();
            me.pop(); me.push(temp);
        }
        for(int j=1;j<n+1;j++){
            ll temp=me.front();
            me.pop();
            if(j==minidx){continue;}
            me.push(temp);
        }
        me.push(mini);
    }
}
