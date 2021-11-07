#include<iostream>
#include<stdlib.h>
using namespace std;

int** Make(int N, int M)
{
    int** a;
    a = new int * [N];
    for (int i = 0; i < N; i++)
    {
        a[i] = new int[M];
    }
    return a;
}

void Randfill(int** a, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a[i][j] = rand() % 100;
        }
    }
}

void Print(int** arr, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Del(int** a, int row)
{
    for (int i = 0; i < row; i++)
    {
        delete[]a[i];
    }
    delete[]a;
}

int** AddkCol(int** a, int N, int& M, int k){
    int** a1;
    int M1;
    M1= M+k;
    //cout << "Enter k\n"; cin >> k;
    a1 = Make(N, M1);
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M1; j++)
        {
            a1[i][j] = rand() % 100;
        }

    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a1[i][j] = a[i][j];
        }
    }
    
    //Randfill(a1, N, M1);
    Del(a, N);
    a = a1;
    return a;
}

int main()
{
    int N, M, k;
    cout << "Enter N: "; cin >> N;
    cout << "Enter M: "; cin >> M;
    cout << "Enter k: "; cin >> k;
    int** a;
    a = Make(N, M);
    Randfill(a, N, M);
    cout << "Matrix: \n";
    Print(a, N, M);
    cout << "Matrix 2.0: \n";
    a = AddkCol(a, N, M, k);
    Print(a, N, M+k);
    Del(a, N);
    
}
