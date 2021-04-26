struct P
{
    int x;
    P(int _x){x = _x;}
    friend bool operator<(P a, P b)
    {
        return a.x > b.x;
    }
};
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        num = k;
        for (int i = 0; i < nums.size(); i++)
        {
            q.push(P(nums[i]));
            if (q.size() > k) q.pop();
        }
    }
    
    int add(int val) {
        q.push(val);
        if (q.size() > num) q.pop();
        return q.top().x;
    }
private:
    priority_queue<P> q;
    int num;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
