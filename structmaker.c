#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct febinfo{
  double closings;
  double openings;
  double volume;
  char date[20];
};
struct marinfo{
  double closings;
  double openings;
  double volume;
  char date[20];
};
struct janinfo{
  double closings;
  double openings;
  double volume;
  char date[20];
};

int main(){
  
  int j; //Flag
  int i; //Sentinel
  
  j = sizeof(february_2015_opening_average[])/8;
  scruct febinfo feb[j];
  
  for(i=0,i<j,i++){
    feb[i].openings = february_2015_opening_average[i];
    feb[i].closings = february_2015_closing[i];
    feb[i].volume = february_2015_volume[i];
    strncpy ( feb[i].date, february_2015_date_recorded[i], sizeof(str2) );
  }
}
