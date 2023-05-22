#ifndef __MATH__
#define __MATH__

#include <random>

enum ActivationFunc{
    SIGMOID, LINEAR, RELU
};

float randomFloat(float min, float max){
    return (max - min) * ((((float) rand()) / (float) RAND_MAX)) + min;
}

#endif