#include <iostream>
using namespace std;

class Signal
{
private:
    bool state;

public:
    Signal(bool initialState) : state(initialState) {}

    bool getState() const { return state; }

    Signal operator!()
    {
        return Signal(!state);
    }
};

int main()
{
    Signal signal(1);
    cout << "Initial Signal: " << signal.getState() << endl;
    Signal invertedSignal = !signal;
    cout << "Inverted Signal: " << invertedSignal.getState() << endl;
    return 0;
}
