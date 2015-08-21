int OpenConnection(const char *hostname, int port);

SSL_CTX* InitCTX(void);

int runAsClient(char ip[], char port[]);
