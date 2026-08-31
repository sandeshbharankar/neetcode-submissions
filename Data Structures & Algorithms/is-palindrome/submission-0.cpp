class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c:s){
            c=tolower(c);
        }
        int f=0;
        int l=s.length()-1;
        while(f<l){

            if(!isalnum(s[f])){
                f++;
            }
            if(!isalnum(s[l])){
                l--;
            }
            if(s[f]!=s[l]){
                return false;
            }
            f++;
            l--;
        }
        return true;

        
    }
};
