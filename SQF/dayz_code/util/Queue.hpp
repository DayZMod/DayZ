#ifndef _INCLUDE_GUARD_QUEUE
#define _INCLUDE_GUARD_QUEUE

#define Queue_New(size) ((size) call queue_new)

#define Queue_Enqueue(q, element) ([q, element] call queue_enqueue)

#define Queue_Dequeue(q) ((q) call queue_dequeue)

#define Queue_Peek(q) ((q) call queue_peek)

#define Queue_Size(q) (count ((q) select 2))

#define Queue_Count(q) ((q) select 0)

#define Queue_IsFull(q) ((q) call queue_isFull)

#endif