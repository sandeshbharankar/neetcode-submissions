class Solution {
public:
    int solve(vector<string>& tokens, int &i) {
        string token = tokens[i--];

        if (token != "+" && token != "-" &&
            token != "*" && token != "/") {
            return stoi(token);
        }

        int right = solve(tokens, i);
        int left = solve(tokens, i);

        if (token == "+") return left + right;
        if (token == "-") return left - right;
        if (token == "*") return left * right;
        return left / right;
    }

    int evalRPN(vector<string>& tokens) {
        int index = tokens.size() - 1;
        return solve(tokens, index);
    }
};