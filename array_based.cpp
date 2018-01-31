#include "array_based.h"
/**
    CLASS      : IF-40-INT
    NAME       : Muhammad Naimullah
    STUDENT ID : 1301160449
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i = n_data;
    if(database[n_data].id==0 && n_data<11){
        database[n_data] = d;
        n_data++;
    }else {
        add_new_data(database,n_data,d);
    }
}





    // ===========================


void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i=n_data;
    if(database[0].id!=0){
        n_data++;
        while(i>=0){
            database[i+1]=database[i];
            i--;
        }
        database[0]=d;
    }else{
        add_new_data(database,n_data,d);
    }

    // ===========================
}

int find_data(mytype database[10], int n_data, int id_to_find) {
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    // ===========================
    // YOUR CODE HERE
    int found = -1;
    for(int i=1; i=n_data; i++){
        while(found != 1){
            if(database[i].id==id_to_find){
                    found = 1;
            }i++;
        }
    }return found;
    // ===========================
    return -1;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    int target = find_data(database,n_data,id_to_delete);
    if(target!=-1){
        int i = target;
        for(i;i<n_data;i++){
            database[i]=database[i+1];
        }
        n_data--;
    }else {
        cout<<"ID Not Found or Wrong"<<endl;
    }
}





    // ===========================


void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    for(int i=1; i=n_data ; i++){
        cout<<"Nama ="<<database[i].nama<<endl;
        cout<<"ID ="<<database[i].id<<endl;
        cout<<"Class ="<<database[i].kelas<<endl;
        cout<<"Score ="<<database[i].nilai<<endl;
    }
    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype temp;
    // ===========================
    // YOUR CODE HERE
    int i = 0;
    int j = 1;
    if(database[i].id != 0){
        for (i=0;i<n_data-1;i++){
            for(j=i+1;j<n_data;j++){
                if(database[i].nilai>database[j].nilai){
                    temp = database[i];
                    database[i]=database[j];
                    database[j]=temp;
                }
            }
        }
    }else{
        cout<<"Empty"<<endl;
    }
    // ===========================
}


