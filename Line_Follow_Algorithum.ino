

int derivative = 0;
int proportional = 0;
long integral = 0;

int last_proportional = 0;
int pid = 0;

const int NUM_SENSORS = 5;

const int kp = 0;
const int ki = 0;
const int kd = 0;


int pid_output(int reading)
{
 
  proportional = reading - ((NUM_SENSORS - 1) / 2) * 1000;
  derivative = proportional - last_proportional;
  integral += proportional;

  last_proportional = proportional;

  pid = kp * proportional + ki * integral + kd * derivative;
}


void setup() {

}

void loop() {

}


