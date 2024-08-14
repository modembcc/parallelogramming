#include <stdio.h>

// // Part A
// int main(){

//     int ID = 0;

//     printf("Hello(%d) ", ID);
//     printf("World(%d) \n", ID);
// }


// Part B
#include <omp.h>
int main(){

    #pragma omp parallel
    {
        int ID = omp_get_thread_num(); // this is WOKEGE

        printf("Hello(%d) ", ID);
        printf("World(%d) \n", ID);
    }
}
