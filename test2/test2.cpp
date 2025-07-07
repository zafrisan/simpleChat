// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string getNama() {
    std::string nama;
    std::cout << "Masukkan nama: ";
    std::getline(std::cin, nama);
    std::cout << "Hello, " << nama << "!\n";
    return nama;
}

char tanyaSudahMakan() {
    char jawapan;
    std::cout << "Sudah makan? [Y/N]: ";
    std::cin >> jawapan;
    std::cin.ignore(); // clear newline from input buffer
    return jawapan;
}

void responMakan(const std::string& nama) {
    std::string makan;
    std::cout << nama << " makan apa?\n";
    std::getline(std::cin, makan);
    std::cout << "Bagus makan " << makan << "!\n";
}

void responTakMakan(const std::string& nama) {
    std::cout << "Kenapa " << nama <<" tak makan!Nak kena makan ni\n";
}

int main() {
    std::string nama = getNama();
    char jawapan = tanyaSudahMakan();

    while (jawapan != 'y' && jawapan != 'Y' && jawapan != 'n' && jawapan != 'N') {
        jawapan;
    }

    if (jawapan == 'y' || jawapan == 'Y') {
        responMakan(nama);
    }
    else if (jawapan == 'n' || jawapan == 'N') {
        responTakMakan(nama);
    }

    return 0;
}
/*int main()
{
    std::string nama, makan;
    char a1;

    std::cout << "Masukkan nama: ";
    std::getline(std::cin, nama);

    std::cout << "Hello, " << nama << "!\n";

    std::cout << " Sudah makan ? [Y/N]\n";
    //std::getline(std::cin, a1);
    std::cin >> a1;
    std::cin.ignore();

    if (a1 == 'y' ||a1 == 'Y') {
        std::cout << nama << " makan apa ?\n";
        std::getline(std::cin, makan);
        std::cout << "Bagus makan " << makan << "!\n";
    }
    else if (a1 == 'n' || a1 == 'N') {
        std::cout << "Kenapa tak makan!\n";
    }
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
