#include<stdio.h>
/* Logic: [low, high] denotes the range in which element has to be present.
          Initially low = 0, high  = number_of_elements which covers entire range.
          In every step we reduce the range by doing the following
            (i) If the middle element (mid) is less than key then key has to present in range [mid+1 , high]
           (ii) If middle element is the key, then we are done.
          (iii) If the middle element is greater than key then key has to be present in the range[low,mid-1]
 */
int BinarySearch(char xray, char key)
{
        int low = 0; 
        int high = sizeof(xray)/sizeof(xray[0]); 
        int mid;
        while(low < high)
        {
                mid = (low + high)/2;
                if(compare_dates(xray[mid], key)<0){
                
                        low = mid + 1; 
                }
                else if(compare_dates(xray[mid], key)==0)
                {
                        return mid;
                }
                else if(compare_dates(xray[mid], key)>0)
                {
                        high = mid-1;
                }

        }
        return -1;
}
