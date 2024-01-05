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
void stat(const double num[],int n,double output[]){
    double sum = 0,product = 1.0 , sumPow2 = 0,Hsum = 0,max = num[0] ,min = num[0];
    for(int i = 0;i < n; i++) {    
        sum += num[i];
        sumPow2 += num[i]*num[i];
        product *= num[i];
        Hsum += 1/num[i];
        if(num[i] > max ) max = num[i];
        else if(num[i] < min ) min = num[i];
    }
    output[0] = sum/n; 
    output[1] = sqrt((sumPow2/n)-output[0]*output[0]);
    output[2] = pow(product,(1.0/n));
    output[3] = n/(Hsum);
    output[4] = max;
    output[5] = min;
}