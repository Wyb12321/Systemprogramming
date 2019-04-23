/*************************************************************************
	> File Name: 1.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月15日 星期一 21时28分50秒
 ************************************************************************/


#include <stdio.h>     
#include <unistd.h>
#include <stdlib.h>
#include <pwd.h>

 
int main(){   
    struct passwd *pwd;
    pwd = getpwuid(getuid());//获得username
    char hostname[32 + 1];
    gethostname(hostname, sizeof(hostname));//获得hostsname        
    char buf[80];   
    getcwd(buf,sizeof(buf));   
    printf("\033[30m%s@%s:%s\033[1m\n", pwd->pw_name, hostname, buf);
    return 0;
 }
