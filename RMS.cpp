/* Author: Ayesha Ali
Date: 4th February 2018
The program helps us to enter, display or alter the details of different trains and passengers. Moreover & most importantly the program helps us to reserve or cancel a train ticket. The program also helps us to know the present status of a reserved ticket, i.e. whether the ticket is confirmed or pending. It includes various function programs to do the above mentioned tasks. */
#include<iostream.h>

#include<conio.h>

#include<fstream.h>

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

class train {
  private:
    int trainno, nofafseat, nofasseat, noffsseat, nofacseat, nofssseat;
    char trainname[60], startingpoint[60], destination[60];
    int resno, toaf[50], toas[50], tofs[50], toac[50], toss[50], age, sno;
    char status[40], name[40], clas[50];
  public:
    train() {
      trainno = 0;
      nofafseat = 0;
      nofasseat = 0;
      noffsseat = 0;
      nofacseat = 0;
      nofssseat = 0;
      strcpy(trainname, "/0");
      strcpy(startingpoint, "/0");
      strcpy(destination, "/0");
      resno = 0;
      age = 0;
      strcpy(status, "/0");
      strcpy(name, "/0");
    }

  void input() {
    //To get details of train
    cout << "ENTER THE TRAIN NUMBER\t";
    cin >> trainno;
    cout << "ENTER THE TRAIN NAME\t";
    gets(trainname);
    cout << "ENTER THE STARTING POINT\t";
    gets(startingpoint);
    cout << "ENTER THE DESTINATION\t ";
    gets(destination);
    cout << "ENTER THE NUMBER OF A/C FIRST CLASS SEATS\t";
    cin >> nofafseat;
    cout << "ENTER THE NUMBER OF A/C SECOND CLASS SEATS\t";
    cin >> nofasseat;
    cout << "ENTER THE NUMBER OF FIRST CLASS SLEEPER SEATS\t";
    cin >> noffsseat;
    cout << "ENTER THE NUMBER OF A/C CHAIR CAR SEATS\t";
    cin >> nofacseat;
    cout << "ENTER THE NUMBER OF SECOND CLASS SLEEPER SEATS\t";
    cin >> nofssseat;
  }
  int ret() {
    //To return reservation number
    return resno;
  }
  int trn() {
    //To return train number
    return trainno;
  }
  void reservation() {
    //To get details of passenger.
    int i, f = 0;
    for (i = 1; i <= nofafseat; i++)
      toaf[50] = i;
    for (i = 1; i <= nofasseat; i++)
      toas[50] = i;
    for (i = 1; i <= noffsseat; i++)
      tofs[50] = i;
    for (i = 1; i <= nofacseat; i++)
      toac[50] = i;
    for (i = 1; i <= nofssseat; i++)
      toss[50] = i;
    cout << "NAME:\t";
    gets(name);
    cout << "AGE:\t";
    cin >> age;
    cout << "RESERVATION NO\t";
    cin >> resno;
    cout << "SELECT THE CLASS WHICH YOU WISH TO TRAVEL\n";
    cout << "1.A/C FIRST CLASS\n" << "2.A/C SECOND CLASS\n" << "3.FIRST CLASS SLEEPER\n" << "4.A/C CHAIR CAR \n" << "5.SECOND CLASS SLEEPER\n";
    cout << "ENTER YOUR CHOICE ";
    int c;
    cin >> c;
    switch (c) {
    case 1:
      cout << "Seat no\t";
      for (i = 1; i <= nofafseat; i++)
        cout << i << " ";
      cout << "Chose seat no\t";
      cin >> sno;
      for (i = 1; i <= nofafseat; i++) {
        if (toas[i] = sno)
          f = 0;
        else
          f = 1;
      }
      if (f == 0) {
        strcpy(clas, "A/C FIRST CLASS");
        strcpy(status, "confirmed");
      }
      if (f == 1) {
        cout << "Chose another seat";
        strcpy(status, "pending");
      }
      break;
    case 2:
      cout << "Seat no\t";
      for (i = 1; i <= nofasseat; i++)
        cout << i << " ";
      cout << "Chose seat no\t";
      cin >> sno;
      for (i = 1; i <= nofasseat; i++) {
        if (toaf[i] = sno)
          f = 0;
        else
          f = 1;
      }
      if (f == 0) {
        strcpy(clas, "A/C SECOND CLASS");
        strcpy(status, "confirmed");
      }
      if (f == 1) {
        cout << "Chose another seat";
        strcpy(status, "pending");
      }
      break;
    case 3:
      cout << "Seat no\t";
      for (i = 1; i <= noffsseat; i++)
        cout << i << " ";
      cout << "Chose seat no\t";
      cin >> sno;
      for (i = 1; i <= noffsseat; i++) {
        if (tofs[i] = sno)
          f = 0;
        else
          f = 1;
      }
      if (f == 0) {
        strcpy(clas, "FIRST CLASS SLEEPER");
        strcpy(status, "confirmed");
      }
      if (f == 1) {
        cout << "Chose another seat";
        strcpy(status, "pending");
      }
      break;
    case 4:
      cout << "Seat no\t";
      for (i = 1; i <= nofacseat; i++)
        cout << i << " ";
      cout << "Chose seat no\t";
      cin >> sno;
      for (i = 1; i <= nofacseat; i++) {
        if (toac[i] = sno)
          f = 0;
        else
          f = 1;
      }
      if (f = 0) {
        strcpy(clas, "AC CHAIR CAR");
        strcpy(status, "confirmed");
      }
      if (f == 1) {
        cout << "Chose another seat";
        strcpy(status, "pending");
      }
      break;
    case 5:
      cout << "Seat no\t";
      for (i = 1; i <= nofssseat; i++)
        cout << i << " ";
      cout << "Chose seat no\t";
      cin >> sno;
      for (i = 1; i <= nofssseat; i++) {
        if (toss[i] = sno)
          f = 0;
        else
          f = 1;
      }
      if (f = 0) {
        strcpy(clas, "SECOND CLASS SLEEPER");
        strcpy(status, "confirmed");
      }
      if (f == 1) {
        cout << "Chose another seat";
        strcpy(status, "pending");
      }
      break;
    }
  }
  void dis_res() {
    //To display passenger details.
    cout << "NAME:\t";
    puts(name);
    cout << "\nAGE:\t" << age << "\nRESERVATION NO\t" << resno << "\nSTATUS:\t" << status << "\nCLASS:\t";
    puts(clas);
  }
  void dis_train() {
    //To display train details
    cout << "\nTRAIN NO\t" << trainno << "\nTRAIN NAME\t";
    puts(trainname);
    cout << "\nSTARTING POINT\t";
    puts(startingpoint);
    cout << "ENTER THE DESTINATION\t";
    puts(destination);
    cout << "NUMBER OF A/C FIRST CLASS SEATS\t" << nofafseat <<
      "\nNUMBER OF A/C SECOND CLASS SEATS\t" << nofasseat <<
      "\nNUMBER OF FIRST CLASS SLEEPER SEATS\t" << noffsseat <<
      "\nNUMBER OF A/C CHAIR CAR SEATS\t" << nofacseat <<
      "\nNUMBER OF SECOND CLASS SLEEPER SEATS\t" << nofssseat;
  }
  void dis_all() {
    //To display all details
    cout << "\nTRAIN NO\t" << trainno << "\nTRAIN NAME\t";
    puts(trainname);
    cout << "\nSTARTING POINT\t";
    puts(startingpoint);
    cout << "ENTER THE DESTINATION\t";
    puts(destination);
    cout << "NUMBER OF A/C FIRST CLASS SEATS\t" << nofafseat <<
      "\nNUMBER OF A/C SECOND CLASS SEATS\t" << nofasseat <<
      "\nNUMBER OF FIRST CLASS SLEEPER SEATS\t" << noffsseat <<
      "\nNUMBER OF A/C CHAIR CAR SEATS\t" << nofacseat <<
      "\nNUMBER OF SECOND CLASS SLEEPER SEATS\t" << nofssseat;
    cout << "\nNAME:\t";
    puts(name);
    cout << "\nAGE:\t" << age << "\nRESERVATION NO\t" << resno << "\nSTATUS:\t" << status << "\nCLASS:\t";
    puts(clas);
  }
}
tr;
void write_train() {
  //To write train details in file “train.dat”.
  ofstream f;
  f.open("train.dat", ios::app);
  tr.input();
  f.write((char * ) & tr, sizeof(tr));
  f.close();
}
void write() {
  //To write passenger details in file “train.dat”.
  ofstream f;
  f.open("train.dat", ios::app);
  tr.reservation();
  f.write((char * ) & tr, sizeof(tr));
  f.close();
}
void read_res() {
  //To read passenger details from file “train.dat”.
  ifstream fi;
  fi.open("train.dat");
  while (fi.read((char * ) & tr, sizeof(tr)))
    tr.dis_res();
  fi.close();
}
void read_tn() {
  //To read train details from file “train.dat”.
  ifstream fi;
  fi.open("train.dat");
  while (fi.read((char * ) & tr, sizeof(tr)))
    tr.dis_train();
  fi.close();
}
void read_all() {
  //To read all details of booking from file “train.dat”.
  ifstream fi;
  fi.open("train.dat");
  while (fi.read((char * ) & tr, sizeof(tr)))
    tr.dis_all();
  fi.close();
}
void modify_res() {
  //To modify passenger details of file “train.dat”.
  int n;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER  RESERVATION NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.ret()) {
      tr.reservation();
    }
    f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}
