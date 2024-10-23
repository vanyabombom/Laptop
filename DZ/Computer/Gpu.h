#pragma once

class Gpu 
{
protected:
    char* model;
    double price;
public:
    Gpu(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~Gpu();
};
