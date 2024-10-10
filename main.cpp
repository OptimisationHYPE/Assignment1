#include <bits/stdc++.h>

using namespace std;

void simplex() {
    int n, j = 0, min = 99999.0, ind, mmin = 99999.0, iind;
    float e;
    string s;
    vector<vector<float>> m;
    vector<float> b;

    // ввод вектора b
    while (true) {
        getline(cin, s);
        if (s.empty()) {
            break;
        }
        stringstream ss(s);
        while (ss >> n) {
            b.push_back(n);
        }
    }

    m.push_back(b);
    b.clear();

    // ввод матрицы А
    while (true) {
        getline(cin, s);
        if (s.empty()) {
            break;
        }
        stringstream ss(s);
        while (ss >> n) {
            b.push_back(n);
        }
        m.push_back(b);
        b.clear();
    }
    // ввод вектора С
    for (int i = 0; i < m.size(); i++) {
        m[0].push_back(0);
    }

    while (true) {
        getline(cin, s);
        if (s.empty()) {
            break;
        }
        stringstream ss(s);
        while (ss >> n) {
            for (int i = 0; i < m.size() - 1; i++) {
                if (i != j) {
                    m[j + 1].push_back(0.0);
                } else {
                    m[j + 1].push_back(1.0);
                }
            }
            m[j + 1].push_back(n);
            j++;
        }
    }

    for (int i = 0; i < m.size(); i++) {
        for (j = 0; j < m[i].size(); j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    cin >> e;

    while (true) {
        // finding min in z
        for (int i = 0; i < m[0].size(); i++) {
            if (min > m[0][i]) {
                min = m[0][i];
                ind = i;
            }
        }
        for (int i = 0; i < m.size(); i++) {
            if (mmin > (m[i][m[0].size()] / m[i][ind])) {
                mmin = m[i][ind];
                iind = i;
            }
        }
    }
}

int main() {

    return 0;
}
