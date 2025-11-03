/*
 *NAME:ALDRINE WARREN
 *REG NO :PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO
 */

// REQUIRED LIBRARIES
#include <stdio.h>
#include<stdlib.h>
// USING DEF FUNCTION TO INITIALISE THE NUMBER OF INTEGERS NEEDED
#define NUM_INTEGERS 10
//FIRST FUNCTION IS WRITING INTO THE FILE
void write_to_file() {
    FILE *file=fopen("input.txt","w");
    if (file==NULL) {
        printf("Error:File could not be opened for writing\n");
        return;
    }
    printf("Enter %d integers :\n ",NUM_INTEGERS);
    for (int i = 0; i < NUM_INTEGERS; i++) {
        int num;
        printf("Integer %d : ",i+1);
        scanf("%d",&num);
        fprintf(file,"%d\n",num);
    }
    fclose(file);
    printf("File written successfully with 10 integers to thr file input.txt\n");
}

// SECOND FUNCTION IS PROCESSING INTO THE FILE
void process_file() {
    FILE *input_file=fopen("input.txt","r");
    if (input_file==NULL) {
        printf("Error:File could not be opened for reading\n");
        return;
    }
    FILE *output_file=fopen("output.txt","w");
    if (output_file==NULL) {
        printf("Error:File could not be opened for writing\n");
        fclose(input_file);
        return;
    }
    int sum=0;
    int count=0;
    int num;

    while(fscanf(input_file,"%d",&num)==1){
        sum+=num;
        count++;
    }double average =(double)sum/count;

    fprintf(output_file,"sum:%d\n",sum);
    fprintf(output_file,"Average:%f\n" ,average);

    fclose(input_file);
    fclose(output_file);
    printf("sum and average have been acalculated and written on the ouput.txt");
}

/Third function to diplay the files

void display_files(){
    FILE *input_file=fopen("input.txt","r");
    if (input_file==NULL) {
        printf("Error:File could not be opened for reading\n");
    }else {
        printf("these are the available contents of input.txt");
        char c;
        while ((c=fgetc(input_file))!=EOF) {
            putchar(c);
        }
        fclose(input_file);
    }
    FILE* output_file=fopen("output.txt","r");
    if (output_file==NULL) {
        printf("Error:File could not be opened for reading");

    }else {
        char c;
        while ((c=fgetc(output_file))!=EOF) {
            putchar(c);
        }
        fclose(output_file);
   }

}

int main() {
    write_to_file();
    process_file();
    display_files();
    return 0;
}