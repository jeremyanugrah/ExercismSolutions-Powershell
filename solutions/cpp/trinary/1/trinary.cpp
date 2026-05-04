#include "trinary.h"

namespace trinary {
    long to_decimal(std::string num){
        long result{0};
        long power_of_three{1};

        // Loop backwards from length-1 down to 0
        for (int i = num.length() - 1; i >= 0; i--) {
            char c = num[i];
            
            // 1. Validation check
            if (c < '0' || c > '2') {
                return 0; // Return 0 immediately if invalid
            }
            
            // 2. Calculation
            int digit = c - '0';
            result += (digit * power_of_three);
            
            // 3. Prepare power for next iteration
            power_of_three *= 3;
        }
            return result; // Return only after loop finishes
    }
}  // namespace trinary
