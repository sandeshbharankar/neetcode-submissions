class Solution {
public:
    bool isPalindrome(string s) {
        string newstr;
        for(char c:s){
            if(isalnum(c)){
                newstr+=tolower(c);
            }
        }
        int f=0;
        int l=newstr.length()-1;
        while(f<l){

            if(!isalnum(newstr[f])){
                f++;
            }
            if(!isalnum(newstr[l])){
                l--;
            }
            if(newstr[f]!=newstr[l]){
                return false;
            }
            f++;
            l--;
        }
        return true;

        
    }
};
