Queue:

->Stores a list of items in which an item can be insert at one end and removed from other end only.
-> It follows FIFO
-> Operations: enqueue, dequeue,peek, empty.
-> Stack has two pointers front and rear

-> Queue can be implemented with array and linked list.

Implementation of queues with stack:

 -> Using 2 stacks.
 -> Push the element to first stack.
 
 (Function call stack approach that requires - only one stack.)
 -> Dequeue()
    --> If stack 1 is empty then print error
    --> if stack 1 has one element then return it.
    --> recursively pop everything from stack 1, store the popped item in variable res,
        push the item back to stack1 and return res.