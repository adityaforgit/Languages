/*calculate mean, variance, standard deviation.
m=(x[0]+x[1]+x[2]+……x[n-1])*1/n
v=((x[0]-m) 2 +(x[1]-m) 2 +……………+(x[n-1]-m) 2 )*1/n
s.d=sqrt(v)*/
#include<stdio.h>
#include<math.h>
int main(){
 int n,i;
 double mean = 0.0 ,var = 0.0,sd;
printf("Enter number of elements:");
scanf("%d",&n);
double data[n];
printf("Enter %d elements:",n);
for(i = 0; i<n; i++){
scanf("%lf",&data[i]);
}
for(i = 0; i<n;i++){
    mean += data[i];
}
mean/=n;
for ( i = 0; i < n; i++)
{
    var += (data[i]-mean) * (data[i]-mean);
}
var /= n;
sd = sqrt(var);
printf("Mean = %lf ",mean);
printf("Variance = %lf",var);
printf("Standard Deviation = %lf",sd);
return 0;
}