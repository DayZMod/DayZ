#include "Vector.hpp"

dz_fn_vector_dotProduct = 
{
	Vector_DotProduct_Fast(_this);
};

dz_fn_vector_crossProduct =
{
	Vector_CrossProduct_Fast(_this);
};

dz_fn_vector_magnitude =
{
	Vector_Magnitude_Fast(_this);
};

dz_fn_vector_add =
{
	Vector_Add_Fast(_this select 0, _this select 1);
};

dz_fn_vector_subtract =
{
	Vector_Subtract_Fast(_this select 0, _this select 1);
};

dz_fn_vector_negate =
{
	Vector_Negate_Fast(_this);
};

dz_fn_vector_multiply =
{
	Vector_Multiply_Fast(_this select 0, _this select 1);
};

dz_fn_vector_divide =
{
	Vector_Divide_Fast(_this select 0, _this select 1);
};

dz_fn_vector_angle =
{
	Vector_Angle_Fast(_this select 0, _this select 1);
};

dz_fn_vector_normalize =
{
	Vector_Normalize_Fast(_this);
};

dz_fn_vector_fromDir =
{
	Vector_FromDir_Fast(_this);
};

dz_fn_vector_rotate =
{
	Vector_Rotate_Fast(_this select 0, _this select 1);
};