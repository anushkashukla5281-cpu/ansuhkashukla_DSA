#include <iostream>
using namespace std;

int main () {
     int n , key , count = 0 ;
     cout << "enter number of elements : " ;
        cin >> n ;

        int arr[n];
         cout <<"enter elements :";
         for(int i =0 ; i < n ; i++){
             cin >> arr[i] ;
         }
         cout << "enter the key ";
         cin >> key ;
            for(int i =0 ; i < n ; i++){
                if(arr[i] > key){
                    count++ ;
                }
            }
            cout << "number of elements greater than " << key << " is : " << count ;
        return 0 ;

}
