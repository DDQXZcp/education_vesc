#include "mbed.h"

#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
//////Utils Function copied from VESC Source Code/////HT
#define UTILS_LP_FAST(value, sample, filter_constant)   (value -= (filter_constant) * (value - (sample)))