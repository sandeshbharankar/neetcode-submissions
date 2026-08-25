class Calculator {
public:
    static int calculate(int a, int b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return a / b;
        }

        return 0;
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const auto& token : tokens) {
            if (token.length() == 1 &&
                (token[0] == '+' || token[0] == '-' ||
                 token[0] == '*' || token[0] == '/')) {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(Calculator::calculate(a, b, token[0]));
            } 
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};