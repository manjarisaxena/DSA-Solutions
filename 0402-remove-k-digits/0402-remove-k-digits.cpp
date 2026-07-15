class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char>stk;
        for(int i =0; i<s.size(); i++){
            while(!stk.empty() && stk.top()>s[i] && k>0){
                stk.pop();
                k--;
            }
            if(!stk.empty() || s[i]!='0')
            stk.push(s[i]);
        }
        while(!stk.empty() && k>0){
            stk.pop();
            k--;
        }
        string ans;
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        if(ans == "")
        return "0";
        return ans;

    }
};