//**********************Virtual function example************************
#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
  protected:
  string title;
  float rating;
   public:
   CWH(string s,float r)
   {
    title = s;
    rating = r;
   }
   virtual void display(){}
};

class CWHvideo: public CWH
{
 float videolength;
 public:
 CWHvideo(string s, float r,float vl) : CWH(s,r)
 {
    videolength=vl;
 }
  void display()
 {
    cout<<"CWH djangoVideo classes"<<endl;
    cout<<"Title of video: "<<title<<endl;
    cout<<"Ratings: "<<rating<<endl;
    cout<<"Video length: "<<videolength<<endl;
 }
};
class CWHtext: public CWH
{
 int words;
 public:
 
 CWHtext(string s, float r,int wc) : CWH(s,r)
 {
        words=wc;
 }
// void display()
// {
//    cout<<"CWH djangotext classes"<<endl;
//    cout<<"Title of video: "<<title<<endl;
//    cout<<"Ratings: "<<rating<<endl;
//    cout<<"Words in text: "<<words<<endl;
// }
};
int main()
{  
   string Title ;
   float ratings;
   float videolen;
   int words;
    Title ="Django video";
   ratings = 4.5;
   videolen = 4.8;
  
   CWHvideo djvideo(Title,ratings,videolen);
  // djvideo.display();

     Title ="Django text";
     ratings = 4.1;
     words = 40;

    CWHtext djtext(Title,ratings,words);
   // djtext.display();

    CWH *obj[2];
    obj[0] = &djvideo;
    obj[1] = &djtext;

    obj[0]->display();
    obj[1]->display();
    return 0;
}