void modify_train() {
  //To modify train details of file “train.dat”.
  int n;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER TRAIN NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.trn()) {
      tr.input();
    }
    f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}
void modify_all() {
  //To modify booking details of file “train.dat”.
  int n, res;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER TRAIN NO\t";
  cin >> n;
  cout << "ENTER RESERVATION NO\t";
  cin >> res;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.trn() && res == tr.ret()) {
      tr.input();
    }
    f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}

void del_res() {
  //To delete a passenger record from file “train.dat”.
  int n;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER  RESERVATION NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n != tr.ret())
      f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}
void del_train() {
  //To delete a train record from file “train.dat”.
  int n;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER TRAIN NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n != tr.trn())
      f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}
void del_all() {
  //To delete a booking record from file “train.dat”.
  int n, t;
  ofstream f;
  ifstream fi;
  fi.open("train.dat");
  f.open("temp.dat");
  cout << "ENTER TRAIN NO\t";
  cin >> n;
  cout << "ENTER RESERVATION NO\t";
  cin >> t;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n != tr.trn() && t != tr.ret())
      f.write((char * ) & tr, sizeof(tr));
  }
  fi.close();
  f.close();
  remove("train.dat");
  rename("temp.dat", "train.dat");
}
void search_res() {
  //To search a passenger record from file “train.dat”.
  int f = 0, n;
  ifstream fi("train.dat");
  cout << "ENTER  RESERVATION NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.ret()) {
      f = 1;
      tr.dis_res();
    }
  }
  fi.close();
  if (f == 0)
    cout << "NO FILE";
}
void search_trn() {
  //To search a train record from file “train.dat”.
  int f = 0, n;
  ifstream fi("train.dat");
  cout << "ENTER TRAIN NO\t";
  cin >> n;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.trn()) {
      f = 1;
      tr.dis_train();
    }
  }
  fi.close();
  if (f == 0)
    cout << "NO FILE";
}
void search_all() {
  //To search a booking record from file “train.dat”.
  int f = 0, n, tn;
  ifstream fi("train.dat");
  cout << "ENTER RESERVATION NO\t";
  cin >> n;
  cout << "ENTER TRAIN NO\t";
  cin >> tn;
  while (fi.read((char * ) & tr, sizeof(tr))) {
    if (n == tr.ret() && tn == tr.trn()) {
      f = 1;
      tr.dis_res();
      tr.dis_train();
    }
  }
  fi.close();
  if (f == 0)
    cout << "NO FILE";
}
int main() {
  int c;
  do {
    cout << "\nWELCOME TO TRAIN RESERVATION SYSTEM\n";
    cout << "1.ENTER DETAILS OF TRAIN\n" << "2.ENTER DETAILS OF PASSENGER\n" << "3.DISPLAY DETAILS OF TRAIN\n" << "4.DISPLAY DETAILS OF PASSENGER\n" <<
      "5.DISPLAY BOOKING\n" << "6.MODIFY DETAILS TRAIN\n" << "7.MODIFY DETAILS OF PASSENGER\n" << "8.MODIFY BOOKING\n" << "9.DELETE TRAIN\n" <<
      "10.DELETE PASSENGER\n" << "11.DELETE BOOKING\n" << "12.SEARCH TRAIN\n" << "13.SEARCH PASSENGER\n" << "14.SEARCH BOOKING\n" << "15.EXIT\n" <<
      "\nENTER CHOICE\t";
    cin >> c;
    switch (c) {
    case 1:
      write_train();
      break;
    case 2:
      write();
      break;
    case 3:
      read_tn();
      break;
    case 4:
      read_res();
      break;
    case 5:
      read_all();
      break;
    case 6:
      modify_train();
      break;
    case 7:
      modify_res();
      break;
    case 8:
      modify_all();
      break;
    case 9:
      del_train();
      break;
    case 10:
      del_res();
      break;
    case 11:
      del_all();
      break;
    case 12:
      search_trn();
      break;
    case 13:
      search_res();
      break;
    case 14:
      search_all();
      break;
    case 15:
      break;
    }
  } while (c != 15);
  return 0;
  getch();
}
