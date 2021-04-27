class Solution {
public:
    struct Node
    {
        bool exist = false;
        Node* node[26];
    };
    void add(Node* p, const string& s, int i)
    {
        if (i == s.length()) 
        {
            p->exist = true;
            return;
        }
        if (p->node[s[i]-'a'] == NULL)p->node[s[i]-'a'] = new Node();
        add(p->node[s[i]-'a'], s, i + 1);
    }
    
    void find(Node* p, string s, string& ans)
    {
        if (s.length() > ans.length()) ans = s;
        for (int i = 0; i < 26; i++)
        {
            if (p->node[i] != NULL and p->node[i]->exist)
            {
                find(p->node[i], s + char(i + 'a'), ans);
            }
        }
        return;
    }
    string longestWord(vector<string>& words) {
        Node* root = new Node();
        for (string s : words)
        {
            add(root, s, 0);
        }
        string ans;
        find(root, "", ans);
        return ans;
    }
};
