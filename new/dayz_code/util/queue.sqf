/* Queue implemented as a linked list.
Nodes are arrays [value, next].
Queue object contains item count and references to head and tail nodes.
*/

#include "Queue.hpp"

#define GET_COUNT(q) q select 0
#define INCREMENT_COUNT(q) q set [0, (q select 0) + 1]
#define DECREMENT_COUNT(q) q set [0, (q select 0) - 1]

#define GET_HEAD(q) q select 1
#define SET_HEAD(q, n) q set [1, n]
#define GET_TAIL(q) q select 2
#define SET_TAIL(q, n) q set [2, n]

#define NEW_NODE(v) [v, nil]
#define GET_VALUE(n) n select 0
#define GET_NEXT(n) n select 1
#define SET_NEXT(n, e) n set [1, e]

dz_fn_queue_peek =
{
	if (GET_COUNT(_this) < 1) exitWith { nil };
	GET_VALUE(GET_HEAD(_this))
};

dz_fn_queue_enqueue =
{
	private "_n";
	_n = NEW_NODE(_this select 1);
	
	if (GET_COUNT(_this select 0) == 0) then
		{ SET_HEAD(_this select 0, _n) }
	else
		{ SET_NEXT(GET_TAIL(_this select 0), _n) };
	
	SET_TAIL(_this select 0, _n);
	INCREMENT_COUNT(_this select 0);
};

dz_fn_queue_dequeue =
{
	if (GET_COUNT(_this) < 1) exitWith { nil };
	
	private "_n";
	_n = GET_HEAD(_this);
	SET_HEAD(_this, GET_NEXT(_n));
	DECREMENT_COUNT(_this);
	if (GET_COUNT(_this) == 0) then
		{ SET_TAIL(_this, nil) };
	GET_VALUE(_n)
};

dz_fn_queue_push =
{
	private "_n";
	_n = NEW_NODE(_this select 1);
	if (GET_COUNT(_this select 0) == 0) then
		{ SET_TAIL(_this select 0, _n) }
	else
		{ SET_NEXT(_n, GET_HEAD(_this select 0)) };
	
	SET_HEAD(_this select 0, _n);
	INCREMENT_COUNT(_this select 0);
};