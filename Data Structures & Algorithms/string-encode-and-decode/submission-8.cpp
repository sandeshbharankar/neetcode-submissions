class Solution {
public:
 vector<pair<string,int>>length_table;

    string encode(vector<string>& strs) {
        string encoded_string="";
       for(string s:strs){
        encoded_string+= to_string(s.length())+"#"+s;
       }
       return encoded_string;


    }

    vector<string> decode(string s) {
        string m;
        vector<string> decoded_string="";
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!="#"){
                j++;
            }
            int length= stoi(s.substr(i,j-1));
            j++;
            m=s.substr(j,length);
            decodede_string.push_back(m);
            i=length+j;
            
        }
        return decoded_string;
       
    }
};
