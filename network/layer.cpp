#include "layer.h"

Layer::Layer(int neuronCount, ActivationFunc activationFunc, float bias){
    this->m_NeuronCount = neuronCount;
    this->m_Bias = bias;

    // Create neurons
    for(int i = 0; i < this->m_NeuronCount; i++){
        this->neurons.push_back(new Neuron(activationFunc));
    }
}