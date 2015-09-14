#define Ref_New(val) [val]
#define Ref_Get(ref) ((ref) select 0)
#define Ref_Set(ref, val) ((ref) set [0, val])