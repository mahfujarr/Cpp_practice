#include <iostream>
using namespace std;

class Task
{
private:
    bool completed;

public:
    Task(bool status) : completed(status) {}

    bool isCompleted() const { return completed; }

    Task &operator!()
    {
        completed = !completed;
        return *this;
    }
};

int main()
{
    Task task(false);
    cout << "Task completed: " << task.isCompleted() << endl;
    !task;
    cout << "Task completed after toggle: " << task.isCompleted() << endl;
    return 0;
}
