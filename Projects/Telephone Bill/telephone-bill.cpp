#include <iostream>
using namespace std;

void showCustomerInfo(string customerName, string address, string telNumber, string date)
{
    cout << "*************************************** Telephone Bill ****************************************" << endl;

    cout << "Name: " << customerName << "                      " << "Date: " << date << endl;
    cout << "Address: " << address << "                   " << "Tel. No: " << telNumber << endl;
    cout << endl;
    cout << endl;
}

void showBillDetails(float minLocal, float minNwd, float minIsd)
{
    float rateLocal = 1.50;
    float rateNwd = 3.50;
    float rateIsd = 6.00;
    float monthlyRate = 80.00;

    float tLocal = minLocal * rateLocal;
    float tNwd = minNwd * rateNwd;
    float tIsd = minIsd * rateIsd;

    float sTotal = tLocal + tNwd + tIsd + monthlyRate;
    float vat = sTotal * 0.15;
    float gTotal = sTotal + vat;

    cout << "Type" << "            " << "Minute" << "            " << "Rate" << "            " << "Total TK." << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "Local" << "            " << minLocal << "                " << rateLocal << "            " << tLocal << endl;
    cout << "NWD" << "              " << minNwd << "                " << minNwd << "               " << tNwd << endl;
    cout << "Foreign" << "          " << minIsd << "                " << rateIsd << "              " << tIsd << endl;
    cout << "Monthly Rate" << "                                     " << monthlyRate << endl;
    cout << "VAT" << "                                           " << vat << endl;
    cout << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "Grand Total: " << "                             " << "TK. " << gTotal << endl;
    cout << endl;
}

int main()
{
    string customerName, address, telNumber, month, date;

    // input name, date, address, telephone number
    cout << "Name: ";
    cin >> customerName;

    cout << "Date: ";
    cin >> date;

    cout << "Address: ";
    cin >> address;

    cout << "Telephone Number: ";
    cin >> telNumber;
    cout << endl;

    // input minutes for local, NWD and ISD
    float minLocal, minNwd, minIsd;

    cout << "Minutes for Local call: ";
    cin >> minLocal;

    cout << "Minutes for NWD call: ";
    cin >> minNwd;

    cout << "Minutes for Foreign call: ";
    cin >> minIsd;
    cout << endl;

    showCustomerInfo(customerName, address, telNumber, date);
    showBillDetails(minLocal, minNwd, minIsd);

    return 0;
}