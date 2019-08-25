#include <string>
using namespace std;

class HealthChecker {
private:
    string name;
    double height;
    double weight;
    double bmi;
public:
    double getBmi();
    HealthChecker(string name,double height,double weight);
};