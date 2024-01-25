#include <iostream>
#include "../database/dbWalletBioskop.h"
using namespace std;

void mTopupSaldo (double &totalSaldo, double bayar)
{
    totalSaldo += bayar;
}