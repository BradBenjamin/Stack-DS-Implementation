#include "Stack.h"
#include <exception>
#include <stdexcept>


using namespace std;


Stack::Stack(){
    //We initialize the capacity
    capacity=5;
    arr=new TElem [capacity];
    length=0;
}
void Stack::push(TElem e) {
	///Complexity: THETA(1) amortized
    if (length+1==capacity){
        capacity*=2;
        auto NewArray = new  TElem [capacity];
        for(int i=0;i<length;++i) {
            NewArray[i] = arr[i];
        }
        delete[] arr;
        arr=NewArray;
    }
    arr[length++]=e;
}

TElem Stack::top() const {
	///Complexity: THETA(1)
    if (isEmpty())
        throw std::out_of_range("Stack empty");
    return arr[length-1];
}

TElem Stack::pop() {
	///Complexity: THETA(1)
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    length--;
    return arr[length];
}


bool Stack::isEmpty() const {
    return length==0;
}

Stack::~Stack() {
    delete[] arr;
}