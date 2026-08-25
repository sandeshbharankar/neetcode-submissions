class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        unordered_map<string, function<int(int,int)>> operations = {
            {"+", [](int a, int b) { return a + b; }},
            {"-", [](int a, int b) { return a - b; }},
            {"*", [](int a, int b) { return a * b; }},
            {"/", [](int a, int b) { return a / b; }}
        };

        for (string &token : tokens) {
            if (operations.find(token) != operations.end()) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                st.push(operations[token](a, b));
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};