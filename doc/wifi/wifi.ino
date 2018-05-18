#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

const char* ssid = "Livebox-3e0c";//"AndroidAP";//"OnePlus 5 4241";//"Livebox-385a";//"Livebox-3e0c";
const char* password ="3356931666F098A39845403845";//"cvcvcvcv"; //"solenesolene";//"14A3447FF291DACACD95F24E94"; //"3356931666F098A39845403845";
 
int ledPin = 13; // GPIO13
WiFiServer server(80);
SoftwareSerial mySerial(1,3);  //RX TX
 
void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);

  delay(10);
 
  pinMode(13, OUTPUT);
  digitalWrite(ledPin, LOW);
 
  // Connect to WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
 
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
 
  // Start the server
  server.begin();
  Serial.println("Server started");
 
  // Print the IP address
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
 
}
 
void loop() {
  // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) {
    return;
  }
 
  // Wait until the client sends some data
  Serial.println("new client");
  while(!client.available()){
    delay(1);
  }
 
  // Read the first line of the request
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

//int eau1=eau.toInt()+1;

//Serial.println("eau1:"+eau1);

String poudre1="";
poudre1=String(request.substring(5,7));
mySerial.print(request.substring(5,7));

int poudre=poudre1.toInt();
   
int eau=poudre*6;


  // Return the response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); //  do not forget this one
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
 
  client.print("<h2>Préparation du bibi suivant:</h2><br>");
  client.print("<strong>Quantité de lait en poudre: ");
  client.print(poudre);
  client.print("g<br><br>");
  client.print("Volume d'eau: ");
  client.print(eau);
  client.print("ml</strong>");
 

  client.println("<br><br>");
   
  client.println("</html>");
 
  delay(1);
  Serial.println("Client disonnected");
  Serial.println("");
 
}
 
