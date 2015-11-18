#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int check(void){
  int i;
  int j;
  int k = 0;
  char input[10];
  
  while(1){
    
  gets(input);
    j = sizeof(february_2015_volume[])/sizeof(february_2015_volume[0]);
    
    for(i=0,i<j,i++){
      puts("Yes");
      if(strncasecmp(input,february_2015_date_recorded[i],strlen(february_2015_date_recorded[i])==0)
        k++;
        continue;
      }else{
        return k;
        break;
      };
    
    j = sizeof(february_2015_opening_average[])/sizeof(february_2015_opening_average[0]);
    
    for(i=0, i<j, i++){
      puts("Yes");
      if(strncasecmp(input, february_2015_date_recorded[i], strlen(february_2015_date_recorded[i])==0){
        k++
        continue;
      }else{
        return k;
        break;
    };
    }   
    j = sizeof(march_2015_closing[])/sizeof(march_2015_closing[0]);
    
    for(i=0, i<j, i++){
      puts("Yes");
      if(strncasecmp(input,march_2015_date_recorded[i],strlen(data[i])==0)
      k++
        continue;
      }else{
        return k;
        break;
    }
    puts("lol no")
    };
}
}
