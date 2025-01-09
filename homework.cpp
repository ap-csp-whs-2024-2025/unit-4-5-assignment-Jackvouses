#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<int> baubau = {1,2,3,4,5};
    std::vector<double> subasuba = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::vector<std::string> konkon = {"bao", "peopeo", "mint", "coco", "laplus"};

    std::cout << "Task 2: " << std::endl;
    std::cout << baubau[0] << " " << baubau[2] << " " << baubau[4] << " " << std::endl;
    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}