#include "src/benchmark.h"

// add required libraries for benchmark

//

int main()
{
    benchmark::addTestCase(
        []() {
            // code to benchmark
        },
        1'000'000);

    benchmark::start();
    return 0;
}