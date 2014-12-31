#ifndef __HEAP_HPP__
#define __HEAP_HPP__

#define DEF_HEAP_SIZE 128

#define HEAP_TYPE_MAX 0
#define HEAP_TYPE_MIN 1

#define HEAP_LEFT(A,I) (A[2*I])
#define HEAP_RIGHT(A,I) (A[(2*I) + 1])

// Simple integer max heap
//
class SimpleHeap{
public:
	SimpleHeap(int type);
	SimpleHeap(int type, int initial_size);
	~SimpleHeap();

	void push(int n);
	int pop();
	int peek();

private:

	int* _heap;
	int _heap_count;
	// function pointer containing the
	// appropriate heapify function based
	// on whether it is a max heap or a min heap
	(void)(SimpleHeap::*heapify)();

	// definitions for maxheapify and minheapify
	void max_heapify();
	void min_heapify();

	void heap_init(int type, int initial_size);
};

#endif
