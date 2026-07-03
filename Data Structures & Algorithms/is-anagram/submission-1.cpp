class Solution {
public:
    bool isAnagram(string s, string t) {


        if(s.length()!= t.length()){
            return false;
        }
        
        int freq[26]={0};
        for(char ch : s){
            freq[ch - 'a']++;
        }
        for(char ch:t){
            freq[ch - 'a']--;
        }
     bool allzero=true;
     for(int i=0;i<26;i++){
        if(freq[i]!=0){
            allzero= false;
            break;
        }
     }
     if(allzero){
        return true;
     }else{
        return false;
     }

       
    }
};
