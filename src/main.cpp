#include "lib-includes.h"
#include "lib-telnet.h"
#include "lib-main.h"
#include "lib-ota.h"
#include "secrets.h"
#include "string.h"
#include "config.h"
#include "hack.h"

void setup()
{
	Main::connect(NAME, OTA_PW, WIFI_SSID, WIFI_PW);
	// TODO: setup
	Main::connect_done();
}

void loop()
{
	OTA::loop();
	Telnet::loop();
	
	// TODO: loop
}
