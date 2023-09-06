#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance{
protected:
int powerRating;
bool isOn;
public:
Appliance();
Appliance(int powerRating);

void turnOn();
void turnOff();

virtual double getPowerConsumption() = 0;

bool get_isOn();
void set_isOn(bool state);


};
#endif