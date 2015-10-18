//Calculates the greatest common divisor of two numbers
#define Math_GCD(a, b) ([a, b] call math_gcd)

//Calculates the greatest common divisor of all elements of the given array
#define Math_GCDArray(a) ((a) call math_gcdx)

//Selects a random value in the specified range [min, max] min inclusive, max exclusive
#define Math_RandomRange(min, max) ([min, max] call math_randomRange)

#define Math_Clamp(value, pmin, pmax) (pmin max (pmax min value))