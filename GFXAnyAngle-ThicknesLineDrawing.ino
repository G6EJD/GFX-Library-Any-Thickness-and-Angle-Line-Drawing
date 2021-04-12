void setup() {
  // put your setup code here, to run once:


}

void DrawAngledLine(int x, int y, int x1, int y1, int size, int color) {
  float dx = (size / 2.0) * (x - x1) / sqrt(sq(x - x1) + sq(y - y1));
  float dy = (size / 2.0) * (y - y1) / sqrt(sq(x - x1) + sq(y - y1));
  fillTriangle(x + dx, y - dy, x - dx,  y + dy,  x1 + dx, y1 - dy, color);
  fillTriangle(x - dx, y + dy, x1 - dx, y1 + dy, x1 + dx, y1 - dy, color);
}

void loop() {
  // put your main code here, to run repeatedly:

}
