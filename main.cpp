#include <vector>
#include "network/layer.h"
#include "network/neuron.h"
#include "network/network.h"
#include <iostream>

using namespace std;

int main(){
    // Create Traindata
    // (Age, Height)
    const vector<vector<float>> inputData = {{0.05, 0.1}};
    // (Gender) (Male = 1, Female = 0)
    const vector<vector<float>> outputData = {{0.01, 0.99}};

    // Create Testdata
    // (Age, Height)
    const vector<float> testInputData = {15.0, 1.8};
    // (Gender) (Male = 1, Female = 0)
    const vector<float> testOutputData = {1.0};

    // Create Layers
    vector<Layer*> layers = {new Layer(2, LINEAR, 1), new Layer(2, SIGMOID, 0.35), new Layer(2, SIGMOID, 0.6)};

    // Create Basic Weights(max - min) * ((((float) rand()) / (float) RAND_MAX)) + min ;
    vector<float> basicWeights = {0.15, 0.2, 0.25, 0.3, 0.4, 0.45, 0.5, 0.55};

    // Create Network
    Network network(3, layers, basicWeights);

    // Train Network
    network.Train();

    // Start Network with specific data
    return 0;
}