#ifndef __NETWORK__
#define __NETWORK__

#include <vector>
#include "layer.h"
#include "../math/math.h"

using namespace std;

class Network{
    public:
        Network(int layerCount, vector<Layer*> layers, vector<float> weights = {});
        ~Network();
        void Train();
        int GetLayerCount() const {return this->m_LayerCount;}
    public:
        vector<Layer *> layers;
    private:
        void SetBasicWeights(vector<float> basicWeights);
    private:
        int m_LayerCount;
};

#endif