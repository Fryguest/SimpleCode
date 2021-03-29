class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        lens=len(needle);
        if (haystack==needle) :
            return 0;
        for i in range(len(haystack)-lens+1):
            if (haystack[i:i+lens]==needle) :
                return i

        return -1;

