void forward()
{ digitalWrite(in1 , LOW);
  digitalWrite(in2 , HIGH);
  ledcWrite(channel1 , speed);

  digitalWrite(in3 , LOW);
  digitalWrite(in4 , HIGH);
  ledcWrite(channel2 , speed);

  Serial.println("Forward");

}

void backward()
{ digitalWrite(in1 , HIGH);
  digitalWrite(in2 , LOW);
  ledcWrite(channel1 , speed);

  digitalWrite(in3 , HIGH);
  digitalWrite(in4 , LOW);
  ledcWrite(channel2 , speed);

  Serial.println("Backward");
}

void left()
{ digitalWrite(in1 , HIGH);
  digitalWrite(in2 , LOW);
  ledcWrite(channel1 , speed);

  digitalWrite(in3 , LOW);
  digitalWrite(in4 , HIGH);
  ledcWrite(channel2 , speed);

  Serial.println("Left");
  
}

void right()
{ digitalWrite(in1 , LOW);
  digitalWrite(in2 , HIGH);
  ledcWrite(channel1 , speed);

  digitalWrite(in3 , HIGH);
  digitalWrite(in4 , LOW);
  ledcWrite(channel2 , speed);

  Serial.println("Right");
}

void stopRobot()
{ digitalWrite(in1 , LOW);
  digitalWrite(in2 , LOW);
  
  digitalWrite(in3 , LOW);
  digitalWrite(in4 , LOW);

  Serial.println("Stopped");
}
