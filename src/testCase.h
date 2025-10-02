#include <functional>
#include <chrono>

class testCase
{
public:
    testCase(std::function<void()> func, size_t i);
    long long run();
    size_t getIterationsRan();

private:
    std::function<void()> m_function;
    size_t m_iterations_ran;
    size_t m_target_iterations;

    std::chrono::time_point<std::chrono::high_resolution_clock> m_start_point;
};