#include <iostream>

using namespace std;

class Food
{
protected:
    string brandName;
    double unitePrice;

public:
    Food(string bName, double uprice)
    {
        brandName = bName;
        unitePrice = uprice;
    }
    Food()
    {
        brandName = "unknown";
        unitePrice = 0;
    }
    string getBrandName() { return brandName; }
    double getUnitPrice() { return unitePrice; }

    void displayInfo()
    {
        std::cout << "Brand Name: " << brandName << std::endl;
        std::cout << "Unit Price: Tk" << unitePrice << std::endl;
    }
};
class Rice : public Food
{
private:
    double weight;

public:
    Rice(string brName, double utPrice, double wgt) : Food(brName, utPrice)
    {
        weight = wgt;
    }
    double getPrice() { return unitePrice * weight; }
    double getWeight() { return weight; }
};

class Bread : public Food
{
private:
    int count;

public:
    Bread(string bName, double uPrice, int cnt) : Food(bName, uPrice)
    {
        count = cnt;
    }
    int getCount() { return count; }
    double getPrice() { return unitePrice * count; }
};

int main()
{
    Rice rice("Utshab", 80.00, 10);

    Bread bread("Altime", 60.00, 2);

    cout << "Rice brand: " << rice.getBrandName() << endl;
    cout << "Rice price per kg: " << rice.getUnitPrice() << endl;
    cout << "Rice weight: " << rice.getWeight() << " kg" << endl;
    cout << "Total rice price: " << rice.getPrice() << endl;

    cout << "\nBread brand: " << bread.getBrandName() << endl;
    cout << "Bread price per piece: " << bread.getUnitPrice() << endl;
    cout << "Number of breads: " << bread.getCount() << endl;
    cout << "Total bread price: " << bread.getPrice() << endl;

    return 0;
}