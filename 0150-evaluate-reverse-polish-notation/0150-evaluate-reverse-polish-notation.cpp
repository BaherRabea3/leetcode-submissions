class Solution {
public:
   int evalRPN(vector<string> &tokens)
{
    int result = 0;
    stack<int> s;
    for (int i = 0; i < tokens.size(); i++)
    {

        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
        {
            int num1, num2;
            num2 = s.top();
            s.pop();
            num1 = s.top();
            s.pop();
            if (tokens[i] == "+")
            {
                result = num1 + num2;
            }
            else if (tokens[i] == "-")
            {
                result = num1 - num2;
            }
            else if (tokens[i] == "*")
            {
                result = num1 * num2;
            }
            else if (tokens[i] == "/")
            {
                result = num1 / num2;
            }
            s.push(result);
        }
        else
        {
            s.push(stoi(tokens[i]));
        }
    }
    return s.top();
}
};