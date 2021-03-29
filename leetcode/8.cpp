class Solution {
public:
    int stoi(string& s)
    {
        int max=INT_MAX;
        int min=INT_MIN;

        int d=1, start=0;
        if (s[0]=='-') {d=-1; start=1;}
        else if (s[0]=='+') {start=1;}
        long long x=0;
        for (int i=start;i<s.length();i++)
        {
            x=x*10+s[i]-'0';
            if (d==1 and x>=max) return max;
            else if (d==-1 and x>max) return min; 
        }
        return x*d;
    }
    int myAtoi(string str) {
        int begin=-1,end=str.length();
        for (int i=0;i<str.length();i++)
        {
            if (str[i]!=' ') {begin=i;break;}
        }
        if (begin==-1) return 0;
        if (str[begin]!='-' and str[begin]!='+' and (str[begin] > '9' or str[begin] < '0')) return 0;
        for (int i=begin+1;i<str.length();i++)
        {
            if (str[i] > '9' or str[i] < '0') 
            {
                end=i;
                break;
            }
        }
        if ((str[begin] > '9' or str[begin] < '0') and begin==end-1) return 0;
        string result = str.substr(begin, end-begin);
        return stoi(result);

    }
};
