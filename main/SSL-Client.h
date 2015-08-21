int OpenConnection(const char *hostname, int port);

SSL_CTX* InitCTX(void);

int runAsClient(int count, char *strings[]);
