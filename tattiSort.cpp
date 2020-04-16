/* This is the worst sorting algorithm I could come up with so I named it tatti sort*/

/*If your computer had a sense of humour,it would laugh at you while you even compiled this code.
 I have used chrono library to check the time it takes to execute the sort.You can add any standard sorting algorithm in this code
 and can compare the time taken by both.
*/






#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void newSort(int* arr, int size)
{
        for(int i=0;i<size;i++){
                if(arr[i]>arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }

        }
        for(int i=0;i<size;i++){
                if(arr[i]>arr[i+1]){
                        newSort(arr,size);
                        return;
                }
                
        }
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   
    auto start = high_resolution_clock::now(); 
  newSort(arr, n);
    auto stop = high_resolution_clock::now(); 
      auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 

   cout << "Array after Sorting: ";
   display(arr, n);
}