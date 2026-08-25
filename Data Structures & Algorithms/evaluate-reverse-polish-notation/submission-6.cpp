class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        auto apply = [](int a, int b, const string& op) {
            if (op == "+") return a + b;
            if (op == "-") return a - b;
            if (op == "*") return a * b;
            return a / b;
        };

        for (const string& token : tokens) {
            if (isdigit(token[0]) || 
                (token.size() > 1 && token[0] == '-')) {
                st.push(stoi(token));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                st.push(apply(a, b, token));
            }
        }

        return st.top();
    }
};