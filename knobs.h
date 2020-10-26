void knobcolor(int colornum){
  switch(colornum) {
    case 0:
      analogWrite(mredPin, 0);
      analogWrite(mbluePin, 0);
      analogWrite(mgreenPin, 255);
    break;
    case 2:
      analogWrite(mredPin, 255);
      analogWrite(mbluePin, 0);
      analogWrite(mgreenPin, 255);
    break;
    case 3:
      analogWrite(mredPin, 255);
      analogWrite(mbluePin, 255);
      analogWrite(mgreenPin, 0);
    break;
    case 1:
      analogWrite(mredPin, 192);
      analogWrite(mbluePin, 0);
      analogWrite(mgreenPin, 255);
    break;
    case 4:
      analogWrite(mredPin, 255);
      analogWrite(mbluePin, 0);
      analogWrite(mgreenPin, 0);
    break;
    case 5:
      analogWrite(mredPin, 0);
      analogWrite(mbluePin, 0);
      analogWrite(mgreenPin, 0);
    break;
    case 6:
      analogWrite(mredPin, 0);
      analogWrite(mbluePin, 255);
      analogWrite(mgreenPin, 0);
    break;
    case 7:
      analogWrite(mredPin, 0);
      analogWrite(mbluePin, 255);
      analogWrite(mgreenPin, 255);
    break;
  }
}

void knobscolor(int colornum){
  switch(colornum) {
    case 0:
      analogWrite(redPin, 255);
      analogWrite(bluePin, 255);
      analogWrite(greenPin, 0);
    break;
    case 2:
      analogWrite(redPin, 0);
      analogWrite(bluePin, 255);
      analogWrite(greenPin, 0);
    break;
    case 3:
      analogWrite(redPin, 0);
      analogWrite(bluePin, 0);
      analogWrite(greenPin, 255);
    break;
    case 1:
      analogWrite(redPin, 63);
      analogWrite(bluePin, 255);
      analogWrite(greenPin, 0);
    break;
    case 4:
      analogWrite(redPin, 0);
      analogWrite(bluePin, 255);
      analogWrite(greenPin, 255);
    break;
    case 5:
      analogWrite(redPin, 255);
      analogWrite(bluePin, 255);
      analogWrite(greenPin, 255);
    break;
    case 6:
      analogWrite(redPin, 255);
      analogWrite(bluePin, 0);
      analogWrite(greenPin, 255);
    break;
    case 7:
      analogWrite(redPin, 255);
      analogWrite(bluePin, 0);
      analogWrite(greenPin, 0);
    break;
  }
}

