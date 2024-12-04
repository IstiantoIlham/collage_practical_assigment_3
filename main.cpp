#include <iostream>
#include <limits>

using namespace std;

int getInput(const string& prompt)
{
    int number;
    while (true)
    {
        cout << prompt;
        cin >> number;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid. Masukkan angka yang benar!" << endl;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return number;
        }
    }
}

void pertama()
{
    cout << "=== Mencetak bilangan genap 2-20 ===\n" << endl;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

void kedua()
{
    cout << "=== Faktorial dari bilangan yang di input ===\n" << endl;
    int result = 1;
    int number = getInput("==>>\nMasukan angka yang akan di faktorial: ");
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    cout << "Hasil faktorial dari : " << number << " adalah " << result << endl;
}

void ketiga()
{
    cout << "=== Tabel perkalian 1 - 10 ===\n" << endl;
    for (int i = 1; i <= 10; i++)
    {
        string row = "";
        for (int j = 1; j <= 10; j++)
        {
            row += to_string(i * j) + "\t";
        }
        cout << row << endl;
    }
}

void keempat()
{
    cout << "=== Soal keempat ===\n" << endl;
    for (int i = 1; i <= 4; i++)
    {
        string row = "";
        for (int j = 1; j <= 4; j++)
        {
            row += to_string(i) + "\t";
        }
        cout << row << endl;
    }
}

void kelima()
{
    cout << "=== Soal kelima ===\n" << endl;
    int k;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            k++;
            cout << k * 2 << "\t";
        }
        cout << endl;
    }
}

void keenam()
{
    cout << "=== Soal keenam ===\n" << endl;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int pilihan;
    bool selesai = false;

    while (!selesai)
    {
        cout << "\n===== Menu fungsi praktikum pertemuan ke-5 =====\n" << endl;
        cout << "1. Mencetak bilangan genap 2-20" << endl;
        cout << "2. Faktorial dari bilangan yang di input" << endl;
        cout << "3. Tabel perkalian 1 - 10" << endl;
        cout << "4. Soal keempat" << endl;
        cout << "5. Soal kelima" << endl;
        cout << "6. Soal keenam" << endl;
        cout << "\nMasukan nomer urut untuk mengekusi fungsi : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            pertama();
            break;
        case 2:
            kedua();
            break;
        case 3:
            ketiga();
            break;
        case 4:
            keempat();
            break;
        case 5:
            kelima();
            break;
        case 6:
            keenam();
            break;
        case 7:
            cout << "Keluar dari program terimakasih" << endl;
            selesai = true;
            break;
        default:
            cout << "\nPilihan tidak valid" << endl;
        }
    }
    return 0;
}
