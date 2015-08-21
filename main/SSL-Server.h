int OpenListener(int port);

int isRoot();

SSL_CTX* InitServerCTX(void);

void LoadCertificates(SSL_CTX* ctx, char* CertFile, char* KeyFile);

void ShowCerts(SSL* ssl);

void Servlet(SSL* ssl);

int runAsServer(int count, char *strings[]);
