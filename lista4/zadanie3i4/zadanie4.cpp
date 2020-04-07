#include <iostream>
#include "random.h"
#include <algorithm>
#include <vector>

int main()
{
    const int rozmiar = 100000; 
    double generated_numbers[rozmiar];
    Random rnd;
    for(int i = 0; i < rozmiar; i++)
    {
        generated_numbers[i] = rnd();
    }
    int histogram_data[10];
    for(int i = 0;i < rozmiar;i++)
    {
        if(generated_numbers[i]<0.1) {histogram_data[0]++;continue;}
        if(generated_numbers[i]<0.2) {histogram_data[1]++;continue;}
        if(generated_numbers[i]<0.3) {histogram_data[2]++;continue;}
        if(generated_numbers[i]<0.4) {histogram_data[3]++;continue;}
        if(generated_numbers[i]<0.5) {histogram_data[4]++;continue;}
        if(generated_numbers[i]<0.6) {histogram_data[5]++;continue;}
        if(generated_numbers[i]<0.7) {histogram_data[6]++;continue;}
        if(generated_numbers[i]<0.8) {histogram_data[7]++;continue;}
        if(generated_numbers[i]<0.9) {histogram_data[8]++;continue;}
        if(generated_numbers[i]<1.0) {histogram_data[9]++;continue;}
    }
    std::cout<<"\nIlosc w przedziale: "<<"\n";
    for(int i =0;i<10;i++)
    {
        if(i<9)
        std::cout<<"od"<<" 0."<<i<<" do 0."<<i+1<<" :  "<<histogram_data[i]<<"\n";
        else
        std::cout<<"od 0.9 do 1.0"<<" :  "<<histogram_data[i]<<"\n";
    }
}