//
//  myStack.h
//  ReeceCS285W8Assignment
//
//  Created by Edward Reece on 5/4/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef myStack_h
#define myStack_h

#include <iostream>
#include <cassert>
#include <vector>



using namespace std;

template <class Type>
class stackADT
{
public:
    virtual void initializeStack() = 0;
    //Method to initialize the stack to an empty state.

    virtual bool isEmptyStack() const = 0;
    //Function to determine whether the stack is empty.

    virtual bool isFullStack() const = 0;
    //Function to determine whether the stack is full.
    
    void push(Type&);
    //Function to add newItem to the stack.
    void push(vector<Type>&);
    
    
    virtual Type top() const = 0;
    //Function to return the top element of the stack.

    virtual void pop() = 0;
    //Function to remove the top element of the stack.

};

template <class Type>
void push(vector<Type>& newVec)
{
    for(unsigned it = 0; it < newVec.size(); it++)
    {
        push(newVec[it]);
    }
}

template <class Type>
class stackType: public stackADT<Type>
{
public:
    const stackType<Type>& operator=(const stackType<Type>&);
    //Overload the assignment operator.

    void initializeStack();
    //Function to initialize the stack to an empty state.

    bool isEmptyStack() const;
    //Function to determine whether the stack is empty.

    bool isFullStack() const;
    //Function to determine whether the stack is full.
    
    void push(const Type& newItem);
    //Function to add newItem to the stack.
    void push(vector<Type>&);

    Type top() const;
    //Function to return the top element of the stack.

    void pop();
    //Function to remove the top element of the stack.

    bool operator==(const stackType<Type>& otherStack) const;

    stackType(int stackSize = 100);
    //Constructor
    stackType(const stackType<Type>& otherStack);
    //Copy constructor

    ~stackType();
    //Destructor

private:
    int maxStackSize;
    int stackTop;
    Type *list;

    void copyStack(const stackType<Type>& otherStack);
    //Function to make a copy of otherStack.
};


template <class Type>
void stackType<Type>::initializeStack()
{
    stackTop = 0;
}

template <class Type>
bool stackType<Type>::isEmptyStack() const
{
    return(stackTop == 0);
}
template <class Type>
bool stackType<Type>::isFullStack() const
{
    return(stackTop == maxStackSize);
}

template <class Type>
void stackType<Type>::push(const Type& newItem)
{
    if (!isFullStack())
    {
        list[stackTop] = newItem;
        stackTop++;
    }
    else
        cout << "Cannot add to a full stack." << endl;
}
template <class Type>
void stackType<Type>::push(vector<Type>& newVec)
{
    for(unsigned it = 0; it < newVec.size(); it++)
    {
        push(newVec[it]);
    }
}
template <class Type>
Type stackType<Type>::top() const
{
    assert(stackTop != 0);
    return list[stackTop - 1];
}
template <class Type>
void stackType<Type>::pop()
{
    if (!isEmptyStack())
        stackTop--;
    else
        cout << "Cannot remove from an empty stack." << endl;
}

template <class Type>
stackType<Type>::stackType(int stackSize)
{
    if (stackSize <= 0)
    {
        cout << "Size of the array to hold the stack must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;

        maxStackSize = 100;
    }
    else
        maxStackSize = stackSize;

    stackTop = 0;
    list = new Type[maxStackSize];
}
template <class Type>
stackType<Type>::~stackType()
{
    delete [] list;
}

template <class Type>
void stackType<Type>::copyStack(const stackType<Type>& otherStack)
{
    delete [] list;
    maxStackSize = otherStack.maxStackSize;
    stackTop = otherStack.stackTop;

    list = new Type[maxStackSize];

    for (int j = 0; j < stackTop; j++)
        list[j] = otherStack.list[j];
}

template <class Type>
stackType<Type>::stackType(const stackType<Type>& otherStack)
{
    list = NULL;

    copyStack(otherStack);
}

template <class Type>
const stackType<Type>& stackType<Type>::operator=
        (const stackType<Type>& otherStack)
{
    if (this != &otherStack)
        copyStack(otherStack);

    return *this;
}

template<class Type>
bool stackType<Type>::operator==
        (const stackType<Type>& otherStack) const
{
    if (this == &otherStack)
        return true;
    else if(maxStackSize != otherStack.maxStackSize ||
            stackTop != otherStack.stackTop)
        return false;
    else
    {
        for (int i = 0; i < stackTop; i++)
            if (list[i] != otherStack.list[i])
                return false;
        return true;
    }
}
#endif /* myStack_h */
