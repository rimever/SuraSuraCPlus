
#include <string>

struct HealthCheck {
    std::string name;
    double height;
    double weight;
    double bmi;
};

double getBmi(const HealthCheck *phc);
double getBmi(double height, double weight);