#include <stdio.h>
#include <string.h>
#include <cs50.h>

string ari( string s)
{  int count1 =0;
   int count2 =0;
   int count3 =0;
   
 
   for(int i=0;s[i]!='\0';i++)
     
     { 
       if ( s[i]>=48 && s[i]<=57)
            count1++;
      
      else if( (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) )
               count1++;
      
      
            else{
                  if( s[i] =='_' )
                     count2++;
                     
                     else{
                           if( s[i]=='_'|| s[i]=='?')
                              count3++;
                          }
                } 
     }  count2++;
  
                   for( int i=0;s[i]!='\0';i++)
                        if(s[i]=='e'&& s[i+1]=='.' && s[i+2]=='g' && s[i+3]=='.')
                              count3 = count3-1;
 
      float ARI;
      int ari1;
      string st;
      
      ARI = 4.71*((float)(count1/count2)) + 0.5*((float)(count2/count3)) -21.43 ;
                           
     ari1 =(int)ARI+1; 
        
        
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
        default :printf( " Invalid Choice \n" );
        
        }
        
        
         return st;
        }
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
