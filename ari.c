#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari(string s)
{  int c1 =0;
   int c2 =0;
   int c3 =0; 
 int n = strlen(s);
   
 
   for(int i=0;i<n;i++)
     
     { 
       if ( isalnum(s[i])==1)
       { c1+=1;}
 
       
        if( s[i] ==' ')
        { c2+=1;}
                     
               
         if( s[i]=='.'|| s[i]=='?')
         { c3+=1; }
                  
            
     } c2+=1;
 
  
   for( int j=0;j<n;j++)
       {
         if(s[j]=='e'&&s[j+1]=='.'&&s[j+2]=='g'&&s[j+3]=='.')
         { c3 = c3-1;}
       }
      
      float R;
      int r;
      string t;
      float a1 =(float)c1/c2;
      float a2 = (float)c2/c3;
      
      R = 4.71*a1 + 0.5*a2 -21.43 ;
                           
      r =(int)(R+1.0000); 
 
      switch(r)
      {
        case 1 : t ="kindergarten";break;
        case 2 : t ="First/Second Grade";break;
        case 3 : t ="Third Grade";break;
        case 4 : t ="Fourth Grade";break;  
        case 5 : t ="Fifth Grade";break;
        case 6 : t ="Sixth Grade";break;
        case 7 : t ="Seventh Grade";break;
        case 8 : t ="Eighth Grade";break;      
        case 9 : t ="Ninth Grade";break;                 
        case 10 : t ="Tenth Grade";break; 
        case 11 : t ="Eleventh Grade";break;                 
        case 12 : t ="Twelfth Grade";break;               
        case 13 : t ="College Student";break;                
        case 14 : t ="Professor";break;                  
        
        
        }
        
        
         return t;
        }
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
