class Solution {
public:
    int addDigits(int num) {
    if(num==0)
        return num;
    
    return (num%9==0)?9 : num%9;
    }
};