#include <iostream>
#include <stack>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string exp) {
   stack<char> stack_to_check;
   char x;

   for (int i=0; i<exp.length(); i++) {
      if (exp[i]=='('||exp[i]=='['||exp[i]=='{') {
         stack_to_check.push(exp[i]);
         continue;
      }
      if (stack_to_check.empty())
         return false;
      switch (exp[i]) {
      case ')':
         x = stack_to_check.top();
         stack_to_check.pop();
         if (x=='{' || x=='[')
            return false;
         break;
      case '}':
         x = stack_to_check.top();
         stack_to_check.pop();
         if (x=='(' || x=='[')
            return false;
         break;
      case ']':
         x = stack_to_check.top();
         stack_to_check.pop();
         if (x =='(' || x == '{')
            return false;
         break;
      }
   }
   return (stack_to_check.empty());
}
int main() {
   string str;
   cin>>str;
   if (isValid(str))
      cout << "true";
   else
      cout << "false";
}