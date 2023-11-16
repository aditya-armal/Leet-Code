class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        const int bits = 32;

        for (int i = 0; i < bits; ++i) {
            result = (result << 1) | (n & 1);
            n >>= 1;
        }

        return result;
    }
};