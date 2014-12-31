#include "simpleheap.hpp"

/*
#define DEF_HEAP_SIZE 128
enum HeapType
{
MIN,
MAX
};
// Simple integer max heap
//
class SimpleHeap{
public:
SimpleHeap(HeapType type);
SimpleHeap(HeapType type, int initial_size);
~SimpleHeap();

void push(int n);
int pop();
int peek();

private:

// function pointer containing the
// appropriate heapify function based
// on whether it is a max heap or a min heap
(void*)(*heapify)();

// definitions for maxheapify and minheapify
void max_heapify();
void min_heapify();

};
*/



SimpleHeap::SimpleHeap(int type){
	
}


void SimpleHeap::heap_init(int type, int size){
	
	if (type == HEAP_TYPE_MAX){
		heapify = &SimpleHeap::max_heapify;
	}
	else if (type == HEAP_TYPE_MIN){
		heapify = &SimpleHeap::min_heapify;
	}

	this->_heap = new int[size];
}