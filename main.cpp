#include <iostream>
#include <ctime>

using namespace std;


int main() {
    
    int i, n, v;
    double tMin;

    cout << "Quanti atleti ci sono nella gara?" << endl;
    cin >> n;
    string nomi[n];
    string nazionali[n];
    double tempi[n];

    for (i = 0; i <= n - 1; i++) {
        tempi[i] = (double) (900 + rand() % 400) / 100;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "Inserire nome del " << i << " atleta" << endl;
        cin >> nomi[i];
        cout << "Inserire nazionale del " << i << " atleta" << endl;
        cin >> nazionali[i];
        if (tempi[i] < tMin) {
            tMin = tempi[i];
            v = i;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        cout << nomi[i] << nazionali[i] << tempi[i] << endl;
    }
    for (i = 0; i <= n - 1; i++) {
        if (i == v) {
            cout << "Il nome dell' atleta vincitore è: " << nomi[i] << " rappresenta la: " << nazionali[i] << " e ha vinto con il tempo di: " << tempi[i] << "s" << endl;
        }
    }
    return 0;
}