class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string s;
        int x=0;
        for (int i=0;i<a.length() and i<b.length();i++)
        {
            s+=char((a[i]+b[i]+x)%2+48);
            x=(a[i]+b[i]+x-96)/2;
        }
        for (int i=b.length();i<a.length();i++)
        {
            s+=char((a[i]+x)%2+48);
            x=(a[i]+x-48)/2;
        }
        for (int i=a.length();i<b.length();i++)
        {
            s+=char((b[i]+x)%2+48);
            x=(b[i]+x-48)/2;
        }
        if (x) s+='1';
        reverse(s.begin(), s.end());
        return s;
    }
};
