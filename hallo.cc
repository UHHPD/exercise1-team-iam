#include <iostream>
#include <fstream>
#include <string>

std::string get_filename(){
    std::string dataname;
    std::cout<<"Enter the filename including datatype"<<std::endl;
    std::cin>>dataname;
    std::cout<<"Entered filename "<<dataname<<std::endl;
    return dataname;
}
void readfile(std::string dataname){
    int a;
    int b;
    int c;
    std::ifstream infile(dataname);
    std::ofstream fout("ausgabe.txt");
    fout <<"Sum"<<std::endl;
    while(infile>>a>>b){
        c=a+b;
        fout <<c<<std::endl;

    }
    fout.close();
}
int main(){
    std::string dataname=get_filename();
    readfile(dataname);


} 