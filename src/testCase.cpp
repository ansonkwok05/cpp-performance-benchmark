#include "testCase.h"

#include <chrono>

testCase::testCase(std::function<void()> func, size_t i)
{
    m_function = func;
    m_target_iterations = i;
}

long long testCase::run()
{
    m_start_point = std::chrono::high_resolution_clock::now();

    for (size_t m_iterations_ran = 0; m_iterations_ran < m_target_iterations; ++m_iterations_ran)
    {
        m_function();
    }

    return (std::chrono::high_resolution_clock::now() - m_start_point).count();
}

size_t testCase::getIterationsRan()
{
    return m_iterations_ran;
}