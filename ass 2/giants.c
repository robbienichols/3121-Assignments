#include <stdio.h>
#include <stdlib.h>

int giantSpace(int N, int L, int K, int T, int H[], int res[]);

int main(int argc, char **argv){
    
    int size = atoi(argv[1]);
    printf("%d size\n", size);
    int arr[size];
    int resSize = atoi(argv[2]); 
    int res[resSize];
    int i = 0;
    while(i < size){
        printf("Enter number: ");
        scanf("%d", &arr[i]);
        i++;
    }

    if(giantSpace(size, resSize, atoi(argv[3]), atoi(argv[4]), arr, res) == resSize){
        for(int i = 0; i < resSize; i++){
            printf("[%d] ", res[i]);
        }
    }
    puts("");
    return 0;
}

int giantSpace(int N, int L, int K, int T, int H[], int res[]){
    int found = 0;
    int i = 0;
    while(found < L && i < N){
        while(H[i] < T && i < N){ i++; }
        if(i >= N) {break;}
        
        res[found] = H[i];
        found++;
        i+=K+1;
    }
    return found;
}