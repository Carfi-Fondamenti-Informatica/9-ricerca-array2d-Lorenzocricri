#include <iostream>
using namespace std;
#include "lib.h"


int main() {
    int dim;
    cin>>dim;
    float num[dim];
    for (int i = 0; i < dim; ++i) {
        cin>>num[i];

    }
    numM(num,dim);
    cout<<numM(num, dim)<<endl;
    return 0;
}
