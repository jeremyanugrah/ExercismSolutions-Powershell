#include <cmath>
#include "darts.h"

namespace darts {

// TODO: add your solution here
int score(float x, float y) {
    float distance = std::sqrt((x * x) + (y * y));
    if(distance >= 0 && distance <= 1) {
        return 10;
    }
    else if(distance > 1 && distance <= 5) {
        return 5;
    }
    else if(distance > 5 && distance <= 10) {
        return 1;
    }
    else {
        return 0;
    }
    // return 0;
}

}  // namespace darts
