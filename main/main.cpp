#include <stdio.h>
#include <iostream>
#include <errno.h>
#include <unistd.h>
#include <malloc.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <resolv.h>
#include <netdb.h>
#include "openssl/ssl.h"
#include "openssl/err.h"

#include "SSL-Server.h"
#include "SSL-Client.h"

#define FAIL    -1

using namespace std;

int main(){
    char opt;
    while(true){
        opt = 0;
        cout << "\n\nSELECT RUN MODE\n\n";
        cout << "1) Server mode\n";
        cout << "2) Client mode\n\n";
        cout << "Option: ";
        cin >> opt;
	if(opt == '1' || opt == '2') break;
    }

    if(opt == '1'){
        char *arr[2];
        arr[1] = "5000";
        runAsServer(2,arr);
    }else{
        char *arr[3];
        arr[1] = "127.0.0.1";
        arr[2] = "5000";
        runAsClient(3,arr);
    }

}
