#include "Vector.hpp"

#define P0 _this select 0
#define P1 _this select 1

dz_fn_vector_dotProduct =   { Vector_DotProduct_Fast(P0, P1); };
dz_fn_vector_crossProduct = { Vector_CrossProduct_Fast(P0, P1); };
dz_fn_vector_magnitude =    { Vector_Magnitude_Fast(_this); };
dz_fn_vector_add =          { Vector_Add_Fast(P0, P1); };
dz_fn_vector_subtract =     { Vector_Subtract_Fast(P0, P1); };
dz_fn_vector_negate =       { Vector_Negate_Fast(_this); };
dz_fn_vector_multiply =     { Vector_Multiply_Fast(P0, P1); };
dz_fn_vector_divide =       { Vector_Divide_Fast(P0, P1); };
dz_fn_vector_angle =        { Vector_Angle_Fast(P0, P1); };
dz_fn_vector_normalize =    { Vector_Normalize_Fast(_this); };
dz_fn_vector_fromDir =      { Vector_FromDir_Fast(_this); };
dz_fn_vector_rotate =       { Vector_Rotate_Fast(P0, P1); };