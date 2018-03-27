 
int ledred=3; //Pin LED Red
int ledgreen=5;//Pin LED Green
int ledblue=6; //Pin LED Blue

String readString;

 
void setup()
{
  Serial.begin(9600);

  pinMode(ledred,OUTPUT);
  pinMode(ledgreen,OUTPUT);
  pinMode(ledblue,OUTPUT);
}
 
void loop()
{
    //Cuando haya datos disponibles
    if (Serial.available()>0)

  
    {
    
       
       int red = Serial.parseInt(); //Leemos el primer valor entero (Red) y lo almacenamos en la variable
 
        int green = Serial.parseInt(); //Leemos el segundo valor entero (Green) y lo almacenamos en la variable
 
        int blue = Serial.parseInt(); //Leemos el último valor entero (Blue) y lo almacenamos en la variable
 
        //Cuando lea el carácter fin de línea ('\n') quiere decir que ha finalizado el envío de los tres valores
        if (Serial.read() == '\n')
        {
          //Enviamos los valores de los tres colores al LED RGB através de PWM
          analogWrite(ledred,red);
          analogWrite(ledgreen,green);
          analogWrite(ledblue,blue);
        }
  }
}
 

