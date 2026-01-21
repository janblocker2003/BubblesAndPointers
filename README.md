# BubblesAndPointers
Bubbles and Pointers Project
 
 ```
#include <stdio.h>
#make a constant -> integer MAX=9


#void (prototype) functions:
-printValues(int*)
-sort(int*)
-swap(int*, int*)


create main that retaurns int {
    create array of int named values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5}
    print ("Before: ") and go to next line
    call printValues function that takes values as parameter

    //testing swap function below
    integer named x gets value of 3
    integer named y gets value of 5
    print ("x: point to decimal, y: point to decimal" next line, insert x then insert y)
    Call swap function and insert the address of x and the address of y
    print ("x: point to decimal, y: point to decimal" next line, insert x then insert y)

    call the sort function and insert array of values
    print ("After: " next line)
    call the printValues function and insert values array

    return(0)
}end the main function


create printArray that takes array as parameter{ 
    file gets (valuesHolder, 80 characters, from values)
(not going to use this for this project--> string scan format (valuesHolder, "point to decimal x9", & value1-9))
    print (" point to string next line", valuesHolder)

    return 0
}end printArray function


create swap function that takes two addresses of values { 
    tempHolder = *x (tempHolder gets value at x)
    *x = *y (value at x gets value at y)
    *y = tempHolder (value at y gets value at tempHolder)

    return address of x and address of y
}end swap function


create sort function that takes array as parameter{ 
    create integer variable named i 
    create integer variable named j
    for i from zero to Max -1 (8):
        for j from zero to MAX -1 (8):
            if values[j] > values[j+1]:
                swap values[j] with values[j+1]     --> (&values[j] and &values[j+1])
                printArray(values)
    return values
}end sort function
```