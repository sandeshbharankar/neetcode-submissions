class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {
            if (token.size() == 1 && 
                (token[0] == '+' || token[0] == '-' ||
                 token[0] == '*' || token[0] == '/')) {

                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                switch (token[0]) {
                    case '+':
                        st.push(a + b);
                        break;

                    case '-':
                        st.push(a - b);
                        break;

                    case '*':
                        st.push(a * b);
                        break;

                    case '/':
                        st.push(a / b);
                        break;
                }
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};