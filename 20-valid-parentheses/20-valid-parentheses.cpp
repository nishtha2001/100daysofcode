class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        if(s.length()==1)
        {
            return false; }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);                 
            }
            else
            {
                if(st.empty()==1)           
                return false;                
                char ch=st.top();
                st.pop();
                if(ch=='(')
                {
                    if(s[i]!=')')
                    return false;  }
                if(ch=='{')
                {
                    if(s[i]!='}')
                    return false;  }
                if(ch=='[')
                {
                    if(s[i]!=']')
                    return false;  }
					}
        }
        if(st.empty()==1)
            return true;                  
        else
            return false;
    }
};