int row[8] = {2, 7, 19, 5, 13, 18, 12, 16};
int col[8] = {6, 11, 10, 3, 17, 4, 8, 9};

int ground[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

int t = 0;
int s = 0;
int r = 0;
int temp_pos = 0;
int point = 0;
boolean point_w = true;

void setup(){
  Serial.begin(9600);
  Serial.println("Start "+point);
  for(int i = 0; i <8; i ++){
    pinMode(col[i], OUTPUT);
    pinMode(row[i], OUTPUT);
  }
}
void clear(){
  for(int k = 0; k < 8; k++){ 
    digitalWrite(row[k],HIGH);
    digitalWrite(col[k],LOW);
  }  
}
void loop(){
  r=t%1000;
  //Serial.println(s); 
  
  int pos = analogRead(A1)/128;  
  //Serial.println(pos); 
  
  if(r==0){
    point_w = true;
    //move rain
    for(int a = 7; a >= 0; a--){ 
      for(int b = 0; b < 8; b++){ 
        if(a==7){
          if(ground[a][b]==2 && ground[a-1][b]==1 && point_w == true){
            point_w = false; 
            PointUp();
           }else{
            ground[a][b]=ground[a-1][b];
            }
        }else{
        ground[a][b]=ground[a-1][b];
        }
      }
   } 
    //make rain
    for(int k = 0; k < 8; k++){ 
      ground[0][k]=0;
    } 
    int v = random(0,8);
    ground[0][v]=1;
  }

  ground[7][temp_pos]=0;
  if(ground[7][pos]==1){
    PointUp();
  }else{
    ground[7][pos]=2;
  }
  //draw
  for(int j = 0; j < 8; j++){  
    clear();
    digitalWrite(row[j],LOW);
    for(int i = 0; i < 8; i++){
      if(ground[j][i]==1) digitalWrite(col[i],HIGH);
      if(ground[j][i]==2) digitalWrite(col[i],HIGH);
    }
  }
  temp_pos=pos;
  t++;
}
void PointUp(){
    point++;
    Serial.println(point);
}
