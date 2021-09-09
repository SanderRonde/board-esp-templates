// Don't ask me why but this works.
// I guess it lets PIO know where to find the files?
#ifdef ESP8266
#include <ESP8266HTTPClient.h>
#endif
#ifdef ESP32
#include <HTTPClient.h>
#endif