#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main() {
    
    //parent prints everything after this line
    printf("L0\n");
    
    //create child #1 
    fork();
    
    //child #1 prints everything after this line
    printf("L1\n");

    //create child #3 from child #2 and child #4 from parent
    fork();
    
    //child #3 and #4 only print stuff after this line
    printf("Bye\n");
    
    return 0;    
 }

 /* so, the parent will be the only process 
 to print every printf() statement. Each
 process will take turns printing everything
 they can. This means that each printed 
 statement will come out in order by 
 process: parent, child #1, child #2,
 child #3*/

 /*output:
 
 L0  ==| 
 L1    | parent print statements
 Bye ==|      
 L1  ==| child #1 (first child of parent)
 Bye ==|  
 Bye <-- child #2 (child of child #1)
 Bye <-- child #3 (second child of parent)

 */
