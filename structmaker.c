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
    strncpy ( feb[i].date, february_2015_date_recorded[i], sizeof(february_2015_date_recorded[i]) );
  }
  
  j = sizeof(february_2015_opening_average[])/8;
  scruct marinfo mar[j];
  
  for(i=0,i<j,i++){
    mar[i].openings = march_2015_opening_average[i];
    mar[i].closings = march_2015_closing[i];
    mar[i].volume = march_2015_volume[i];
    strncpy ( mar[i].date, march_2015_date_recorded[i], sizeof(march_2015_date_recorded[i]) );
  }
  
  j = sizeof(january_2015_opening_average[])/8;
  scruct janinfo jan[j];
  
  for(i=0,i<j,i++){
    jan[i].openings = january_2015_opening_average[i];
    jan[i].closings = january_2015_closing[i];
    jan[i].volume = january_2015_volume[i];
    strncpy ( jan[i].date, january_2015_date_recorded[i], sizeof(january_2015_date_recorded[i]) );
  }
}
