#include<iostream>
#define SIZE 3
using namespace std;
class stack
{
    private:
        int num[SIZE];
        int top;
    public:
        stack();    //defualt constructor declared
        int push(int); //member function declared
        int pop(); //member function declared
        int isEmpty(); //member function declared
        int isFull(); //member function declared
        void display(); //member function declared
};
stack::stack(){
    top=-1; // positioning the initial place at -1
}
 int stack::isEmpty(){ // to check whether there is place to insert data
    if(top==-1)
        return 1;
    else
        return 0;   
}
 int stack::isFull(){ //to check whether the stack is full or not
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 int stack::push(int n){ // to insert data into the stack
    //check stack is full or not
    if(isFull()){
        return 0;
    }
    ++top; // when a data is successfully updated in the stack the position increases by one to the next slot
    num[top]=n;
    return n;
}
 int stack::pop(){ // to delete data from the stack
    int temp;
    //check for empty
    if(isEmpty())
        return 0;
    temp=num[top];
    --top; // when data is deleted then the position decreases by 1
    return temp;
 }
 void stack::display(){ // to display data in the stack
    int i; // the loop variable(declared globally).
    cout<<"STACK is: ";
    for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
    cout<<endl;
}
 
