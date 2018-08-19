#include<bits/stdc++.h>
using namespace std;

void calculateSpan(int price[], int n, int S[]){
    stack<int> mystack;
    mystack.push(0);

    S[0] = 1;
    for (int i = 1; i < n ; i++){
        while (!mystack.empty() && price[i]>price[mystack.top()]){
            mystack.pop();
        }
        S[i] = mystack.empty()?(i+1):(i-mystack.top());
        mystack.push(i);
    }
}


int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price)/sizeof(price[0]);
    int S[n];
 
    calculateSpan(price, n, S);

    return 0;
}
