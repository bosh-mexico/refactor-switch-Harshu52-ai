#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <string>

// Enum for Payment Modes
enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown
};

// Checkout function
void checkout(PaymentMode mode, double amount);

#endif // CHECKOUT_H
