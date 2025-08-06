#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<math.h>
int size;
int x=0;
#define PI 3.14159265358979323846
// Function to generate a normally distributed random number
double generate_normal(double mu, double sigma) {
  double U1 = (double)rand() / (double)RAND_MAX;
  double U2 = (double)rand() / (double)RAND_MAX;
  double X1 = sqrt(-2 * log(U1)) * cos(2 * PI * U2);
  return mu + sigma * X1;
}
void populate_array_gaussian(double *array, int size, double mu, double sigma, unsigned int seed) {
    srand(seed);
    for (int i = 0; i < size; i++) {
        array[i] = generate_normal(mu, sigma);
    }
}
void populate_array_uniform(double *array, int size, double min, double max, unsigned int seed) {
    srand(seed);
    for (int i = 0; i < size; i++) {
        array[i] = min + (double)rand() / ((double)RAND_MAX / (max - min));
    }
}
double mini,maxi;
#define MAX_SIZE 1000000
#define MAX_STARS 50
#define MAX_BINS 1000
double array [MAX_SIZE];
void _SET_(){
 double max,min; double mean,stddev;
unsigned int seed;
char distribution[40];
printf("\nEnter number of elements (<= 100000): ");
scanf("%d",&size);
if(size>MAX_SIZE){
printf("\nInvalid array size");
 return;
}
printf("\nEnter seed: ");
scanf("%u",&seed);
printf("\nDistribution? (uniform/gaussian):");
scanf("%s",   distribution);
if(strcmp(distribution     ,"gaussian")==0){
printf("\nEnter the stddev value : ");
scanf("%lf",&stddev);
printf("\nEnter the mean value : ");
scanf("%lf",&mean);
populate_array_gaussian(array,size,mean,stddev,seed);
printf("\nArray initialized with gaussian distribution.");
}
else if (strcmp(distribution,       "uniform")==0){
printf("\nEnter the min value : ");
scanf("%lf",&min);
printf("\nEnter the max value : ");
scanf("%lf",&max);
populate_array_uniform(array,size,min,max,seed);
printf("\nArray initialized with uniform distribution.");
maxi=max; mini=min;
}
else{
printf("Invalid distribution");
return;
}
x=1;
}
void _MEAN_(){
 switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
return;
}
double s=0; int i; double mean;
for(i=0;i<size;i++){
s+=array[i];
}
mean=s/size;
printf("\nMean         :      %.4lf",mean);
}
double _MIN_(){
switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
return;
}
double min=array[0]; int i;
for(i=1;i<size;i++){
    if(min>array[i])
    min=array[i];
}
printf("\nMin         :      %.4lf",min);

}



double _MAX_(){
 switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
break;
}
double max=array[0]; int i;
for(i=1;i<size;i++){
    if(max<array[i])
   max=array[i];
}
printf("\nMax         :      %.4lf",max);


}

void _STDDEV_(){
switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
return;
}
double s=0; int i; double mean; double v=0; double stddev;
for(i=0;i<size;i++){
s+=array[i];
}
mean=s/size;
for(i=0;i<size;i++){
    double y=array[i];
v+=pow(mean-y,2);
v/=size;
stddev=pow(v,.5);

}
printf("\nStd Dev     :      %.4lf",stddev);
}
void _HIST_(){
switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
return;
}
int bins;
printf("\nEnter number of bins: ");
scanf("%d",&bins);
if(bins>1000 || bins<1){
printf("\nInvalid number of bins. Must be between 1 and 1000");
}
int i;
double bin_width;  double max,min;
max=min=array[0];
for(i=0;i<size;i++){
if(max<array[i])
max=array[i];
}
for(i=0;i<size;i++){
if(min>array[i])
min=array[i];
}
bin_width=(max-min)/bins; int j;

int bin_counts [MAX_BINS]={0};  int bin_index;

    for(j=0;j<size;j++){
bin_index=(int)((array[j]-min)/bin_width);
bin_counts[bin_index ]= bin_counts[bin_index ]+1;

    }
int mbin=bin_counts[0];
for(i=1;i<bins;i++){
if(mbin<bin_counts[i])
mbin=bin_counts[i];

}
int s; double L=min;
for(i=0;i<bins;i++){
 double H=min+bin_width;
s=(bin_counts[i]*50)/mbin;
printf("[%lf - %lf]: ",L,H);
for(j=0;j<s;j++)
printf("*");

L+=bin_width;
printf("\n");
}

}

void _SUMMARY_(){
switch (x)
{
case 0: printf("\n Array not initialized. Use 'set' command first.");
return;
}
_MIN_();
_MAX_();
_MEAN_();
_STDDEV_();
}



void HELPme(){
printf("\nCommands:");
printf("\nset     - Set array size, seed, and distribution (uniform or gaussian)");
printf("\nmin     - Print minimum value");
printf("\nmax     - Print maximum value");
printf("\nmean    - Print mean value");
printf("\nstddev  - Print standard deviation");
printf("\nhist    - Plot histogram");
printf("\nsummary - Print min, max, mean, stddev");
printf("\nhelp    - Show this help message");
printf("\nexit    - Exit the program");
}
void _EXIT_(){
;
}
int main(){

 HELPme();
char com[15];
do{
printf("\nEnter command: ");
scanf("%s",com);
if(strcmp(com,"set")==0)
_SET_();
else if(strcmp(com,"min")==0)
_MIN_();
else if(strcmp(com,"max")==0)
_MAX_();
else if(strcmp(com,"exit")==0)
break;
else if(strcmp(com,"mean")==0)
_MEAN_();
else if(strcmp(com,"stddev")==0)
_STDDEV_();

else if(strcmp(com,"hist")==0)
_HIST_();
else if(strcmp(com,"summary")==0)
_SUMMARY_();
else if(strcmp(com,"help")==0)
HELPme();
else printf("\nUnknown command . Type 'help' for the command list");
} while (345);

}
