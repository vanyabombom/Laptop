#pragma once

class Ram 
{
protected:
    char* model;
    double price;
public:
    Ram(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~Ram();
};
