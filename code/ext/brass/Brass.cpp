//
// Created by pby on 2022/8/13.
//

#include <iostream>
#include "Brass.h"


Brass::Brass(const string &name, long an, double bal) {
    this->name = name;
    this->accNum = an;
    this->balance = bal;
}

void Brass::deposit(double amt) {
    if (amt > 0) {
        balance += amt;
    }
}

void Brass::withDraw(double amt) {
    if (balance >= amt) {
        balance -= amt;
    }
}

double Brass::getBalance() const {
    return balance;
}

void Brass::viewAcct() const {
    cout << "name:" << name << ", accNum:" << accNum << ", balance:" << balance << endl;
}

Brass::~Brass() {
}