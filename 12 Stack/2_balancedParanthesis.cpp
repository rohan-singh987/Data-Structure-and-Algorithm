/* Given a string of Paranthesis ( (), {} and [] ) we need to check if this stirng os balanced or not
        Input: "([])"
        output: Yes
        
        Input: "((())"
        output: No
        
        Input: "({)}"
        output: No
        
        Input: "{}[()]"
        output: Yes
*/

#include<iostream>
#include<stack>
using namespace std;


bool matching(char a, char b)
{
    return(    (a=='(' && b==')')  ||  (a=='{' && b=='}')  ||  (a=='[' && b==']'   ));
}


bool isBalanced(string str)
{
    stack<int>s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='('     || str[i]=='{'      || str[i]=='[')
        {
            s.push(str[i]);
        }
        else{
            if (s.empty() == true)
            {
                return false;
            }
            else if (matching(s.top(), str[i]) == false)
            {
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}


int main()
{
    string str1 = "{}[()]";
    cout<<isBalanced(str1)<<endl;

    string str2 = "{[}()]";
    cout<<isBalanced(str2)<<endl;
    
    string str3 = "{[()]}";
    cout<<isBalanced(str3)<<endl;

    return 0;
}