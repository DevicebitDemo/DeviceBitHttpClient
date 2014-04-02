#ifndef __DEVICEBITHTTPCLIENT_H__
#define __DEVICEBITHTTPCLIENT_H__

#include <Ethernet.h>

class DeviceBitHttpClient
{
public:
    DeviceBitHttpClient(const char * user_key, const char *gateway);
//    int begin();
    int append(const char * name, int value);
    int append(const char * name, double value);
//    int end();
    int send();
private:
    char head[160];

    char * user_data;
    int user_str_length;

    bool begin;
    bool end;

    EthernetClient client;
};

#endif /* end of include guard: __DEVICEBITHTTPCLIENT_H__ */
