#include <iostream>
/*
You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.

Example 1:

Input: s = "010"
Output: "001"
Explanation: Because there is just one '1', it must be in the last position. So the answer is "001".
Example 2:

Input: s = "0101"
Output: "1001"
Explanation: One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".


Constraints:

1 <= s.length <= 100
s consists only of '0' and '1'.
s contains at least one '1'.
*/
class Solution {
public:
    std::string maximumOddBinaryNumber(std::string s)
    {
        int oneQuantity {};
        int zeroQuantity {};
        std::string res {};
        for(auto &num : s)
        {
            if(num == '1') ++oneQuantity;
            else ++zeroQuantity;
        }
        for(;oneQuantity - 1 > 0; --oneQuantity)
            res += '1';

        for(;zeroQuantity > 0; --zeroQuantity)
            res += '0';

        res += '1';

        return res;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.maximumOddBinaryNumber("1") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("1100010010001010011001100110100111000001010101110110111011011101100000010110110100001111011110110100") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("1111111111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("1111111111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000001") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("0111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("0101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101") << std::endl;
    std::cout << sol.maximumOddBinaryNumber("1010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010") << std::endl;

    return 0;
}
