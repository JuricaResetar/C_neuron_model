#include "nn_defs.h"
#include <math.h>

void tansig(float *data, float *result){
    *result = 2./(1+exp(-2* *(data)))-1;
}
