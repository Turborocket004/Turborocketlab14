#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double st = 1;
    double sum = 0;
    double max = 0,min = 99;
    for(int i = 0;i < N;i++){
        sum += A[i];
        B[1] += pow(A[i],2);
        B[3] += 1/A[i];
        st *= A[i];
        
        }
        B[0] = sum/N; 
        B[1] = sqrt((B[1]/N)-pow(B[0],2));
        B[2] = pow(st,(1.0/N));
        B[3] = N/B[3];
    for(int i = 0;i<N;i++){
            if(A[i] > max){
                max = A[i];
                }
        B[4] = max;        
            if(A[i] < min){
                min = A[i];
                }
        B[5]= min;
        }
}        