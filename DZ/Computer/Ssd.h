#pragma once

class Ssd 
{
protected:
    char* model;
    double price;
public:
    Ssd(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~Ssd();
};
