#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                ok = false;
                break;
            }
        }
    }

    if(!st.empty())
    {
        ok = false;
    }
    if(ok)
    {
        cout << "Dung";
    }
    else
    {
        cout << "Sai";
    }
}
