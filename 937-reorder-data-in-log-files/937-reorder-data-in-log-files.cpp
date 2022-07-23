class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string, string>> let;
        vector<pair<string,string>> dig;
        for(auto i:logs){
            string s="";
            string t="";
            bool flag=false;
            for(int j=0;j<i.size();j++){
                if(i[j]==' ' && flag==false){
                    flag=true;
                    continue;
                }
                if(flag==false)
                    s+=i[j];
                else
                    t+=i[j];
            }
            if(t[0]>='a' && t[0]<='z') 
                let.push_back({t,s});
            else
                dig.push_back({t,s});
        }
        sort(let.begin(),let.end());
        vector<string>ans;
        for(auto i:let)
            ans.push_back(i.second+ " " +i.first);
        for(auto i:dig)
            ans.push_back(i.second+ " " +i.first);
    
       return ans;
}
};