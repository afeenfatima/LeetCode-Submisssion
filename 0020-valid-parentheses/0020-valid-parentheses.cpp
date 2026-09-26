class Solution {
public:
    char stack[10000];
    int top=-1;
   
        void push(char item){
            stack[++top]=item;  
        }
        void pop(){
            top--;
        }
      bool isValid(string s) {
        top=-1;
        for(char ch:s){
                if (ch=='('||ch=='['||ch=='{'){
                   push(ch);
                }
                else{
                  if(top==-1)
                     return false;
                  if(ch==')' && stack[top]!='(')
                     return false;
                  if(ch=='}' && stack[top]!='{')
                     return false;
                  if(ch==']' && stack[top]!='[')
                     return false;   
                  pop();
                }
        }
        return top==-1;
      }                              
};