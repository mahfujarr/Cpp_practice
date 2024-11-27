#include <iostream>
using namespace std;
class ElectricityBill
{
private:
    int consumerNumber;
    int unitsConsumed;
    double ratePerUnit;
    double billAmount;

public:
    ElectricityBill(int consumerNumber, int unitsConsumed, double ratePerUnit = 7.0)
    {
        this->consumerNumber = consumerNumber;
        this->unitsConsumed = unitsConsumed;
        this->ratePerUnit = ratePerUnit;
    }
    void calculateBillAmount()
    {
        billAmount = unitsConsumed * ratePerUnit;
    }
    void displayBill()
    {
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Rate per Unit: " << ratePerUnit << endl;
        cout << "Total Bill Amount: " << billAmount << endl;
    }
};
int main()
{
    ElectricityBill bill1(654651, 321);
    bill1.calculateBillAmount();
    bill1.displayBill();
    return 0;
}