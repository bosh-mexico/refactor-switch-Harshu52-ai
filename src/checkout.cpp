#include <iostream>
#include "checkout.h"

using namespace std;

// Checkout function
void checkout(PaymentMode mode, double amount) {
    switch (mode) {
        case PaymentMode::PayPal:
            cout << "Processing PayPal payment of $" << amount << endl;
            // Add PayPal-specific logic here
            break;

        case PaymentMode::GooglePay:
            cout << "Processing GooglePay payment of $" << amount << endl;
            // Add GooglePay-specific logic here
            break;

        case PaymentMode::CreditCard:
            cout << "Processing Credit Card payment of $" << amount << endl;
            // Add Credit Card-specific logic here
            break;

        default:
            cout << "Invalid payment mode selected!" << endl;
            break;
    }
}
