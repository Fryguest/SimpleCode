#include <iostream>
#include <unordered_map>
#include <limits>

using namespace std;

int solve(string s) {
    unordered_map<char, int> freq;  // map to keep track of character frequency
    int left = 0, right = 0;  // two pointers to define the current substring
    int min_length = numeric_limits<int>::max();  // initialize to a very large value

    while (right < s.size()) {
        freq[s[right]]++;  // increment frequency of current character
        while (freq['1'] > 0 && freq['2'] > 0 && freq['3'] > 0) {
            int length = right - left + 1;  // current substring length
            if (length < min_length) {
                min_length = length;
            }
            freq[s[left]]--;  // move left pointer to next position
            left++;
        }

        right++;  // move right pointer to next position
    }

    return min_length<=s.size()? min_length:0;
}

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
