class Solution {
public:
    int maxn = -1;
    void find(const vector<int>& a, int l, int r, int d)
    {
        if (l>r) return;
        int mid = (l+r)/2;
        if (a[mid] < d)
        {
            find(a, l, mid - 1, d);
        }
        else
        {
            maxn = mid;
            find(a, mid + 1, r, d);
        }
        return;
    }

    int find2(const vector<int>& a, int l, int r, int d)
    {
        if (d < a[l] or d > a[r]) return -1;
        if (a[l] == d) return l;
        if (l == r) return -1;
        int mid = (l + r)/2;
        if (a[mid] >= d) return find2(a, l, mid, d);
        else return find2(a, mid+1, r, d);
    }

    int search(vector<int>& arr, int target) {
        if (target == arr[0]) return 0;
        int l = 0, r = arr.size()-1;
        while (l < r and arr[l] == arr[0]) l++;
        while (r > l and arr[r] == arr[0]) r--;
        if (l == r)
        {
            if (target == arr[l]) return l;
            else return -1;
        }
        if (arr[l] < arr[0]) return find2(arr, l, r, target);
        maxn = l;
        find(arr, l, r, arr[0]);
        if (target >= arr[0]) return find2(arr, l, maxn, target);
        else return find2(arr, maxn+1, r, target);
    }
};
