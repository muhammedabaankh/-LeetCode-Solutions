class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                top++;
                stack[top] = s[i];
            }
            else {
                if (top == -1) {
                    return false;
                }

                if (s[i] == ')' && stack[top] == '(' ||
                    s[i] == '}' && stack[top] == '{' ||
                    s[i] == ']' && stack[top] == '[') {
                    top--;
                }
                else {
                    return false;
                }
            }
        }

        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};
