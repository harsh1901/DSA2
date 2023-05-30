#include<iostream>
using namespace std;

// A function to heapify the array.

void maxHeapify(int a[], int i, int n)

{
     int j,temp;


     temp = a[i];

     j = 2*i;
     while (j <=n)

     {

        if(j< n && a[j+1]>a[j])

        j = j+1;

        // Break if parent value is already greater than child value

        if(temp > a[j])

           break;
        //switching value with parent node if temp <a[j].

        else if (temp <= a[j])

        {
            a[j/2] = a[j];

            j = 2*j;

         }

     }
     a[j/2] =temp;

     return;
}

void Build_MaxHeap(int a[],int n)
{
     int i;
     for (i = n/2; i>=1; i--)
       MaxHeapify(a,i,n);
}

     void Max_Heapsort(int a[],int n);

{

     int i,temp;

     for (i=n;i>=2;i--)

     {
          //storing maximum value at the end.

          temp =a[i];

          a[i];

          a[1] = temp;

          //BUilding max heap of remaining element

          MaxHeapify(a,1,i-1)
     }

}

void min_heapify(int a[],int i,int n)
{
     int j,temp;

     temp = a[i];
     j =2*j;

     while(j<=n)

     {

        if(j<n&&a[j=1]<a[j])

            j=j+1;

         if(temp<a[j])

            Break;

         else if (temp>=a[j])
         {

             a[j/2]=a[j]

             j=2*j;
           }

        }
        a[j/2]=temp;
        return;
     }

      void build_minheap(int a[],int n)

      {
         int i,temp,
          for(i=n;i>=2;i-)

          {
            //storing minimum value at the end.
            temp=a[i];
            a[i]=a[1];
            a[1]=temp;
            //Building max heap of remaining element
            min_heapify(a,1,i-1);

          }

      }
       void print(int arr[],int n)
       {
       cout<<"\nsorted Data";

              for(int i=1;i<=n;i++)

                     cout<<"->"<<arr[i];
              return;

       }

       int main()
       {
       int n,i, ch;
       cout<,"\nEnter thr number of data element to br sorted";
       cin>>n;

       int arr[n];
       for(i=1;i,=n;,i++)

       {
           cout<<"Enter element"<<i<<";";
           cin>>arr[i];

       }
       //Building max heap.

do
{

cout<<"\n1.Heap sort using max heap";
cout<<"\n2.Heap sort using min heap";
cout<<"\n3.exit";

C0UT<<"\nenter your choice:";
CIN>>CH;

switch(ch)

{

case 1:    Build_MaxHeap(arr,n);
     Max_HeapSort(arr,n);
       print(arr,n);
       break;

case 2;    build_minheap(arr,n)
     min_Heapsort(arr,n);
     print(arr,n);
      break;

Case 3:retun 0;

      default:cout<<"\n invalid choice !! please enter yourchoice again."<<end;
}

}

while(ch=3);

}

