/* Provides a FIFO data structure implementation.
See https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_QUEUE
	#define _INCLUDE_GUARD_QUEUE
	
	//Initializes a new queue.
	#define Queue_New() [0, nil, nil]
	
	//Adds the element to the end of the queue.
	#define Queue_Enqueue(q, element) ([q, element] call dz_fn_queue_enqueue)
	
	//Removes and returns the first element from the queue.
	//Returns nil if queue is empty.
	#define Queue_Dequeue(q) ((q) call dz_fn_queue_dequeue)
	
	//Adds the element to the front of the queue.
	#define Queue_Push(q, element) ([q, element] call dz_fn_queue_push)
	
	//Returns the first element from the queue without removing it.
	//Returns nil if queue is empty.
	#define Queue_Peek(q) ((q) call dz_fn_queue_peek)
	
	//Returns the number of items in the queue.
	#define Queue_Count(q) ((q) select 0)
#endif