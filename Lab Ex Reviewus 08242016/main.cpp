//
//  main.cpp
//  Lab Ex Reviewus 08242016
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

# define prog 1

#if(prog == 1)

int main() {
    
    cout << "Convert Celsius to Farenheit 911 \n";
    
    // Initialize data storage
    double celsius = 0.0, farenheit = 0.0;
    
    // Input
    cout << "Enter a degree: ";
    cin >> celsius;
    
    // Processing
    farenheit = (static_cast<double>(9) / 5) * celsius + 32;
    
    // Output
    cout << "The temperature is " << farenheit << "°F" << endl;
    
    
    return 0;
}


#elif(prog == 2)



#endif