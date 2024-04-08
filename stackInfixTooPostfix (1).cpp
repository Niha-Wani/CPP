#include <iostream>
#include <stack>
using namespace std;
int precedence (char ch)
 {
    if(ch == '+' || ch =='-')
        return 1;                                                                         // precedence 1
    if(ch == '*' || ch =='/')
        return 2;                                                                         // precedence 2
    if(ch == '^')
        return 3;                                                                        // precedence 3
    return 0;
 }
 string convert (string infix)                                                 //  A^B*C-C+D/A/(E+F)     
{
    int i = 0;
    string postfix = "";
    stack <int>s;
    while(infix[i]!='\0')                                                                // end of string
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix=postfix+infix[i];                                                          // A
            i++;
        }
        else if(infix[i]=='(')
         {
            s.push(infix[i]);                                                              // (
            i++;
	 }
        else if(infix[i]==')')
         {
            while(s.top()!='(')                                                      // e.g., (+*/
            {
               postfix+=s.top();                                                        // +*/
               s.pop();                                                                // pop +*/
            }
               s.pop();                                                                   // pop left bracket (  itself
               i++;
         }
           else            
        {
             while (!s.empty() && precedence(infix[i])<=precedence(s.top()))                  // * < ^     
	    {
               postfix+=s.top();                                         // high precedence operator will be moved to postfix
               s.pop();                                                   // and pop that high operator from stack
             }
                s.push(infix[i]);                                                 // low prec operator will be pushed to stack
                i++;
        }
    }
    while(!s.empty())                                                         // last remaining operators in stack
	{
           postfix+=s.top();                                      
           s.pop();
        }
         cout<<" Postfix is : "<< postfix;                                        // prints postfix conversion  
         return postfix;
}
int main()
{
    string infix = "(a*b+c)"; 
    string postfix;
    postfix=convert(infix);    
    return 0;
}
