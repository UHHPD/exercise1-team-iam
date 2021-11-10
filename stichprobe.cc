//Program to compute the mean, variance, std. deviation of a given sample
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

double readfile_mean(std::string dataname_in){
    double a;
    double mean = 0;
    double i = 0;
    std::ifstream infile(dataname_in);
    while(infile>>a){
        mean+=a;
        i+=1;


    }
    mean=mean/i;
    std::cout<<mean<<std::endl;
    return mean;
}
double readfile_variance(std::string dataname_in,double mean){
    double a;
    double variance = 0;
    double i = 0;
    std::ifstream infile(dataname_in);
    while(infile>>a){
        variance+=pow((a-mean),2);
        i+=1;

    }
    variance=variance/i;
    std::cout<<variance<<std::endl;
    return variance;
}

int main(){
    double mean = readfile_mean("datensumme.txt");
    double variance = readfile_variance("datensumme.txt",mean);
    double std_deviation=sqrt(variance);
    std::cout<<std_deviation<<std::endl;

}