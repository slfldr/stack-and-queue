#include <iostream>
#include <stack>
#include <string>

bool checkCorrectBreckets(const std::string& st)
{
    std::stack<char> s;

    for (char ch : st)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty() || (ch == ')' && s.top() != '(') || (ch == '}' && s.top() != '{') || (ch == ']' && s.top() != '['))
            {
                return false;
            }

            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    std::string str;

    std::cout << "Enter the expression: ";

    std::getline(std::cin, str);

    if (checkCorrectBreckets(str))
    {
        std::cout << "\nThe brackets are spaced correctly";
    }
    else
    {
        std::cout << "\nThe brackets are not spaced correctly";
    }
}