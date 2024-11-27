#include <iostream>
#include <string>
using namespace std;
class GymMember
{
private:
    int memberId;
    string memberName;
    double membershipFee;

public:
    GymMember(int id, string name, double fee)
    {
        memberId = id;
        memberName = name;
        membershipFee = fee;
    }
    double calculateDiscountedFee(string membershipType = "Basic")
    {
        if (membershipType == "Regular")
        {
            return membershipFee * 0.9;
        }
        else if (membershipType == "Pro")
        {
            return membershipFee * 0.8;
        }
        else
        {
            return membershipFee;
        }
    }
    void displayDetails(string membershipType = "Basic")
    {
        double discountedFee = calculateDiscountedFee(membershipType);
        cout << "Member ID: " << memberId << endl;
        cout << "Name: " << memberName << endl;
        cout << "Original Membership Fee: " << membershipFee << endl;
        cout << "Discounted Membership Fee (" << membershipType << "): " << discountedFee << endl;
    }
};
int main()
{
    GymMember member1(101, "John Doe", 100.0);
    member1.displayDetails("Regular");
    member1.displayDetails("Pro");
    member1.displayDetails();
    return 0;
}