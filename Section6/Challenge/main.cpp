// Section 6
// Challenge

/*
 * Frank's Carpet Cleaning Service
 * Charges:
 *      $25 per small room
 *      $35 per large room  
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * =============================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

int main( ) {
    cout << "Frank's Carpet Cleaning Service" << endl;
    
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double sales_tax_rate {0.06};
    const int expirate_time {30}; // days
    
    cout << "\nHow many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    
    double cost_no_tax {(small_rooms * price_small_room) + (large_rooms * price_large_room)};
    cout << "Cost: $" << cost_no_tax << endl;
    double tax_cost {cost_no_tax * 0.06};
    cout << "Tax: $" << tax_cost << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << tax_cost + cost_no_tax << endl;
    cout << "This estimate is valid for 30 days." << endl;
    
    return 0;
}
