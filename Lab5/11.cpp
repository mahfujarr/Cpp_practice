#include <iostream>
#include <string>
using namespace std;
class Speaker
{
public:
    string name;
    string topic;

    void setTopic(const string &newTopic)
    {
        topic = newTopic;
    }

    void displayDetails()
    {
        cout << "Speaker Name: " << name << endl;
        cout << "Topic: " << topic << endl;
    }
};
int main()
{
    Speaker speakers[10];

    speakers[0].name = "Dr. Alice Johnson";
    speakers[0].setTopic("AI and Machine Learning");

    speakers[1].name = "Prof. Bob Smith";
    speakers[1].setTopic("Quantum Computing");

    speakers[2].name = "Dr. Charlie Brown";
    speakers[2].setTopic("Cybersecurity");

    speakers[3].name = "Prof. David Lee";
    speakers[3].setTopic("Blockchain Technology");

    speakers[4].name = "Dr. Emily Wilson";
    speakers[4].setTopic("Internet of Things (IoT)");

    speakers[5].name = "Prof. Frank Miller";
    speakers[5].setTopic("Cloud Computing");

    speakers[6].name = "Dr. Grace Kim";
    speakers[6].setTopic("Data Science and Analytics");

    speakers[7].name = "Prof. Henry Davis";
    speakers[7].setTopic("Augmented Reality (AR) and Virtual Reality (VR)");

    speakers[8].name = "Dr. Isabella Moore";
    speakers[8].setTopic("Bioinformatics");

    speakers[9].name = "Prof. Jack Taylor";
    speakers[9].setTopic("Robotics and Automation");
    for (int i = 0; i < 10; i++)
    {
        speakers[i].displayDetails();
        cout << endl;
    }
    return 0;
}