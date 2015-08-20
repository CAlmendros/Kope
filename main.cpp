#include <iostream>

#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

int main(){
	
    SSL_load_error_strings();
    ERR_load_BIO_strings();
    OpenSSL_add_all_algorithms();


    BIO *bio;
    char url[] = "www.google.es:80";
    bio = BIO_new_connect(url);
    if(bio == NULL){
        cout << "Error creating connection!\n";
        return -1;
    }

    if(BIO_do_connect(bio) <= 0){
        cout << "Error connecting!\n";
        return -1;
    }

}
