class Solution {
public:
    void cal(int& num, int x, string l,string& m)
    {
        while (num>=x)
        {
            m+=l;
            num-=x;
        }
    }
    string intToRoman(int num) {
        string result="";
        cal(num,1000,"M",result);
        cal(num,900,"CM",result);
        cal(num,500,"D",result);
        cal(num,400,"CD",result);
        cal(num,100,"C",result);
        cal(num,90,"XC",result);
        cal(num,50,"L",result);
        cal(num,40,"XL",result);
        cal(num,10,"X",result);
        cal(num,9,"IX",result);
        cal(num,5,"V",result);
        cal(num,4,"IV",result);
        cal(num,1,"I",result);
        return result;
    }
};
