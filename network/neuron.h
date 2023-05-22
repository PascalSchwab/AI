#ifndef __NEURON__
#define __NEURON__

#include <vector>
#include "../math/math.h"

using namespace std;

class Neuron{
    public:
        Neuron(ActivationFunc activationFunc);
        ~Neuron();
        ActivationFunc GetActivationFunc() const {return this->m_ActivationFunc;}
        float GetOutput();
    public:
        vector<float> weights;
    private:
        ActivationFunc m_ActivationFunc;
};

#endif