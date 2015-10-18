#define Stack_New() [0,[nil,nil]]

#define Stack_Push(s, element) ([s, element] call stack_push)

#define Stack_Pop(s) ((s) call stack_pop)

#define Stack_Peek(s) ((s) call stack_pop)

#define Stack_Size(s) (count ((s) select 1))