class Solution {
public:
 vector<pair<string,int>>length_table;

    string encode(vector<string>& strs) {
        string encoded_string="";

        for(string m: strs){
            length_table.push_back({m,m.length()});
            encoded_string+=m;
        }
        return encoded_string;


    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        queue<char> mstring;
            for(int i=0;i<s.length();i++){
                mstring.push(s[i]);
            }

        for(auto& [str,length]:length_table){
            
            string s1="";
            for( int i=0;i<length;i++){
                 
                 
                  s1+=mstring.front();
                  mstring.pop();
            }
             
            decoded_string.push_back(s1);

        }
        return decoded_string;

    }
};
