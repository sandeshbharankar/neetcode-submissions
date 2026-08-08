class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.length()) {

            // Find the '#'
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Get the length of the string
            int length = stoi(s.substr(i, j - i));

            // Move j after '#'
            j++;

            // Extract 'length' characters
            string word = s.substr(j, length);

            result.push_back(word);

            // Move i to the beginning of the next encoded string
            i = j + length;
        }

        return result;
    }
};