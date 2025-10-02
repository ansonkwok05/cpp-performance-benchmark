#include "testCase.h"

#include <functional>

namespace benchmark
{
    void addTestCase(std::function<void()> function_to_run, size_t iterations);

    void start();
} // namespace benchmark