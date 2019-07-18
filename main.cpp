#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <future>
#include <mutex>

std::mutex m;
template <typename T>
auto maxElemnt(std::vector<T>& vec){
    std::lock_guard<std::mutex> lk(m);
    auto result = std::max_element(vec.begin(),vec.end());
    return result;
}


int main(){
    std::vector<int> z = {2,7,6,0,5,1,3,4};
    std::vector<float> zfloat = {2.5,7.7,6.5,0.7,5.8,1.2,3.4,4.3};
    std::vector<char> zchar = {'a','f','z','d','g','e','b','c'};
    std::vector<std::string> zstring = {"aba","ada","asa","awa","aea","aqa","apa","ala"};

    std::cout << "Maximo elemento sin hilos: " << *maxElemnt(z) << "\n";
    std::cout << "Maximo elemento sin hilos: " << *maxElemnt(zfloat) << "\n";
    std::cout << "Maximo elemento sin hilos: " << *maxElemnt(zchar) << "\n";
    std::cout << "Maximo elemento sin hilos: " << *maxElemnt(zstring) << "\n\n";

    auto a1 = std::async(&maxElemnt<int>,std::ref(z));
    auto a2 = std::async(&maxElemnt<float>,std::ref(zfloat));
    auto a3 = std::async(&maxElemnt<char>,std::ref(zchar));
    auto a4 = std::async(&maxElemnt<std::string>,std::ref(zstring));
    std::cout << "Maximo elemento con hilos: " <<*a1.get() << "\n";
    std::cout << "Maximo elemento con hilos: " <<*a2.get() << "\n";
    std::cout << "Maximo elemento con hilos: " <<*a3.get() << "\n";
    std::cout << "Maximo elemento con hilos: " <<*a4.get() << "\n\n";

    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";

    return 0;
}
