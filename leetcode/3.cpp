class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool c[256];
        memset(c,0,sizeof(c));
        int ans=0,l=0;
        for (int i=0;i<s.length();i++)
        {
            while (c[s[i]]) 
            {
                c[s[l]]=false;
                l++;
            }
            c[s[i]]=true;
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
