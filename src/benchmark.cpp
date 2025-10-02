#include "benchmark.h"

#include <vector>
#include <chrono>
#include <iostream>
#include <iomanip>

namespace benchmark
{
    std::vector<testCase> tests;

    void addTestCase(std::function<void()> function_to_run, size_t iterations)
    {
        testCase t(function_to_run, iterations);
        tests.push_back(t);
    }

    void start()
    {
        std::vector<long long> results;
        results.reserve(tests.size());

        for (size_t i = 0; i < tests.size(); ++i)
        {
            results.push_back(tests.at(i).run());
        }

        std::cout << std::fixed << std::setprecision(3);

        for (size_t i = 0; i < results.size(); ++i)
        {
            double ms_spent = (double)results.at(i) / 1'000'000;
            double avg_us_spent = (double)results.at(i) / 1'000 / tests.at(i).getIterationsRan();
            std::cout << "Test " << i + 1 << " - Total " << ms_spent << "ms Average " << avg_us_spent << "us\n";
        }
    }
} // namespace benchmark