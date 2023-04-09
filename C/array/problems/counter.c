#include<stdio.h>


int main () {

    // Using array as counters

    /**
      Fibonacci numbers - 0, 1, 1, 2, 3, 5, 8, 13, 21, .....
    **/

    int no_of_users;
    scanf("%d", &no_of_users);

    // Input total number of users
    int ratings[no_of_users];

    // Input user's rating
    for (int i = 0; i < no_of_users; i++){
        scanf("%d", &ratings[i]);
    }

    // Calculate sum of ratings
    int sum = 0;
    for (int i = 0; i < no_of_users; i++){
        sum += ratings[i];
    }

    // Calculate sum of ratings
    double average = (double)sum / (double)no_of_users;
    printf("Average = %lf\n", average);


    // Calculate - Total of single review
    int count[6] ={0};
    for (int i = 0; i < no_of_users; i++){
        int x = ratings[i];
        count[x]++;
    }

    // Output -> Total of single review
    for (int i = 1; i <= 5; i++){
        printf("%d -> %d\n", i, count[i]);
    }

//    Another way (loop running 50 time) // not good
//    for (int val = 1; val <= 5; val++){
//        int count = 0;
//        for (int i = 0; i < no_of_users; i++){
//            if (ratings[i] == val){
//                count++;
//            }
//        }
//            printf("%d -> %d\n",val, count);
//    }




    return 0;
}

