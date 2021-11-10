//Program to compute the mean, variance, std. deviation of a given sample
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>

std::vector<double> readfile_mean(std::string dataname_in){
    double a;
    double mean = 0;
    double i = 0;
    std::vector<double> mean_array={};
    std::ifstream infile(dataname_in);
    std::ofstream fout("mittelwerte.txt");
    while(infile>>a){
        mean+=a;
        if (i==8){
            mean=mean/(i+1);
            fout<<mean<<std::endl;
            mean_array.push_back(mean);
            i=0;
            mean=0;
        }
        else{
            i+=1;
        }

    }
    return mean_array;
}
std::vector<double> readfile_variance(std::string dataname_in,std::vector<double> mean){
    double a;
    double variance = 0;
    double i = 0;
    int n=0;
    std::vector<double> variance_array={};
    std::ifstream infile(dataname_in);
    std::ofstream fout("varianzen.txt");
    while(infile>>a){
        variance+=pow((a-mean[n]),2);
        if(i==8){
            variance=variance/(i+1);
            fout<<variance<<std::endl;
            variance_array.push_back(variance);
            i=0;
            n+=1;
            variance=0;
        }
        else{
            i+=1;
        }
        

    }
    return variance_array;
}
double averaging(std::vector<double> data){
    double average=0;
    for(int i=0;i<data.size();i++){
        average+=data[i];
    }
    average=average/data.size();
    return average;
}

int main(){
    std::vector<double> mean_values = readfile_mean("datensumme.txt");
    std::vector<double> variance_values=readfile_variance("datensumme.txt",mean_values);
    double mean_average=averaging(mean_values);
    double variance_average=averaging(variance_values);
    std::cout<<mean_average<<std::endl;
    std::cout<<variance_average<<std::endl;

}