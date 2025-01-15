#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(char arc,*char[] arcv)
{
pid_t pid;
char *av[] = {"cal","3","2021",(char *)0};
pid = fork() ;
if(arc<2){
    printf('please enter command')
}
if (pid < 0) {
printf("Error : cannot fork\n");
exit(1);
}
else if (pid == 0) {
execvp(arcv[0],*arcv[1]);
}
else {
wait(NULL);
return(0);
}
}
