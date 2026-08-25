class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        deque<int> st;

        for (auto &token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int b = st.back();
                st.pop_back();

                int a = st.back();
                st.pop_back();

                int value;

                if (token == "+")
                    value = a + b;
                else if (token == "-")
                    value = a - b;
                else if (token == "*")
                    value = a * b;
                else
                    value = a / b;

                st.push_back(value);
            } else {
                st.push_back(stoi(token));
            }
        }

        return st.back();
    }
};