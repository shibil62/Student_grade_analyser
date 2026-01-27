#include <stdio.h>
void grade(int, int, int);
int main(){
    int n = 0, rn = 0, m1 = 0, m2 = 0, m3 = 0, total = 0, data_entered = 0;
    float avrg = 0;
    char name[20];
    while(n != 5){
        printf("\n");
        printf("1. Enter student details\n");
        printf("2. Calculate total & average\n");
        printf("3. Show grade\n");
        printf("4. Print report\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &n);

        if(data_entered == 0 && (n == 2 || n == 3 || n == 4)){
            printf("Please enter student data first: ");
            continue;
        }

        getchar();

        switch(n){

            case 1:
            printf("\n");
            printf("Name: ");
            fgets(name, sizeof(name), stdin);
            printf("Roll No: ");
            scanf("%d", &rn);
            printf("Mark in Physics (in 100): ");
            scanf("%d", &m1);
            printf("Mark in Chemistry (in 100): ");
            scanf("%d", &m2);
            printf("Mark in Maths (in 100): ");
            scanf("%d", &m3);
            printf("\n");
            data_entered = 1;
            break;

            case 2:
            total = m1 + m2 + m3;
            avrg = total / 3.0f;
            printf("Total Mark Obtained: %d/300\n", total);
            printf("Average: %.2f/100", avrg);
            printf("\n");
            break;

            case 3:
            printf("\n");
            grade( m1, m2, m3);
            printf("\n");
            break;

            case 4:
            printf("\n");
            printf("NAME:  %s\n", name);
            printf("ROLL NO:  %d\n", rn);
            printf("TOTAL:  %d\n", total);
            printf("AVERAGE:  %.2f\n", avrg);
            printf("GRADE: ");
            grade(m1, m2, m3);
            printf("\n");
            break;

        }
    }
    return 0;
}

// Grade checking

    void grade(int m1, int m2, int m3){

        //Grade checking for physics

            if(m1 >= 90){
                printf("PHYSICS 'A' \n");
            }
            else if(m1 >= 75){
                printf("PHYSICS 'B' \n");
            }
            else if(m1 >= 60){
                printf("PHYSICS 'C' \n");
            }
            else{
                printf("PHYSICS FAILED! \n");
            }

        //Grade checking for chemistry

            if(m2 >= 90){
                printf("CHEMISTRY 'A' \n");
            }
            else if(m2 >= 75){
                printf("CHEMISTRY 'B' \n");
            }
            else if(m2 >= 60){
                printf("CHEMISTRY 'C' \n");
            }
            else{
                printf("CHEMISTRY FAILED! \n");
            }

            //Grade checking for maths

            if(m3 >= 90){
                printf("MATHS 'A' \n");
            }
            else if(m3 >= 75){
                printf("MATHS 'B' \n");
            }
            else if(m3 >= 60){
                printf("MATHS 'C' \n");
            }
            else{
                printf("MATHS FAILED! \n");
            }
    }
