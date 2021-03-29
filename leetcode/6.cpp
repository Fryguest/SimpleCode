class Solution {
public:
    string convert(string s, int numRows) {
        #define n numRows
        #define len s.length()
        string result="";
        if (n==1) return s;
        for (int i=0;i<numRows;i++)
        {
            if (i==0 or i==numRows-1)
            {
                for (int j=i;j<len;j+=(n-1)*2)
                {
                    result+=s[j];
                }
            }
            else
            {
                for (int j=i;j<len;j+=(n-1)*2)
                {
                    result+=s[j];
                    if (j+(n-1)*2-2*i<len)result+=s[j+(n-1)*2-2*i];
                }
            }
        }
        return result;
    }
};
