#include<iostream>
#include"Laptop.h"

using namespace std;

int main()
{
	Laptop laptop("Lenovo", 290, "Intel i5", 200, " RTX 3070", 350, "HyperX 32 GB", 100, "Kinghston 1000 GB", 350);
	laptop.Output();
}