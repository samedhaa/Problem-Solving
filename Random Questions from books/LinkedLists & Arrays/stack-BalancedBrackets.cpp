//C++11

#include <bits/stdc++.h> 

using namespace std;

vector<string> braces(vector<string> values) {

    vector<string> ans;
    for(auto u : values)
    {
        stack<char>stk;

        for(char s : u)
        {
            if(s == '(' or s == '{' or s == '[')
            {
                stk.push(s);
            }
            else
            {
                if(stk.empty())
                {stk.push('!');} // no solution
                
                char element = stk.top();
                
                if(s == ')' and element == '(' 
                or s == '}' and element == '{'
                or s == ']' and element == '[')
                    stk.pop();
                else
                    break;
            }
        }
        if(stk.empty())
            ans.push_back("YES");
        else
            ans.push_back("NO");
        
    }

    return ans;

}
