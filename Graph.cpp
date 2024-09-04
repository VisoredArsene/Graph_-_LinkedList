/* Yonathan Arya Dhamma | 20215520001
   Jullius Celvin       | 20215520004
   Andre Surya          | 20215520002 */
   
#include <iostream>

using namespace std;

// void newCount();

int verteksGraph = 0;
int a = 0, b = 0, i;
int userMore;
int randomChecker;
// int count = 0;
// bool countNew = false;

int main()
{
    system("cls");
    cout << "Banyak Jalan: ";
    cin >> verteksGraph;

    int adjMat[verteksGraph + 1][verteksGraph + 1];

    for (int u = 0; u < verteksGraph; u++)
    {
        for (b = 0; b < verteksGraph; b++)
        {
            adjMat[u][b] = 0;
        }
    }

    cout << endl;

    do
    {
        cout << "\nRute Yang Ingin Ditempuh" << endl
             << endl;
        cin >> a >> b;
        cout << endl;
        srand(time(0));
        randomChecker = rand() % 30 + 1;
        cout << "Jumlah Kendaraan: ";
        cout << randomChecker << endl;

        if (randomChecker >= 20)
        {
            cout << endl
                 << "Rute Ke - " << a << " Sampai Rute Ke - " << b << " Macet\n";
        }
        else
        {
            cout << endl
                 << "Rute Ke - " << a << " Sampai Rute Ke - " << b << " Lancar\n";
        }

        adjMat[a - 1][b - 1] = 1;
        // adjMat[v - 1][u - 1] = 1;
        cout << "\nPress 1 to add more | Press any number to check the result : ";
        cin >> userMore;
    } while (userMore == 1);

    cout << endl;

    for (int l = 0; l < verteksGraph; l++)
    {
        for (int k = 0; k < verteksGraph; k++)
        {
            cout << adjMat[l][k] << " ";
        }
        cout << endl;
    }
}