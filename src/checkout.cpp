#include <iostream>
#include "checkout.h"

using namespace std;

// Map PaymentMode to handler functions
static const map<PaymentMode, function<void(double)>> paymentHandlers = {
    {PaymentMode::PayPal,     [](double amount) { cout << "Processing PayPal payment of $" << amount << endl; }},
    {PaymentMode::GooglePay,  [](double amount) { cout << "Processing GooglePay payment of $" << amount << endl; }},
    {PaymentMode::CreditCard, [](double amount) { cout << "Processing Credit Card payment of $" << amount << endl; }}
};

// Checkout function without switch
void checkout(PaymentMode mode, double amount) {
    auto it = paymentHandlers.find(mode);
    if (it != paymentHandlers.end()) {
        it->second(amount); // Call the corresponding lambda
    } else {
        cout << "Invalid payment mode selected!" << endl;
    }
}
