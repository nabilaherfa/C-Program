#include <stdio.h>

//fungsi untuk melakukan swapping pada selectionSort
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
//fungsi untuk sorting bilangan dari terkecil hingga terbesar menggunakan metode selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n - 1; i++) {
        //mencari nilai minimum
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        //swap elemen minimum tersebut dengan first element, dst
        swap(&arr[min_idx], &arr[i]);
    }
}

//fungsi mencari median
float findMedian(int array[] , int n)
{
    float median=0;
    
    //jika array berelemen genap
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    //jika array berelemen ganjil
    else
        median = array[n/2];
    
    return median;
}

//fungsi mencari nilai rata-rata
float mean(int m, int a[]) {
    int sum=0, i;
    for(i=0; i<m; i++)
        sum+=a[i];
    return((float)sum/m);
}

//fungsi mencari perkalian dari semua bilangan
float multiple(int a[], int m){
    int sum =1, i;
    for(i=0; i<m; i++){
        sum *= a[i];
    }
    return sum;
}

//main program
int main (){

    int i,j,a,n,number[15];
    float median=0;
    printf ("Jumlah angka yang ingin dimasukkan:\n");
    scanf ("%d", &n);
    printf ("Masukkan angka dengan menekan enter setiap 1 bilangan :\n");
    
    //meminta input angka
    for (i=0; i<n; ++i){
       scanf ("%d",&number[i]);
    }
    
    //memanggil fungsi
    selectionSort(number, n);
    median = findMedian(number, n);

    //printout
    printf ("\nHasil pengurutan dari yang terkecil hingga terbesar");
    for (i=0; i<n; ++i){
        printf ("\n%d",number[i]);
    }

    printf("\n\nNilai tengah= %f\n",median);
    printf("Nilai rata-rata=%f\n",mean(n,number));
    printf("Hasil perkalian=%f\n",multiple(number,n));

    return 0;
}