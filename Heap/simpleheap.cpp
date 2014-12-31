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



};
*/



SimpleHeap::SimpleHeap(int type){
	heap_init(type, DEF_HEAP_SIZE);
}
SimpleHeap::SimpleHeap(int type, int size){
	heap_init(type, size);
}
void SimpleHeap::heap_init(int type, int size){
	
	if (type == HEAP_TYPE_MAX){
		heapify = &SimpleHeap::max_heapify;
	}
	else if (type == HEAP_TYPE_MIN){
		heapify = &SimpleHeap::min_heapify;
	}

	this->_heap = new int[size];
	this->_heap_count = 0;
}

void SimpleHeap::max_heapify(){

}

void SimpleHeap::min_heapify(){

}