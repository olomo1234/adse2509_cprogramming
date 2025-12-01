#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int n;

    char completePath[150] = "";

    char fileName[20] = "";

    char userMessage[100] = "";


    printf("Please enter a message to be written in the file -> \n");

    fgets(userMessage,sizeof(userMessage),stdin);

    userMessage[strcspn(userMessage,"\n")]='0';

    //file pointer to the file to be written and read

    FILE *file2WriteRead
    return 0;

}

//    path to location
   /* strcat(completePath,"C:\Users\olomo1\Documents\My Digital Editions");

     printf("Please enter the name of the file to be created -> \n");

    fgets(fileName,sizeof(fileName),stdin);

    fileName[strcspn(fileName,"\n")]='0';

    strcat(completePath,fileName);

    strcat(completePath,".txt");

    printf("\nThe path to the file to be created is:\n%s\n",completePath);

    //create the file and open it in append mode
    file2WriteRead = fopen(completePath,"a+");

    /*create the file if it doesn't exist and write the users message to it and
     display it's contents when the file pointer isn't null*/


//     if(file2ReadWrite !NULL){
//        //innform the user that the file has been successfully created
//        printf("\nThe file \'%s'\ has been created/located succesfully.\n\n",fileName);
//
//        //write the user message to the file
//        printf("Writing the file.... \nPlease wait....\n");
//
//        for(n = 0; n<strlen(userMessage); n++)
//            fputc(userMessage[n]file2ReadWrite);
//
//     }
//
//     fputc('\n',file2ReadWrite);
//
//     rewind(file2ReadWrite);
//
//     printf("\ncontent of the file");
//     printf("\n--------------------------------\n")
//
//     //close file
//
//     fclose(file2WriteRead);
//     printf("\n\nSuccessfully completed writing to and reading from the file."
//            "")
//






    return 0;

}
