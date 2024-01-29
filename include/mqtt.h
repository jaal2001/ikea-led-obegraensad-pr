#pragma once

#ifdef ESP8266
#include <ESP8266WiFi.h>
#endif

#include <PubSubClient.h>
#include "secrets.h"
#include "websocket.h"
#include "storage.h"
#include "screen.h"

extern WiFiClient espClient;
extern PubSubClient MQTTclient;

void mqttCallback(char* topic, byte* payload, unsigned int length);

void mqttSetup();

void mqttReconnect();
