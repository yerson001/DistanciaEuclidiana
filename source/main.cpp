#include <bits/stdc++.h>
#include <math.h>
#include <chrono>
using namespace std;

//vectores de 4 dimensiones
vector<vector<int> > vec10M4( 10000 , vector<int> (4));
vector<vector<int> > vec15M4( 15000 , vector<int> (4));
vector<vector<int> > vec20M4( 20000 , vector<int> (4));
vector<vector<int> > vec25M4( 25000 , vector<int> (4));
//vectores de 6 dimensiones
vector<vector<int> > vec10M6( 10000 , vector<int> (6));
vector<vector<int> > vec15M6( 15000 , vector<int> (6));
vector<vector<int> > vec20M6( 20000 , vector<int> (6));
vector<vector<int> > vec25M6( 25000 , vector<int> (6));

vector<vector<int> > vec10M8( 10000 , vector<int> (8));
vector<vector<int> > vec15M8( 15000 , vector<int> (8));
vector<vector<int> > vec20M8( 20000 , vector<int> (8));
vector<vector<int> > vec25M8( 25000 , vector<int> (8));

vector<vector<int> > vec10M10( 10000 , vector<int> (10));
vector<vector<int> > vec15M10( 15000 , vector<int> (10));
vector<vector<int> > vec20M10( 20000 , vector<int> (10));
vector<vector<int> > vec25M10( 25000 , vector<int> (10));

vector<vector<int> > vec10M12( 10000 , vector<int> (12));
vector<vector<int> > vec15M12( 15000 , vector<int> (12));
vector<vector<int> > vec20M12( 20000 , vector<int> (12));
vector<vector<int> > vec25M12( 25000 , vector<int> (12));

vector<vector<int> > vec10M18( 10000 , vector<int> (18));
vector<vector<int> > vec15M18( 15000 , vector<int> (18));
vector<vector<int> > vec20M18( 20000 , vector<int> (18));
vector<vector<int> > vec25M18( 25000 , vector<int> (18));

vector<vector<int> > vec10M20( 10000 , vector<int> (20));
vector<vector<int> > vec15M20( 15000 , vector<int> (20));
vector<vector<int> > vec20M20( 20000 , vector<int> (20));
vector<vector<int> > vec25M20( 25000 , vector<int> (20));


void FillArray(vector<vector<int> > &arr,int dimen){
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<dimen; j++){
        arr[i][j] = rand()%25000+1;
    }
  }
}

void ShowArray(vector<vector<int> > &arr,int dimen){
  for(int i=0; i<arr.size(); i++){
    cout<<"[";
    for(int j=0; j<dimen; j++){
       cout<<arr[i][j]<<",";
    }
    cout<<"]";
  }
  cout<<endl;
}

void AllAgainstAll(vector<vector<int> > &arr,int Dimensions){
    int k = 0;
    float ans;
    while(k < arr.size()){//todos contra todos
        for(int i=0; i<arr.size(); i++){// itera en el numero de puntos
           for(int j=0; j<Dimensions; j++){ //itera en las dimenciones del punto
               //cout<<"["<<k<<"]["<<j<<"] = "<<vec10M4[k][j]<<" - ["<<i<<"]["<<j<<"] = "<<vec10M4[i][j]<<endl;
                ans+=(pow(arr[k][j]-arr[i][j],2));// distance
           }
           //cout<<k <<" answer = "<<sqrt(ans)<<endl;
           ans = sqrt(ans);
           ans = 0;
        }
        k++;
    }
}

void FillAllarry(){
    FillArray(vec10M4,4);
    FillArray(vec15M4,4);
    FillArray(vec20M4,4);
    FillArray(vec25M4,4);

    FillArray(vec10M6,6);
    FillArray(vec15M6,6);
    FillArray(vec20M6,6);
    FillArray(vec25M6,6);

    FillArray(vec10M8,8);
    FillArray(vec15M8,8);
    FillArray(vec20M8,8);
    FillArray(vec25M8,8);

    FillArray(vec10M10,10);
    FillArray(vec15M10,10);
    FillArray(vec20M10,10);
    FillArray(vec25M10,10);

    FillArray(vec10M12,12);
    FillArray(vec15M12,12);
    FillArray(vec20M12,12);
    FillArray(vec25M12,12);

    FillArray(vec10M18,18);
    FillArray(vec15M18,18);
    FillArray(vec20M18,18);
    FillArray(vec25M18,18);

    FillArray(vec10M20,20);
    FillArray(vec15M20,20);
    FillArray(vec20M20,20);
    FillArray(vec25M20,20);
}

