class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.length();
        if(n==0) return 0;
        string t=s;
        reverse(t.begin(),t.end());
        if(s==t) return 1;
        else return 2;
    }
};