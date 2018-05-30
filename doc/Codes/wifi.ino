#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

const char* ssid ="iPhone de Emma"; //"Livebox-3e0c";//"AndroidAP";//"OnePlus 5 4241";//"Livebox-385a";//"Livebox-3e0c";
const char* password ="emmadamour";//"3356931666F098A39845403845";//"cvcvcvcv"; //"solenesolene";//"14A3447FF291DACACD95F24E94"; //"3356931666F098A39845403845";
 
WiFiServer server(80);
SoftwareSerial mySerial(13,15);  //RX TX
 
void setup() {
  mySerial.begin(4800);
  Serial.begin(9600);

  delay(10);
  pinMode(13, OUTPUT);
 
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


String poudre1="";
if (request.length()==18){
  poudre1=request.substring(5,9);
}
else if(request.length()==17){
  poudre1=request.substring(5,8);
}
else{
  poudre1=request.substring(5,7);}
int poudre=poudre1.toInt();

if (poudre>1000){
  int temp=poudre/10;
  int temp2=temp+250;
  poudre=temp2/30;
}
int eau=poudre*6;
 int temp=poudre;

while(true){
if (poudre=temp)
  {mySerial.write(poudre);
  }
else {temp=poudre;
  mySerial.write(poudre);}
  // Return the response
//client.println("HTTP/1.1 200 OK");
 // client.println("Content-Type: text/html");
 // client.println(""); //  do not forget this one
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<body>");
  client.println("<style>");
  client.println("body {background-color: rgb(246,241,199)} </style>");


 
  client.print("<h2>Préparation du bibi suivant:</h2><br>");
  client.print("<strong>Quantité de lait en poudre: ");
  client.print(poudre);
  client.print("g<br><br>");
  client.print("Volume d'eau: ");
  client.print(eau);
  client.print("ml</strong>");
 

  client.println("<br><br>");
   
  client.println("</body></html>");
}

  
 
  delay(1);
  Serial.println("Client disonnected");
  Serial.println("");

}
 
