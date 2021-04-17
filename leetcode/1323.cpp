class Solution {
public:
    int maximum69Number (int num) {
        if (num > 6000 and num < 7000) return num + 3000;
        if (num % 1000 > 600 and num % 1000 < 700) return num + 300;
        if (num % 100 > 60 and num % 100 < 70) return num + 30;
        if (num % 10 == 6) return num + 3;
        return num;
    }
};
