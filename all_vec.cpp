#include <iostream>
#include <map>
#include <string>
#include "my_vec.h"

int main() {
    // Create a map to store vectors with names
    std::map<std::string, Vector> vectorMap;

    // Insert vectors into the map
    vectorMap["David"] = Vector(1.0, 2.0, 3.0);
    vectorMap["Dana"] = Vector(4.0, 5.0, 6.0);
    vectorMap["Moshe"] = Vector(1.0, 2.0, 3.0);
    vectorMap["Vered"] = Vector(4.0, 5.0, 6.0);
    vectorMap["Mohammed"] = Vector(1.0, 2.0, 3.0);
    vectorMap["Yasmin"] = Vector(4.0, 5.0, 6.0);
     vectorMap["Ahmed"] = Vector(1.0, 2.0, 3.0);
    vectorMap["Lucy"] = Vector(4.0, 5.0, 6.0);
     vectorMap["Naftali"] = Vector(1.0, 2.0, 3.0);
    vectorMap["Ayele"] = Vector(4.0, 5.0, 6.0);
    

    // Access and use vectors from the map
    std::cout << "Vector 'vered': " << vectorMap["Vered"] << std::endl;

    return 0;
}

void PrintByName(const std::map<std::string, Vector>& vectorMap, const std::string& name) {
    auto it = vectorMap.find(name);
    if (it != vectorMap.end()) {
        std::cout << name << ": " << it->second << std::endl;
    } else {
        std::cout << "Vector with name '" << name << "' not found." << std::endl;
    }
}
