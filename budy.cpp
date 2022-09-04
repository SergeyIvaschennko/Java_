#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int test2b(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 6; y < 12-1; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
        break;
      }  
    }
  }
  for (int y = 6; y < 12; y++) {
    for (int x = 0; x < 11; x++) {
      if (s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test3b(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 6; y < 12-2; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12; y++) {
    for (int x = 0; x < 12-2; x++) {
      if (s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test4b(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 6; y < 12-3; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12; y++) {
    for (int x = 0; x < 12-3; x++) {
      if (s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12-1; y++) {
    for (int x = 0; x < 12-1; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y][x] == grey && s[y+1][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test5b(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 6; y < 12-4; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+4][x] == grey && s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12; y++) {
    for (int x = 0; x < 12-4; x++) {
      if (s[y][x+4] == grey && s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test6b(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 6; y < 12-5; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+5][x] == grey && s[y+4][x] == grey && s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12; y++) {
    for (int x = 0; x < 12-5; x++) {
      if (s[y][x+5] == grey && s[y][x+4] == grey && s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12-2; y++) {
    for (int x = 0; x < 12-1; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y+1][x] == grey && s[y+2][x] == grey && s[y+1][x+1] == grey && s[y+2][x+1] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 6; y < 12-1; y++) {
    for (int x = 0; x < 12-2; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y][x+2] == grey && s[y+1][x] == grey && s[y+1][x+1] == grey && s[y+1][x+2] == grey) {
        r = 1;
      }
    }
  }
  return r;
}
//  
int test2r(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 0; y < 6-1; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
        break;
      }  
    }
  }
  for (int y = 0; y < 6; y++) {
    for (int x = 0; x < 12-1; x++) {
      if (s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test3r(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 0; y < 6-2; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6; y++) {
    for (int x = 0; x < 12-2; x++) {
      if (s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test4r(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 0; y < 6-3; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6; y++) {
    for (int x = 0; x < 12-3; x++) {
      if (s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6-1; y++) {
    for (int x = 0; x < 12-1; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y][x] == grey && s[y+1][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test5r(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 0; y < 6-4; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+4][x] == grey && s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6; y++) {
    for (int x = 0; x < 12-4; x++) {
      if (s[y][x+4] == grey && s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int test6r(string s[12][12]) {
  int r = 0;
  string blue = "\033[3;44;34m..\033[0m";
  string grey = "\033[3;100;90m..\033[0m";
  for (int y = 0; y < 6-5; y++) {
    for (int x = 0; x < 12; x++) {
      if (s[y+5][x] == grey && s[y+4][x] == grey && s[y+3][x] == grey && s[y+2][x] == grey && s[y+1][x] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6; y++) {
    for (int x = 0; x < 12-5; x++) {
      if (s[y][x+5] == grey && s[y][x+4] == grey && s[y][x+3] == grey && s[y][x+2] == grey && s[y][x+1] == grey && s[y][x] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6-2; y++) {
    for (int x = 0; x < 12-1; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y+1][x] == grey && s[y+2][x] == grey && s[y+1][x+1] == grey && s[y+2][x+1] == grey) {
        r = 1;
      }
    }
  }
  for (int y = 0; y < 6-1; y++) {
    for (int x = 0; x < 12-2; x++) {
      if (s[y][x] == grey && s[y][x+1] == grey && s[y][x+2] == grey && s[y+1][x] == grey && s[y+1][x+1] == grey && s[y+1][x+2] == grey) {
        r = 1;
      }
    }
  }
  return r;
}  
int provorov(string s[12][12], int r, string y) {
  int rez;
  string bluen = "\033[3;44;37m blue \033[0m";
  string redn = "\033[3;41;37m red \033[0m";
  if (y == bluen) { 
    if (r == 2) {
      rez = test2b(s);
    }  
    if (r == 3) {
      rez = test3b(s);
    }  
    if (r == 4) {
      rez = test4b(s);
    } 
    if (r == 5) {
      rez = test5b(s);
    } 
    if (r == 6) {
      rez = test6b(s);
    } 
  }  
  if (y == redn) { 
    if (r == 2) {
      rez = test2r(s);
    }  
    if (r == 3) {
      rez = test3r(s);
    }  
    if (r == 4) {
      rez = test4r(s);
    } 
    if (r == 5) {
      rez = test5r(s);
    } 
    if (r == 6) {
      rez = test6r(s);
    }  
  }  
  return rez;
}  
int rdr() {
  int n;
  srand(time(0));
  n = (rand() % 6); 
  return n;
}  
void skip() {
  char ch;
  cout << "Вы пропускаете ход" << endl;
  cin.ignore();
  // ch = cin.get();
}  
int main() {
  int x1, x2, y1, y2, rn, dop;
  int cb = 0;
  int cr = 0;
  //Вводим игровое поле
  string s[12][12];
  int c = 0;
  string black, blackpol, red, blue, grey, white, s1, bluen, redn;
  black = "\033[3;40;30m..\033[0m";
  // blackhalf = "\033[3;40;30m0\033[0m";
  red = "\033[3;41;31m..\033[0m";
  redn = "\033[3;41;37m red \033[0m";
  blue = "\033[3;44;34m..\033[0m";
  bluen = "\033[3;44;37m blue \033[0m";
  grey = "\033[3;100;90m..\033[0m";
  white = "\033[3;47;37m..\033[0m";
  for (int y = 0; y < 12; y++) {
    for (int x = 0; x < 12; x++) {
      if (y == 0 || y == 11) {//_
        s[y][x] = black;
      }  
      else {
        s[y][x] = grey;
        s[10][10] = blue;
        s[1][1] = red;
      }
    }  
  }  
  black = "\033[3;40;30m..\033[0m";
  blackpol = "\033[3;40;37m1 \033[0m";
  s[1][0] = blackpol;
  s[0][1] = blackpol;
  blackpol = "\033[3;40;37m2 \033[0m";
  s[2][0] = blackpol;
  s[0][2] = blackpol;
  blackpol = "\033[3;40;37m3 \033[0m";
  s[3][0] = blackpol;
  s[0][3] = blackpol;
  blackpol = "\033[3;40;37m4 \033[0m";
  s[4][0] = blackpol;
  s[0][4] = blackpol;
  blackpol = "\033[3;40;37m5 \033[0m";
  s[5][0] = blackpol;
  s[0][5] = blackpol;
  blackpol = "\033[3;40;37m6 \033[0m";
  s[6][0] = blackpol;
  s[0][6] = blackpol;
  blackpol = "\033[3;40;37m7 \033[0m";
  s[7][0] = blackpol;
  s[0][7] = blackpol;
  blackpol = "\033[3;40;37m8 \033[0m";
  s[8][0] = blackpol;
  s[0][8] = blackpol;
  blackpol = "\033[3;40;37m9 \033[0m";
  s[9][0] = blackpol;
  s[0][9] = blackpol;
  blackpol = "\033[3;40;37m10\033[0m";
  s[10][0] = blackpol;
  s[0][10] = blackpol;
  for (int i = 0; i < 11; i++) {//|лево
    s[i][11] = black;
  }  
  for (int y = 0; y < 12; y++) {
    for (int x = 0; x < 12; x++) {
      cout << s[y][x];
		}
		cout << endl; 
  }  
  //
  while (cb < 50 && cr < 50) {
    dop = 0;
    cout << "Ход игрока " << bluen << endl;
    cout << "Вам выпадает ";
    rn = rdr();  
    cout << rn+1 << endl;
    if (provorov(s, rn+1, bluen) == 1 || rn+1 == 1) {
      cout << "Введите координаты" << endl;
      if (rn+1 == 1) {
        cout << "х  ";
        cin >> x1;
      }  
      else {
        cout << "х1  ";
        cin >> x1;  
      }  
      if (x1 == 2187) {
        cout << "Вы пропускаете ход" << endl;
        cin.ignore();
        char ch;
        ch = cin.get();
        system("clear");
        for (int y = 0; y < 12; y++) {
          for (int x = 0; x < 12; x++) {
            cout << s[y][x];
            if (y == 0 && x == 11) {
              cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
            }  
		      }
		      cout << endl; 
        }
      }
      else {  
        dop = 1;
        if (rn+1 == 1) {
          x2 = x1;
          cout << "y  ";
          cin >> y1;
          y2 = y1;
        }
        else { 
          // cout << "х1  ";
          // cin >> x1;
          cout << "х2  ";
          cin >> x2;
          cout << "y1  ";
          cin >> y1;
          cout << "y2  ";
          cin >> y2;
        }  
        for (int y = y1; y < y2+1; y++) {
          for (int x = x1; x < x2+1; x++) {
            s[y][x] = blue;
            cb += 1;
          }
        }    
        system("clear");
        for (int y = 0; y < 12; y++) {
          for (int x = 0; x < 12; x++) {
            cout << s[y][x];
            if (y == 0 && x == 11) {
              cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
            }  
		      }
		      cout << endl; 
        }
      }
    }   
    else {
    // if (provorov(s, rn+1, bluen) == 0) {  
      cout << "Вы пропускаете ход" << endl;
      cin.ignore();
      char ch;
      ch = cin.get();
      system("clear");
      for (int y = 0; y < 12; y++) {
        for (int x = 0; x < 12; x++) {
          cout << s[y][x];
          if (y == 0 && x == 11) {
            cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
          }  
		    }
		    cout << endl; 
      }

    }  
    //
    //
    // if (cb + cr == 100) {
    //   break;
    // }  
    //
    //
    cout << "Ход игрока " << redn << endl;
    cout << "Вам выпадает ";
    rn = rdr();
    cout << rn+1 << endl;
    if (provorov(s, rn+1, redn) == 1 || rn+1 == 1) {
      cout << "Введите координаты" << endl;
      if (rn+1 == 1) {
        cout << "х  ";
        cin >> x1;
      }  
      else {
        cout << "х1  ";
        cin >> x1;  
      }  
      if (x1 == 2187) {
        cout << "Вы пропускаете ход" << endl;
        cin.ignore();
        char ch;
        ch = cin.get();
        system("clear");
        for (int y = 0; y < 12; y++) {
          for (int x = 0; x < 12; x++) {
            cout << s[y][x];
            if (y == 0 && x == 11) {
              cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
            }  
		      }
		      cout << endl; 
        }
      }
      else {
        if (rn+1 == 1) {
          // cout << "х  ";
          // cin >> x1;
          x2 = x1;
          cout << "y  ";
          cin >> y1;
          y2 = y1;
        }
        else { 
          // cout << "х1  ";
          // cin >> x1;
          cout << "х2  ";
          cin >> x2;
          cout << "y1  ";
          cin >> y1;
          cout << "y2  ";
          cin >> y2;
        }  
        for (int y = y1; y < y2+1; y++) {
          for (int x = x1; x < x2+1; x++) {
            s[y][x] = red;
            cr += 1;
          }
        }    
        system("clear");
        for (int y = 0; y < 12; y++) {
          for (int x = 0; x < 12; x++) {
            cout << s[y][x];
            if (y == 0 && x == 11) {
              cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
            }  
		      }
		      cout << endl; 
        }
      }
    }   
    else {
    // if (provorov(s, rn+1, redn) == 0) {  
      cout << "Вы пропускаете ход" << endl;
      cin.ignore();
      char ch;
      ch = cin.get();
      system("clear");
      for (int y = 0; y < 12; y++) {
        for (int x = 0; x < 12; x++) {
          cout << s[y][x];
          if (y == 0 && x == 11) {
            cout << "  " << bluen << " " << cb << " : " << cr << " " << redn;
          }  
		    }
		    cout << endl; 
      }
    }
  }  
  if (cb > cr) {
    cout << bluen << " champion "<<endl;
  }  
  if (cr > cb) {
    cout << redn << " champion "<<endl;
  } 
  if (cr == cb) {
    cout << " Ничья " << endl;
  } 
  return 0;
} 