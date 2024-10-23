#pragma once
class Cpu
{
protected:
	char* model;
	double price;
public:
	Cpu(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	~Cpu();
};

