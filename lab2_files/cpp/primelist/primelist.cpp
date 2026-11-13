#include "primelist.h"

namespace {

bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

} // namespace

std::vector<int> primelist(int l, int r) {
    std::vector<int> result;
    for (int n = l; n <= r; ++n) {
        if (isprime(n)) {
            result.push_back(n);
        }
    }
    return result;
}