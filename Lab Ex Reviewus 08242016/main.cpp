//
//  main.cpp
//  Lab Ex Reviewus 08242016
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

# define prog 4

#if(prog == 1)

#include <iostream>
using namespace std;

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

#include <iostream>
#include <cmath>
using namespace std;

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

#elif(prog == 3)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Power Table \n";
    
    cout << "Table of Powers" << endl;
    int w = 10;
    double a = 0.0;
    cout << setw(w) << "a" << setw(w) << "a^2" << setw(w) << "a^3" << endl;
    a = 1.0;
    cout << setw(w) << a << setw(w) << pow(a, 2) << setw(w) << pow(a, 3) << endl;
    a = 2.0;
    cout << setw(w) << a << setw(w) << pow(a, 2) << setw(w) << pow(a, 3) << endl;
    a = 3.0;
    cout << setw(w) << a << setw(w) << pow(a, 2) << setw(w) << pow(a, 3) << endl;
    a = 4.0;
    cout << setw(w) << a << setw(w) << pow(a, 2) << setw(w) << pow(a, 3) << endl;
    
    return 0;
}

#elif(prog == 4)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Compute Expression \n";

    double a = 9.5, b = 4.5, c = 2.5, d = 3.0, e = 45.5, f = 3.5;
    cout << ((a * b) - (c * d)) / (e -f) << endl;
    
    return 0;
}

#endif