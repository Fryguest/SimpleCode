class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        int num=strs[0].length();
        for (int i=1;i<strs.size();i++)
        {
            num=min(num,(int)strs[i].length());
            for (int j=0;j<num;j++)
            {
                if (strs[i][j]!=strs[0][j])
                {
                    num=j;
                    break;
                }
            }
        }
        return strs[0].substr(0,num);
    }
};
