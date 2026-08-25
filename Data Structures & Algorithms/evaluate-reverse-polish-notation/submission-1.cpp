class Solution {
public:
    int calculate(int a, int b, string op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        return a / b;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto &token : tokens) {
            if (token.size() == 1 && string("+-*/").find(token) != string::npos) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                st.push(calculate(a, b, token));
            } 
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};