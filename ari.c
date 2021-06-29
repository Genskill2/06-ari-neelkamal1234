#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari( string s)
{  int count1 =0;
   int count2 =0;
   int count3 =0; 
 int n = strlen(s);
   
 
   for(int i=0;i<n;i++)
     
     { 
       if ( isalnum(s[i])==8)
            count1+=1;
 
       
        if( s[i] =='_'|| s[i]=='.' )
            count2+=1;
                     
               
         if( s[i]=='.'|| s[i]=='?')
            count3+=1;
                  
            
     } 
 
  
   for( int j=0;j<n;j++)
       {
         if(s[j]=='e'&& s[j+1]=='.' && s[j+2]=='g' && s[j+3]=='.')
         { count3 = count3-1;}
       }
      
      float ARI;
      int ari1;
      string st;
      float a1 =(float)count1/count2;
      float a2 = (float)count2/count3;
      
      ARI = 4.71*a1 + 0.5*a2 -21.43 ;
                           
      ari1 =(int)(ARI+1.0000); 
        
        
      switch(ari1)
      {
        case 1 : st ="kindergarten";break;
        case 2 : st ="First/Second Grade";break;
        case 3 : st ="Third Grade";break;
        case 4 : st ="Fourth Grade";break;  
        case 5 : st ="Fifth Grade";break;
        case 6 : st ="Sixth Grade";break;
        case 7 : st ="Seventh Grade";break;
        case 8 : st ="Eighth Grade";break;      
        case 9 : st ="Ninth Grade";break;                 
        case 10 : st ="Tenth Grade";break; 
        case 11 : st ="Eleventh Grade";break;                 
        case 12 : st ="Twelfth Grade";break;               
        case 13 : st ="College Student";break;                
        case 14 : st ="Professor";break;                  
        
        
        }
        
        
         return st;
        }
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
