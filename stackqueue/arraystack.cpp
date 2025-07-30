#include<bits/stdc++.h>
using namespace std;


class MyStack
{
private:
    int topIndex = -1;
    vector<int> st;

public:

    void push(int x)
    {
        topIndex = topIndex + 1;
        st.push_back(x);
    }

    int pop()
    {
        if (topIndex == -1) {
            cout << "no element in stack" << endl;
            return -1;
        }
        int val = st[topIndex];
        st.pop_back();
        topIndex = topIndex - 1;
        return val;
    }

    int size()
    {
        return st.size();
    
    }

    int top()
    {
        if (topIndex == -1) {
            cout << "no elements" << endl;
            return -1;
        }
        return st[topIndex];
    }
};

int main()
{
   MyStack s;
   s.push(5);
   s.push(10);
   s.push(15);

   cout << "Stack size: " << s.size() << endl;
   cout << "Stack size: " << s.top() << endl;
   s.pop();
    cout << "Stack size: " << s.size() << endl;
   cout << "Stack size: " << s.top() << endl;


   return 0;
}






