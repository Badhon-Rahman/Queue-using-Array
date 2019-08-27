#include <iostream>

using namespace std;

int queue[5], queueSize = 5;
int front = -1;
int rear = -1;

void EnQueueData(int enQueue){
         if(rear <= queueSize - 1){
             if(front == -1){
                front = 0;
             }
            rear++;
            queue[rear] = enQueue;
            cout << enQueue << " has been Enqueued." << endl;
         }
         else{
            cout << "Queue is full. Dequeue some elements." << endl;
         }
}

void DeQueueData(){
    int deQueue;
         if(rear >= 0 && front <= rear){
            deQueue = queue[front];
            front++;
            cout << "Data Dequeued: " << deQueue << endl;
         }
         else{
            cout << "Queue is Empty. Enqueue some data." << endl;
         }
}

void DisplayQueue(){
        if(rear > -1 && front <= rear){
            cout << "Queue elements: ";
            for(int i = front; i <= rear; i++){
                cout << queue[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "Queue is Empty!!!" << endl;
        }
}

int main()


{
    cout << "Press 1 to Enqueue." << endl;
    cout << "Press 2 to Dequeue." << endl;
    cout << "Press 3 to display Queue." << endl;
    cout << "Press 4 to exit Program." << endl;

    int choice, enQueue;

    do{
       cout << "Enter your choice:";
       cin >> choice;
       switch(choice){
           case 1:{
                  cout << "Enter data to enqueue:";
                  cin >> enQueue;
                  EnQueueData(enQueue);
                  break;
           }
           case 2:{
                  DeQueueData();
                  break;
           }
           case 3:{
                   DisplayQueue();
                   break;
           }
           case 4:{
                 cout << "Exit System." << endl;
                 break;
           }
           default:{
                cout << "You select WRONG Choice." << endl;
           }
    }
    }while(choice != 4);

    return 0;
}
