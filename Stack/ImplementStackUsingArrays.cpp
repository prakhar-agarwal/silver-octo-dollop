#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];
    Stack() {
        top = -1;
    }
    int pop();
    bool push(int x);
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top>= MAX-1)
    {
        cout<<"Overflow!"<<endl;
        return false;
    } else
    {
        a[++top]=x;
        return true;
    }
}

int Stack::pop()
{
    if (top<0)
    {
        cout<<"Underflow!"<<endl;
        return false;
    }
    else return a[top--];
}

bool Stack::isEmpty()
{
    return (top<0);
}


int main()
{
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
 
    cout << s.pop() << " Popped from stack\n";
 
    return 0;
}
