/*7.	Write a program in C to count the frequency of each element of an array.*/

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
        
    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Array fr will store frequencies of element    
    int fr[length];    
    int visited = -1;    
        
    for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                 
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
        
   
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }        
    return 0;    
}    