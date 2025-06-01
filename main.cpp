// ITCS 2530 Week 2 Assignment- The Cheesy Program
// Marc Melendez

#include <iostream>  
#include <iomanip>  
#include <string> 
#include <cmath>

using namespace std;  

///////////////////////////////////////  
int main()  
{  
    int container, kg;  
	double cost, profit, package;
    cost = 4.12;  
    profit = 1.45;  
	package = 2.76;

    cout << "Please enter the total number of kilograms of cheese produced: ";  
    cin >> kg;  

    container = ceil(kg / package);

    string s1 = "The cost of producing " + to_string(container) + " container(s) of cheese is: ";  
	string s2 = "The profit from selling " + to_string(container) + " container(s) of cheese is: ";
    


    
	cout << fixed << setprecision(2);
	cout << setw(50) << left << "The number of containers to hold the cheese is: " << setw(15) << right << container << endl;
    cout << setw(50) << left << s1 << setw(10) << right << '$' << container * cost << endl;  
	cout << setw(50) << left << s2 << setw(8) << right << '$' << container * profit << endl;
    return 0;  
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.
//container = kg / 2.76;
//cost = kg * 4.12;
//profit = kg * 1.45;