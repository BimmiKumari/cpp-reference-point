#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int frontt;
    int rear;
    int size;
public:
    Queue() {
        // Implement the Constructor
        size=1000;
        arr=new int[size];
        frontt=0;
        rear=0;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(frontt==rear)
        {
            return true;
        }
        else 
            return false;
    }

    void enqueue(int data) {
       if(rear==size)
       {
           cout<<"queue overflow";
       }
        else
        {
        arr[rear]=data;
        rear++;
        }
    }

    int dequeue() {
        int ans=arr[frontt];
        if(frontt==rear)
        {
            return -1;
        }
        else{
        
        arr[frontt]=-1;
        frontt++;
        if(frontt==rear)
        {
            frontt=0;
            rear=0;
        }
       
        return ans;
        }
    }

    int front() {
        if(frontt==rear)
        {
            return -1;
        }
        else
        {
          return arr[frontt];
        }
    }
};
