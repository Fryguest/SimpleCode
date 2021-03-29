class Solution {
public:
    string test(char s[], int len)
    {
        int v[len];
        memset(v,0,sizeof(v));
        v[0]=0;

        int mid=0,rmid=0;
        for (int i=0;i<len;i++)
        {
            if (i<=rmid+v[rmid]) v[i]=min(v[rmid-(i-rmid)], rmid+v[rmid]-i);
            while (i+v[i]+1<len and i-v[i]-1>=0 and s[i+v[i]+1]==s[i-v[i]-1]) v[i]++;
            if (v[i]>v[mid]) mid=i;
            if (i+v[i]>rmid+v[rmid]) rmid=i;
        }

        string result="";
        for (int i=mid-v[mid];i<=mid+v[mid];i++) if (s[i]!='#')result+=s[i];
        return result;
    }
    string longestPalindrome(string s) {
        char str[s.length()*2+5];
        for (int i=0;i<s.length();i++)
        {
            str[2*i]='#';
            str[2*i+1]=s[i];
        }
        str[2*s.length()]='#';
        return test(str, 2*s.length()+1);
    }
};
