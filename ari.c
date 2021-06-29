#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari(string b)
{  int c1 =0;
   int c2 =0;
   int c3 =0; 
 int n = strlen(b);
   
 
   for(int i=0;i<n;i++)
     
     { 
       if ( isalnum(b[i])==1)
              { c1+=1;}
 
       
        if( b[i] ==' ')
            { c2+=1;}
                     
               
         if( b[i]=='.'|| b[i]=='?'|| b[i]=='!')
              { c3+=1; }
                  
            
     } 
 
  
   for( int j=0;j<n;j++)
       {
         if(b[j]=='e'&&b[j+1]=='.'&&b[j+2]=='g'&&b[j+3]=='.')
         { c3-=1;}
       }
 
 for( int k=0;k<n;k++)
     { 
          if(b[k]=='-')
              {c2+=1;}  
       } 
    c2+=1;
    
    
      
      float R;
      int r;
      string t;
      float a1 =(float)c1/c2;
      float a2 =(float)c2/c3;
      
      R = 4.71*a1+0.5*a2-21.43;
                           
      r =(int)R; 
      r+=1;
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
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
