//Vector constants
#define Vector_NULL		[ 0, 0, 0]
#define Vector_UP		[ 0, 0, 1]
#define Vector_DOWN		[ 0, 0,-1]
#define Vector_FRONT	[ 0, 1, 0]
#define Vector_BACK		[ 0,-1, 0]
#define Vector_RIGHT	[ 1, 0, 0]
#define Vector_LEFT		[-1, 0, 0]

//Accessors
#define Vector_X(v) ((v) select 0)
#define Vector_Z(v) ((v) select 1)
#define Vector_Y(v) ((v) select 2)

//Calculates the dot product of the given vectors
#define Vector_DotProduct(a,b) ([a,b] call vector_dotProduct)

//Calculates the cross product of the given vectors
#define Vector_CrossProduct(a,b) ([a,b] call vector_crossProduct)

//Magnitude (length) of the vector
#define Vector_Magnitude(v) ((v) call vector_magnitude)

//Adds two vectors together
#define Vector_Add(a,b) ([a,b] call vector_add)

//Subtract second vector from the first
#define Vector_Subtract(a,b) ([a,b] call vector_subtract)

//Returns the opposite vector of the given vector
#define Vector_Negate(v) ((v) call vector_negate)

//Multiplies the vector by a real number
#define Vector_Multiply(v,d) ([v,d] call vector_multiply)

//Divides the vector by a real number
#define Vector_Divide(v,d) ([v,d] call vector_divide)

//Calculates the angle between two given vectors
#define Vector_Angle(a,b) ([a,b] call vector_angle)

//Returns a vector with the same direction as the argument and a magnitude of 1.
#define Vector_Normalize(v) ((v) call vector_normalize)

//Returns a horizontal unit vector pointing in the specified direction
#define Vector_FromDir(a) ((a) call vector_fromDir)

//Rotates the vector horizontally by the specified angle in degrees
#define Vector_Rotate(v, d) ([v, d] call vector_rotate)