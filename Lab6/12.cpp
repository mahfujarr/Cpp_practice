#include<iostream>
using namespace std;
class Connection
{
private:
    /* data */
public:
    double connectionID;
    bool status = true;
    Connection(/* args */);
    void sendData()
    {
        cout << "Sending some data." << endl;
    }
    ~Connection();
};

Connection::Connection(/* args */)
{
    cout << "Connection status: " << (status? "Connected." : "Disconnected.") << endl;
}

Connection::~Connection()
{
    status = false;
    cout << "Connection status: " << (status? "Connected." : "Disconnected.") << endl;
}
int main()
{
    Connection line1;
    line1.sendData();
}
