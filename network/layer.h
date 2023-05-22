#ifndef __LAYER__
#define __LAYER__

#include <vector>
#include "neuron.h"
#include "../math/math.h"

using namespace std;

class Layer{
    public:
        Layer(int neuronCount, ActivationFunc activationFunc, float bias = randomFloat(0.0, 1.0));
        ~Layer();
        float GetBias() const {return m_Bias; }
        int GetNeuronCount() const {return m_NeuronCount;}
    public:
        vector<Neuron *> neurons;
    private:
        float m_Bias;
        int m_NeuronCount;
};

#endif