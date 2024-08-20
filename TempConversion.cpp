#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open input and output files
    ifstream inputFile("FahrenheitTemperature.txt");
    ofstream outputFile("CelsiusTemperature.txt");

    // Check if files opened successfully
    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files" << endl;
        return 1;
    }

    // Process data
    string location;
    int fahrenheit, celsius;

    while (inputFile >> location >> fahrenheit) {
        // Convert Fahrenheit to Celsius
        celsius = (fahrenheit - 32) * 5 / 9;

        // Output conversion result for user verification (I need to see stuff working)
        cout << location << " " << fahrenheit << " F converts to " << celsius << " C" << endl;

        // Write converted data to output file following same style as input file
        outputFile << location << " " << celsius << endl;
    }

    // Close files for memory reasons
    inputFile.close();
    outputFile.close();

    // Inform the user of successful completion
    cout << "\nData recorded to CelsiusTemperature.txt" << endl;

    return 0;
}
