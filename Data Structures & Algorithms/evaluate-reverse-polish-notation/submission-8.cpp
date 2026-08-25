class Solution {
public:
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    int divi(int a, int b) { return a / b; }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string &token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                int (Solution::*operation)(int, int);

                if (token == "+")
                    operation = &Solution::add;
                else if (token == "-")
                    operation = &Solution::sub;
                else if (token == "*")
                    operation = &Solution::mul;
                else
                    operation = &Solution::divi;

                st.push((this->*operation)(a, b));
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};