#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkRedudancy(string str)
{
    stack<char> st;
    bool hasOperator = false;
    for (char i : str)
    {
        if (i != ')')
        {
            st.push(i);
        }
        else
        {
            while (st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '*' || st.top() == '/' || st.top() == '-')
                {
                    hasOperator = true;
                }
                st.pop();
            }
            if (!hasOperator)
            {
                return true;
            }
            st.pop();
            hasOperator=false;
        }
    }
    return false;
}

int main()
{

    string string = "(a+c*b)+(c)";

    cout << checkRedudancy(string);
    return 0;
}

// (a*b+(c/d))
// (a+c*b)+(c)
