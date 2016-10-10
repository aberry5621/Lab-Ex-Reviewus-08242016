//
//  main.cpp
//  Lab Ex Reviewus 08242016
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

# define prog 2

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

int main() {
    
    cout << "Compute Volume of Cylinder \n";
    
    // Initialize data storage
    double const PI = 3.14159;
    double radius = 0.0, length = 0.0, area = 0.0, volume = 0.0;
    
    // Input
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;
    
    // Processing
    area = pow(radius, 2.0) * PI;
    volume = area * length;
    
    // Output
    cout << "AREA: " << area << endl;
    cout << "VOLUME: " << volume << endl;
    
    return 0;
}


#endif