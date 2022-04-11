#include<iostream>
#include "Dog.h"

Dog::Dog() : mBreed{RETRIEVER}
{
    std::cout << "[Dog] constructor!" << std::endl;
}


Dog::~Dog()
{
    std::cout << "[Dog] destructor!" << std::endl;
}

Dog::BREED Dog::GetBreed() const
{
    return mBreed;
}

void Dog::SetBreed(BREED breed)
{
    mBreed = breed;
}

void Dog::Roll()
{
    std::cout << "Rolling..." << std::endl;
}