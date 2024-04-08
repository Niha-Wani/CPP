#include<iostream>
#include<math.h>                                                             // math library bcz we use power
#include<stack>                                                             
using namespace std;

int postfixEvaluation(string s)                                               // s is string name
{                                                          // string is used as parameter instead of int because we have to take more values as input
   stack<int> st;                                                           // st is stack name
    for(int i=0; i<s.length(); i++)                                        // i=0;i<7;i++
    {
        if(s[i]>='0'&&s[i]<='9')                                           // if string>=0 and string<=9   
        {                                                                 // stack.push(string[i] - '0')
            st.push(s[i]-'0');                                            // - '0' coverts string value to int value
        }
        else
        {
            int op2=st.top();                                                // op2=top element of stack
            st.pop();                                                      // removes top element
            
            int op1=st.top();                                              // op1= second top element of stack
            st.pop();                                                      // removes second top element
            
            
            switch(s[i])                                                       // switch(string[i)
            {
            case '+':
                st.push(op1+op2);                                              // stack.push
                break;
                
            case '-':
                st.push(op1-op2);
                break;
                
            case '*':
                st.push(op1*op2);
                break;
                
            case '/':
                st.push(op1/op2);
                break;
                
            case '^':
                st.push(pow(op1,op2));                                                 // math.h
                break;
            }
        }
    }
    return st.top();                                                                   // stack.top
}
int main()
{
    string x;	
    cout<<"Enter the postfix expression you want to evaluate "<<endl;
    cin>>x;
    cout<<postfixEvaluation(x)<<endl;
    return 0;
}



