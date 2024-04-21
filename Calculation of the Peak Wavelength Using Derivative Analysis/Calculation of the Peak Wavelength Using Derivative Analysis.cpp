// include the header file that is a part of the C++ standard library for input and output
#include <iostream>

// define the main() function where the algorithm will be written
int main() {

    double temperature; // Temperature variable in Kelvin definition
    double peakWavelength; // Peak wavelength variable in metres definition

    // Input temperature from the user
    std::cout << "Enter the temperature (in Kelvin): ";
    std::cin >> temperature;

    // Compute the peak wavelength
    peakWavelength = 2.897163e-3 / temperature;

    // Output the result
    std::cout << "The peak wavelength is " << peakWavelength << " m " << std::endl;


    // Exit the main() function
    return 0;
}