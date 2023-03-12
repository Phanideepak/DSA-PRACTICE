Stacks:

Stack is a linear data structure that follows LIFO mechanism. LIFO -> last in first out pattern.

Infix - Postfix - Prefix expressions:

    Infix expression: <operand> <operator> <operand> 
      Eg: 4 * 2 + 3,  5-6/3

    Postfix expression:  <operand> <operand> <operator>
     Eg: 4 2 * 3 +, 5 6 3 / - 

    Prefix expression: <operator> <operand> <operand>
     Eg: + * 4 2 3, - 5 / 6 3
     For prefix evaluation, traverse from right to left. 

    Operator Precedence: (), ^, *,/, +,-


Inflix - Postflix conversion:

S= (a-b/c)*(a/k-1)

if operand
   print

if '('
  push to stack

if ')'
  pop from stack and print until ( is found in stack top. pop the ( in last.

if operator
  pop from stack and print until an operator with less precedence is found in stack top. push operator to stack. 


Queue Implementation - approach 1 (making push method costly):

1.) Take 2 queues. Push element to second queue and transfer elements from first queue to second queue.
2.) Swap between second and first queue.


Queue Implementation - approach 2 (making pop method costly)
1.) Take 2 queues. Push element to q1.
2.) Transfer the elements to the second queue till size of first queue becomes 1.
3.) Swap between q1 and q2.






