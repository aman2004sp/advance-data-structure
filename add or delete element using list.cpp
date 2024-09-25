#include <iostream>
#include <list>
#include <iterator> 

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

   
    std::list<int>::iterator it = lst.begin();
    
   
    std::advance(it, 2);

    lst.insert(it, 10);

    std::cout << "After insertion: ";
    for (int x : lst) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    it = lst.begin();
    std::advance(it, 2);

    
    lst.erase(it);

    std::cout << "After removal: ";
    for (int x : lst) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
