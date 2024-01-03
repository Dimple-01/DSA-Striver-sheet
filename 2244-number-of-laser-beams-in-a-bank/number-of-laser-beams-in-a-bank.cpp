class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt1=0;
        vector<int> ans;
        for(string s: bank)
        {
            cnt1=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i] == '1')
                cnt1+=1;
                
            }
            ans.push_back(cnt1);
            if(cnt1==0)
            ans.pop_back();
        }
        int s=0;
        for(int j=1;j< ans.size();j++)
        {
            s+=ans[j] * ans[j-1];
        }
        return s;
       
        
    }
};