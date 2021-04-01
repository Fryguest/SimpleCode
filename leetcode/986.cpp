class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
            int s1 = 0, s2 = 0;
            vector<vector<int>> result;
            while (s1 < firstList.size() and s2 < secondList.size())
            {
                if (firstList[s1][1] < secondList[s2][0])
                {
                    s1++;
                    continue;
                }
                else if (firstList[s1][0] > secondList[s2][1])
                {
                    s2++;
                    continue;
                }
                else
                {
                    vector<int> v;
                    v.push_back(max(firstList[s1][0], secondList[s2][0]));
                    v.push_back(min(firstList[s1][1], secondList[s2][1]));
                    result.push_back(v);

                    if (secondList[s2][1]>=firstList[s1][1]) s1++;
                    else s2++;
                }
            }
            return result;
            
    }
};
