/*************************************
 * Tim Loveland
 * 5/27/2021    
 * 
 * Frank's Carpet Cleaning Service
 * 
 * This program calculates the total cost for a 
 * user to get their carpets cleaned for small
 * and large rooms.
 * 
 * Output Example:
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms
 * they would like cleaned and provide an estmiate such as:
 * 
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 *======================================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 * **********************************/
//Preprocessor directive
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    //Define constants
	const double price_for_small_room {25};     //price for small room  
    const double price_for_large_room {35};     //price for large room
    const double tax_rate {0.06} ;              //sales tax rate
    const int estimate_duration {30};           //days for estimate
    
    //Define variables
    int small_rooms {0};        //amount of small rooms
    int large_rooms {0};        //amount of large rooms
    
    //Display header
    cout << "*****************************************" << endl;
    cout << "*    Frank's Carpet Cleaning Service    *" << endl;
    cout << "*****************************************" << endl;
    //Display Prices
    cout << "\n Prices: " << endl;
    cout << "   Small room: $" << price_for_small_room << endl;
    cout << "   Large room: $" << price_for_large_room << endl;
    cout << "\n Sales Tax: " << tax_rate * 100 << "%" << endl;
    cout << " Estimates are valid for " << estimate_duration << " days." << endl;
    cout << "\n------------------------------------------" << endl;
    
    cout << "\nEstimate for carpet cleaning service" << endl << endl;
    //User enters number of small rooms
    cout << "Number of small rooms to be cleaned: ";
    //Validate entry
while (!(cin >> small_rooms) || small_rooms < 0)
    {
        //Display error
        cout << "Error: please enter a number: ";
        //Clear previous input
        cin.clear();
        //Discard previous input
        cin.ignore(123, '\n');
        
    }
    //User enters number of large rooms
    cout << "Number of large rooms to be cleaned: ";
    //Validate entry
    while (!(cin >> large_rooms) || large_rooms < 0)
    {
        //Display error
        cout << "Error: please enter a number: ";
        //Clear previous input
        cin.clear();
        //Discard previous input
        cin.ignore(123, '\n');
        
    }
    
    //Display charges
    cout << "\n------------------------------------------" << endl << endl;
    cout << "Charges for carpet cleaning service" << endl;
    
    //Calculate cost of large and small rooms to be cleaned
    double cost {(price_for_small_room * small_rooms) + (price_for_large_room * large_rooms)};
    //Cost
    cout << "\nCost: $" << cost << endl;
    
    //Calcuate tax amount
    double tax_amount {cost * tax_rate};
    //Tax
    cout << "Tax: $" << tax_amount << endl;
    
    //Calculate total cost
    double total_cost {cost + tax_amount};
    //Total cost
    cout << "==========================" << endl;
    cout << "Total cost: $" << total_cost << endl;
    cout << "==========================" << endl;
    
    //Display estimate duration
    cout << "This estimate is valid for " << estimate_duration << " days" << endl;

    //Farewell to user
    cout << "\nThank you for using our estimate program!" << endl;
    
    cout << endl << endl;
	return 0;
}