void Times(){
//===============================================
    auto start = chrono::system_clock::now();{    AllAgainstAll(vec10M4,4); }
    auto end = std::chrono::system_clock::now();
    chrono::duration<double> time = end - start;
    cout << "vec10M4 time: " << time.count() << "s"<<endl;
//===============================================
    auto start1 = chrono::system_clock::now();{    AllAgainstAll(vec15M4,4); }
    auto end1 = std::chrono::system_clock::now();
    chrono::duration<double> time1 = end1 - start1;
    cout << "vec15M4 time: " << time1.count() << "s"<<endl;
//===============================================
    auto start2 = chrono::system_clock::now();{    AllAgainstAll(vec20M4,4); }
    auto end2 = std::chrono::system_clock::now();
    chrono::duration<double> time2 = end2 - start2;
    cout << "vec20M4 time: " << time2.count() << "s"<<endl;
//===============================================
    auto start3 = chrono::system_clock::now();{     AllAgainstAll(vec25M4,4);}
    auto end3 = std::chrono::system_clock::now();
    chrono::duration<double> time3 = end3 - start3;
    cout << "vec25M4 time: " << time3.count() << "s"<<endl;
//===============================================
    auto start4 = chrono::system_clock::now();{      AllAgainstAll(vec10M6,6); }
    auto end4 = std::chrono::system_clock::now();
    chrono::duration<double> time4 = end4 - start4;
    cout << "vec10M6 time: " << time4.count() << "s"<<endl;
//===============================================
    auto start5 = chrono::system_clock::now();{      AllAgainstAll(vec15M6,6); }
    auto end5 = std::chrono::system_clock::now();
    chrono::duration<double> time5 = end5 - start5;
    cout << "vec15M6 time: " << time5.count() << "s"<<endl;
//===============================================
    auto start6 = chrono::system_clock::now();{      AllAgainstAll(vec20M6,6); }
    auto end6 = std::chrono::system_clock::now();
    chrono::duration<double> time6 = end6 - start6;
    cout << "vec20M6 time: " << time6.count() << "s"<<endl;
//===============================================
    auto start7 = chrono::system_clock::now();{      AllAgainstAll(vec25M6,6); }
    auto end7 = std::chrono::system_clock::now();
    chrono::duration<double> time7 = end7 - start7;
    cout << "vec25M6 time: " << time7.count() << "s"<<endl;
//===============================================
    auto start8 = chrono::system_clock::now();{      AllAgainstAll(vec10M8,8); }
    auto end8 = std::chrono::system_clock::now();
    chrono::duration<double> time8 = end8 - start8;
    cout << "vec10M8 time: " << time8.count() << "s"<<endl;
//===============================================
    auto start9 = chrono::system_clock::now();{      AllAgainstAll(vec15M8,8); }
    auto end9 = std::chrono::system_clock::now();
    chrono::duration<double> time9 = end9 - start9;
    cout << "vec15M8 time: " << time9.count() << "s"<<endl;
//===============================================
    auto start10 = chrono::system_clock::now();{     AllAgainstAll(vec20M8,8); }
    auto end10 = std::chrono::system_clock::now();
    chrono::duration<double> time10 = end10 - start10;
    cout << "vec20M8 time: " << time10.count() << "s"<<endl;
//===============================================
    auto start11 = chrono::system_clock::now();{      AllAgainstAll(vec25M8,8); }
    auto end11 = std::chrono::system_clock::now();
    chrono::duration<double> time11 = end11 - start11;
    cout << "vec25M8 time: " << time11.count() << "s"<<endl;
//===============================================
    auto start12 = chrono::system_clock::now();{     AllAgainstAll(vec10M10,10); }
    auto end12 = std::chrono::system_clock::now();
    chrono::duration<double> time12 = end12 - start12;
    cout << "vec10M10 time: " << time12.count() << "s"<<endl;
//===============================================
    auto start13 = chrono::system_clock::now();{    AllAgainstAll(vec15M10,10); }
    auto end13 = std::chrono::system_clock::now();
    chrono::duration<double> time13 = end13 - start13;
    cout << "vec15M10 time: " << time13.count() << "s"<<endl;
//===============================================
    auto start14 = chrono::system_clock::now();{     AllAgainstAll(vec20M10,10); }
    auto end14 = std::chrono::system_clock::now();
    chrono::duration<double> time14 = end14 - start14;
    cout << "vec20M10 time: " << time14.count() << "s"<<endl;
//===============================================
    auto start15 = chrono::system_clock::now();{    AllAgainstAll(vec25M10,10);}
    auto end15 = std::chrono::system_clock::now();
    chrono::duration<double> time15 = end15 - start15;
    cout << "vec25M10 time: " << time15.count() << "s"<<endl;
//===============================================
    auto start16 = chrono::system_clock::now();{    AllAgainstAll(vec10M12,12); }
    auto end16 = std::chrono::system_clock::now();
    chrono::duration<double> time16 = end16 - start16;
    cout << "vec10M12 time: " << time16.count() << "s"<<endl;
//===============================================
    auto start17 = chrono::system_clock::now();{     AllAgainstAll(vec15M12,12); }
    auto end17 = std::chrono::system_clock::now();
    chrono::duration<double> time17 = end17 - start17;
    cout << "vec15M12 time: " << time17.count() << "s"<<endl;
//===============================================
    auto start18 = chrono::system_clock::now();{    AllAgainstAll(vec20M12,12); }
    auto end18 = std::chrono::system_clock::now();
    chrono::duration<double> time18 = end18 - start18;
    cout << "vec20M12 time: " << time18.count() << "s"<<endl;
//===============================================
    auto start19 = chrono::system_clock::now();{     AllAgainstAll(vec25M12,12); }
    auto end19 = std::chrono::system_clock::now();
    chrono::duration<double> time19 = end19 - start19;
    cout << "vec25M12 time: " << time19.count() << "s"<<endl;
//===============================================
    auto start20 = chrono::system_clock::now();{     AllAgainstAll(vec10M18,18); }
    auto end20 = std::chrono::system_clock::now();
    chrono::duration<double> time20 = end20 - start20;
    cout << "vec10M18 time: " << time20.count() << "s"<<endl;
//===============================================
    auto start21 = chrono::system_clock::now();{    AllAgainstAll(vec15M18,18); }
    auto end21 = std::chrono::system_clock::now();
    chrono::duration<double> time21 = end21 - start21;
    cout << "vec15M18 time: " << time21.count() << "s"<<endl;
//===============================================
    auto start22 = chrono::system_clock::now();{    AllAgainstAll(vec20M18,18); }
    auto end22 = std::chrono::system_clock::now();
    chrono::duration<double> time22 = end22 - start22;
    cout << "vec20M18 time: " << time22.count() << "s"<<endl;
//===============================================
    auto start23 = chrono::system_clock::now();{    AllAgainstAll(vec25M18,18); }
    auto end23 = std::chrono::system_clock::now();
    chrono::duration<double> time23 = end23 - start23;
    cout << "vec25M18 time: " << time23.count() << "s"<<endl;
//===============================================
    auto start24 = chrono::system_clock::now();{    AllAgainstAll(vec10M20,20); }
    auto end24 = std::chrono::system_clock::now();
    chrono::duration<double> time24 = end24 - start24;
    cout << "vec10M20 time: " << time24.count() << "s"<<endl;
//===============================================
    auto start25 = chrono::system_clock::now();{     AllAgainstAll(vec15M20,20); }
    auto end25 = std::chrono::system_clock::now();
    chrono::duration<double> time25 = end25 - start25;
    cout << "vec15M20 time: " << time25.count() << "s"<<endl;
//===============================================
    auto start26 = chrono::system_clock::now();{    AllAgainstAll(vec20M20,20); }
    auto end26 = std::chrono::system_clock::now();
    chrono::duration<double> time26 = end26 - start26;
    cout << "vec20M20 time: " << time26.count() << "s"<<endl;
//===============================================
    auto start27 = chrono::system_clock::now();{    AllAgainstAll(vec25M20,20); }
    auto end27 = std::chrono::system_clock::now();
    chrono::duration<double> time27 = end27 - start27;
    cout << "vec25M20 time: " << time27.count() << "s"<<endl;
//===============================================

}

int main(){
    srand (time(NULL));
    //=======init=====
     FillAllarry();// llenar todas la matrices
     Times();  //tiempos

return 0;
}
























