#include "network.h"

Network::Network(int layerCount, vector<Layer*> layers, vector<float> basicWeights){
    this->layers = layers;
    this->m_LayerCount = layerCount;

    SetBasicWeights(basicWeights);
}

Network::~Network(){
    
}

void Network::SetBasicWeights(vector<float> basicWeights){
    int currentNeuron = 0;
    for(int i = 1; i < m_LayerCount; i++){
        // For every neuron of the layer i
        for(int j = 0; j < this->layers[i]->GetNeuronCount(); j++){
            // For every neuron of the layer i-1
            for(int k = 0; k < this->layers[i-1]->GetNeuronCount(); k++){
                if(basicWeights.size() == 0){
                    this->layers[i]->neurons[j]->weights.push_back(randomFloat(0.0, 1.0));
                }
                else{
                    this->layers[i]->neurons[j]->weights.push_back(basicWeights[currentNeuron]);
                }
                currentNeuron++;
            }
        }
    }
}

void Network::Train(){
    
}