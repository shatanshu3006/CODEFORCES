#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int n,l;
    int lb,rb;
    cin>>n>>l;
    int a[n],dia=0;
    float max_distance=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            dia=a[i]-a[i-1];
            if(float(dia)>max_distance)
                max_distance=float(dia);

        }
        max_distance=max_distance/2;
        lb=a[0],rb=l-a[n-1];
        if(float(lb)>max_distance)
            max_distance=float(lb);
        if(float(rb)>max_distance)
            max_distance=float(rb);
        printf("%.10f",max_distance);
        return 0;

}
