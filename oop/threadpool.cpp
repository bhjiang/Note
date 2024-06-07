#include <vector>
#include <queue>
#include <thread>
#include <functional>
using namespace std;
class threadpool{
    private:
        vector<thread> threads;
        queue<function<void()>> tasks;
};